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

void _1(int _2[], int *_3, int _4[], int *_6) {
    // todo
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

    int _11 = _5;
    int _12 = _5 - _9;
    int _13 = ~_12 / _12;

    if (_13 != 0) {
        _11 = _9;
    }

    _12 = _5 + _9;
    int _14[_12];
    _13 = _12 - _5;
    int _15 = 0;

    while (_13 != _15) {
        _14[_15++] = 0;
    }

    _13 = 0;

    while (_12 != _15) {
        _14[_15++] = (_6[_13++] + '0') - 96;
    }

    int _16[_12];
    _13 = _12 - _9;
    _15 = 0;

    while (_13 != _15) {
        _16[_15++] = 0;
    }

    _13 = 0;

    while (_12 != _15) {
        _16[_15++] = (_10[_13++] + '0') - 96;
    }

    // todo
    return 0;
}
