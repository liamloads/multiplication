#include <stdio.h>

void _0(char _1[], int *_2, int *_3, int *_4) {
    strncat(_1, ".", 1);
    int _5 = 0;

    if (_1[0] == '-') {
        *_4 += 1;
        _5++;
    }

    while (_1[_5++] == '0') {}

    int _6 = --_5;
    int _7 = 0;
    int _8 = 0;

    while (_1[_5] != '.') {
        _7 = _1[_5++] - 48;
        _7 = ~((_7 >> 1) + (_7 - 14)) + 1;

        if ((_7 & 15) != _7) {
            *_4 = -1;
            return;
        }

        _8++;
    }

    *_2 = _8;

    if (_1[++_5] != '\0') {
        while (_1[_5] != '.') {
            _7 = _1[_5++] - 48;
            _7 = ~((_7 >> 1) + (_7 - 14)) + 1;

            if ((_7 & 15) != _7) {
                *_4 = -1;
                return;
            }

            _8++;
        }

        if (_1[_5 - 1] == '0') {
            while (_1[--_5] == '0') {
                _8--;
            }
        }
    }

    char _9[_8];
    _9[0] = '\0';
    strncat(_9, &_1[_6++], *_2);
    strncat(_9, &_1[*_2 + _6], _8 - *_2);
    _1[0] = '\0';
    strncat(_1, _9, _8);
    *_3 = _8;
}

void _1(int _2[], int *_3, int _4[], int *_5, int *_6) {
    int _7 = *_6 - 1;
    int _8 = *_6 - 1;
    int _9 = 0;
    int _10 = 0;
    int _11 = 0;

    while (*_5 != _9++) {
        _10 = _2[_7] + _4[_8--];
        _11 = _7--;
        _2[_11] = _10;
        _10 -= 10;

        while ((_10 & 7) == _10) {
            _2[_11--] = _10;
            _10 = _2[_11] + 1;
            _2[_11] = _10;
            _10 -= 10;
        }
    }

    if (_2[*_3 - 1] != 0) {
        *_3 -= 1;
    }
}

int main(int _2, char *_3[]) {
    if ((_3[1] == (void *)0) || (_3[2] == (void *)0)) {
        printf("false");
        return 0;
    }

    int _4 = 0;
    int _5 = 0;

    while (_3[1][_5++] != '\0') {}

    char _6[_5];
    _6[0] = '\0';
    strncat(_6, _3[1], _5);
    int _7 = 0;
    _0(_6, &_4, &_5, &_7);

    if (_7 == -1) {
        printf("false");
        return 0;
    }

    int _8 = 0;
    int _9 = 0;

    while (_3[2][_9++] != '\0') {}

    char _10[_9];
    _10[0] = '\0';
    strncat(_10, _3[2], _9);
    _0(_10, &_8, &_9, &_7);

    if (_7 == -1) {
        printf("false");
        return 0;
    }

    int _11 = _5 - _9;
    int _12 = ~_11 / _11;
    _11 = _5 + _9;
    int _13[_11];
    int _14[_11];
    int _15 = 0;
    int _16 = 0;

    if (_12 == 0) {
        _12 = _11 - _9;

        while (_12 != _15) {
            _13[_15++] = 0;
        }

        _16 = 0;

        while (_11 != _15) {
            _13[_15++] = (_10[_16++] + '0') - 96;
        }

        _12 = 0;

        while (_5 != _12) {
            _14[_12] = (_6[_12] + '0') - 96;
            _12++;
        }
    } else {
        _12 = _11 - _5;

        while (_12 != _15) {
            _13[_15++] = 0;
        }

        _16 = 0;

        while (_11 != _15) {
            _13[_15++] = (_6[_16++] + '0') - 96;
        }

        _5 = _9;
        _12 = 0;

        while (_9 != _12) {
            _14[_12] = (_10[_12] + '0') - 96;
            _12++;
        }
    }

    _9 = 0;
    int _17[++_5];
    int _18[_5];
    int _19[_5--];

    while (_5 != _9) {
        _17[_9] = 0;
        _18[_9] = 0;
        _19[_9++] = 0;
    }

    _9 = 0;

    while (_13[_9++] == 0) {}

    _9 = _11 - _9;
    _12 = _5;
    _15 = _5;
    _16 = _5;
    _17[_5] = 1;
    _18[_5] = 1;
    _19[_5] = 1;
    int _20 = 0;
    int _21 = 0;
    int _22 = 0;

    while (_20 == 0) {
        _1(_17, &_12, _19, &_15, &_5);
        _21 = 0;

        while (_5 != _21) {
            _22 = _14[_21] - _17[_21];
            _21++;

            if (_22 != 0) {
                if ((_22 & 15) == _22) {
                    // todo
                } else {
                    _21 = 0;

                    while (_5 != _21) {
                        _19[_21++] = 0;
                    }

                    _19[_21] = 1;
                    // todo
                }

                // todo
                _21 = _5;
            }
        }

        if (_22 == 0) {
            _20 = 1;
        }
    }

    // todo
    return 0;
}
