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
    int _7 = *_6;
    int _8 = _7;
    int _9 = _7;
    int _10 = 0;
    int _11 = 0;

    while (*_5 != _7--) {
        _10 = _2[_8] + _4[_9--];
        _11 = _8--;
        _2[_11] = _10;
        _10 -= 10;

        while ((_10 & 15) == _10) {
            _2[_11--] = _10;
            _10 = _2[_11] + 1;
            _2[_11] = _10;
            _10 -= 10;
        }
    }

    if (_2[*_3] != 0) {
        *_3 -= 1;
    }
}

void _2(int _3[], int *_4, int *_5) {
    int _6[*_5];
    int _7 = *_5 + 1;
    int _8 = -1;

    while (_7 != ++_8) {
        _6[_8] = _3[_8];
    }

    _7--;
    int _9 = --_8;
    int _10 = 0;
    int _11 = 0;

    while (*_4 != _7--) {
        _10 = _3[_8] + _6[_9--];
        _11 = _8--;
        _3[_11] = _10;
        _10 -= 10;

        while ((_10 & 15) == _10) {
            _3[_11--] = _10;
            _10 = _3[_11] + 1;
            _3[_11] = _10;
            _10 -= 10;
        }
    }

    if (_3[*_4] != 0) {
        *_4 -= 1;
    }
}

int main(int _3, char *_4[]) {
    if ((_4[1] == (void *)0) || (_4[2] == (void *)0)) {
        printf("false");
        return 0;
    }

    int _5 = 0;
    int _6 = 0;

    while (_4[1][_6++] != '\0') {}

    char _7[_6];
    _7[0] = '\0';
    strncat(_7, _4[1], _6);
    int _8 = 0;
    _0(_7, &_5, &_6, &_8);

    if (_8 == -1) {
        printf("false");
        return 0;
    }

    int _9 = 0;
    int _10 = 0;

    while (_4[2][_10++] != '\0') {}

    char _11[_10];
    _11[0] = '\0';
    strncat(_11, _4[2], _10);
    _0(_11, &_9, &_10, &_8);

    if (_8 == -1) {
        printf("false");
        return 0;
    }

    int _12 = _6 - _10;
    int _13 = ~_12 / _12;
    _12 = _6 + _10;
    int _14[_12];
    int _15[_12];
    int _16[_12];
    int _17[_12];
    int _18 = 0;
    int _19 = 0;

    if (_13 == 0) {
        _13 = _12 - _10;

        while (_13 != _18) {
            _14[_18++] = 0;
        }

        _19 = 0;

        while (_12 != _18) {
            _14[_18++] = (_11[_19++] + '0') - 96;
        }

        _13 = 0;

        while (_6 != _13) {
            _15[_13] = (_7[_13] + '0') - 96;
            _13++;
        }
    } else {
        _13 = _12 - _6;

        while (_13 != _18) {
            _14[_18++] = 0;
        }

        _19 = 0;

        while (_12 != _18) {
            _14[_18++] = (_7[_19++] + '0') - 96;
        }

        _6 = _10;
        _13 = 0;

        while (_10 != _13) {
            _15[_13] = (_11[_13] + '0') - 96;
            _13++;
        }
    }

    _10 = 0;
    int _20[++_6];
    int _21[_6];
    int _22[_6--];

    while (_6 != _10) {
        _20[_10] = 0;
        _21[_10] = 0;
        _22[_10++] = 0;
    }

    _10 = 0;

    while (_14[_10++] == 0) {}

    _10 = _12 - _10;
    _13 = --_6;
    _18 = _6;
    _19 = _6++;
    _20[_6] = 1;
    _21[_6] = 1;
    _22[_6] = 1;
    int _23 = 0;
    int _24 = 0;
    int _25 = 0;
    int _26 = 0;

    while (_23 == 0) {
        _1(_20, &_13, _22, &_18, &_6);
        _24 = 0;
        _25 = 0;

        while (_6 != _24) {
            _26 = (_15[_24++] - _20[++_25]) - (_20[0] << 4);

            if (_26 != 0) {
                _24 = _6;
                _25 = _13 - 1;

                if ((_26 & 15) == _26) {
                    _2(_22, &_18, &_6);

                    while (_24 != _25) {
                        _21[_24] = _20[_24];
                        _24--;
                    }

                    // todo
                } else {
                    _13 += _20[0];
                    _22[_6] = 1;

                    while (_24 != _25) {
                        _20[_24] = _21[_24];
                        _22[--_24] = 0;
                    }

                    // todo
                }

                // todo
                _24 = _6;
            }
        }

        if (_26 == 0) {
            // todo
            _23 = 1;
        }
    }

    _10 = 0;
    // todo
    return 0;
}
