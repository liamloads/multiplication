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

void _1(char _2[], int *_3) {
    strncat(_2, "0", 1);
    int _4 = *_3;
    int _5 = 1;

    while ((_4 >>= 1) != 0) {
        strncat(_2, _2, _5);
        _5 <<= 1;
    }

    strncat(_2, _2, *_3 - _5);
}

void _2(int _3[], int *_4, int _5[], int *_6) {
    // todo
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

    int _12 = ++_6 + _10++;
    int _13[_12];
    _6 = 0;

    while (_6 != _10) {
        _13[_6++] = 0;
    }

    int _14 = 0;

    while (_6 != _12) {
        _13[_6++] = (_7[_14++] + '0') - 96;
    }

    _12 = 0;
    int _15[--_10];

    while (_10 != _12) {
        _15[_12] = (_11[_12] + '0') - 96;
        _12++;
    }

    // todo
    return 0;
}
