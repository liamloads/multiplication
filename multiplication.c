#include <stdio.h>
#include <string.h>

void _0(char _1[], int *_2, int *_3, int *_4) {
    int _5 = 0;

    if (_1[0] == '-') {
        *_4 += 1;
        _5++;
    }

    if (_1[_5] == '\0') {
        *_4 = -1;
        return;
    }

    while (_1[_5++] == '0') {}

    strncat(_1, ".", 2);
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

        if (_1[_5 + 1] != '\0') {
            *_4 = -1;
            return;
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

    if ((*_3 != 0) && (_2[*_3] != 0)) {
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

    if ((*_4 != 0) && (_3[*_4] != 0)) {
        *_4 -= 1;
    }
}

int main(int _3, char *_4[]) {
    if (_3 != 3) {
        printf("false");
        return 0;
    }

    int _5 = 0;

    while (_4[1][_5++] != '\0') {}

    char _6[_5 + 1];
    _6[0] = '\0';
    strncat(_6, _4[1], _5);
    int _7 = 0;
    int _8 = 0;
    _0(_6, &_7, &_5, &_8);

    if (_8 == -1) {
        printf("false");
        return 0;
    }

    int _9 = 0;

    while (_4[2][_9++] != '\0') {}

    char _10[_9 + 1];
    _10[0] = '\0';
    strncat(_10, _4[2], _9);
    int _11 = 0;
    _0(_10, &_11, &_9, &_8);

    if (_8 == -1) {
        printf("false");
        return 0;
    }

    if ((_5 == 0) || (_9 == 0)) {
        printf("0");
        return 0;
    }

    if (_8 == 1) {
        printf("-");
    }

    _8 = _5 - _9;
    int _12 = 0;

    if (_8 == 0) {
        _5 = -1;

        while (++_5 != _9) {
            _8 = (_6[_5] - 48) - (_10[_5] - 48);

            if (_8 != 0) {
                if ((_8 & 15) == _8) {
                    _12 = 1;
                }

                _5 = _9 - 1;
            }
        }
    } else {
        _12 = ~_8 / _8;
    }

    _8 = (_5 + _9) + 1;
    int _13[_8];
    int _14[_8];
    _14[0] = 0;
    int _15[_8];
    int _16[_8];
    int _17 = 0;
    int _18 = 0;

    if (_12 == 0) {
        _12 = _8 - _9;

        while (_12 != _17) {
            _13[_17++] = 0;
        }

        _18 = 0;

        while (_8 != _17) {
            _13[_17++] = _10[_18++] - 48;
        }

        _12 = 1;
        _17 = 0;

        while (_5 != _17) {
            _14[_12++] = _6[_17++] - 48;
        }
    } else {
        _12 = _8 - _5;

        while (_12 != _17) {
            _13[_17++] = 0;
        }

        _18 = 0;

        while (_8 != _17) {
            _13[_17++] = _6[_18++] - 48;
        }

        _5 = _9;
        _12 = 1;
        _17 = 0;

        while (_5 != _17) {
            _14[_12++] = _10[_17++] - 48;
        }
    }

    _12 = -1;

    while (_14[++_12] == 0) {}

    if ((_5 != _12) || (_14[_5] != 1)) {
        _12 = -1;

        while (_8 != ++_12) {
            _15[_12] = _13[_12];
            _16[_12] = _13[_12];
        }

        _8--;
        _12 = 0;
        int _19[++_5];
        int _20[_5];
        int _21[_5--];

        while (_5 != _12) {
            _19[_12] = 0;
            _20[_12] = 0;
            _21[_12++] = 0;
        }

        _19[_5] = 1;
        _20[_5] = 1;
        _21[_5] = 1;
        _12 = --_5;
        _17 = _5;
        int _18 = _5;
        int _22 = _5++;
        int _23 = 0;
        int _24 = 0;
        int _25 = 0;
        int _26 = 0;

        while (_23 == 0) {
            _1(_19, &_12, _21, &_17, &_5);
            _24 = -1;
            _25 = 0;

            while (_5 != _24) {
                _26 = _14[++_24] - _19[_25++];

                if (_26 != 0) {
                    _24 = _5;
                    _25 = _12 - 1;

                    if ((_26 & 15) == _26) {
                        _1(_13, &_18, _15, &_22, &_8);
                        _2(_15, &_22, &_8);
                        _2(_21, &_17, &_5);

                        while (_24 != _25) {
                            _20[_24] = _19[_24];
                            _24--;
                        }
                    } else {
                        _21[_5] = 1;

                        while (_24 != _25) {
                            _19[_24] = _20[_24];
                            _21[--_24] = 0;
                        }

                        _24 = _8;

                        while (_22 != _24) {
                            _15[_24] = _16[_24];
                            _24--;
                        }

                        _22 = _5 - 1;
                    }

                    _24 = _5;
                }
            }

            if (_26 == 0) {
                _1(_13, &_18, _15, &_22, &_8);
                _23 = 1;
            }
        }

        _8++;
    }

    _5 = ((_8 - _7) - _11) - 1;
    _7 = _8 - _5;
    _9 = 0;
    _11 = 0;

    while (_7 != _9) {
        _11 += _13[_9++];
    }

    if (_11 == 0) {
        printf("0");
    } else {
        _9 = 0;

        while (_13[++_9] == 0) {}

        while (_7 != _9) {
            printf("%i", _13[_9++]);
        }
    }

    if (_8 != _9) {
        _5 = _9;
        _7 = 0;

        while (_5 != _8) {
            if (_13[_5++] != 0) {
                _5 = _8;
                _7 = 1;
            }
        }

        if (_7 == 1) {
            printf(".");

            while (_13[--_8] == 0) {}

            _8++;

            while (_8 != _9) {
                printf("%i", _13[_9++]);
            }
        }
    }

    return 0;
}
