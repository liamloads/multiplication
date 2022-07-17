## About

#### Description
This is the fastest command line tool for calculating differences of big numbers with infinite precision.

It's written in C with extreme efficiency and simplicity.

#### License
[MIT License](https://github.com/liamloads/c-precision-multiplication/blob/main/LICENSE)

## Installation

#### Unix
``` console
cd
git clone https://github.com/liamloads/c-precision-multiplication.git
cd c-precision-multiplication
gcc -o c-precision-multiplication c-precision-multiplication.c
```

## Usage

#### Details

The command line interface accepts two numeric arguments.

The result is the first argument multiplied by the second argument.

#### Examples

``` console
./c-precision-multiplication 1 10
10

./c-precision-multiplication 30 4
120

./c-precision-multiplication -00 10
0

./c-precision-multiplication -0.04 -.05
0.002

./c-precision-multiplication 0.04 -0.001
-0.00004

./c-precision-multiplication 0.4 0.5
0.2

./c-precision-multiplication 0.04 0.5
0.02

./c-precision-multiplication -000123456.00000078900 10.2340
-1263448.704008074626

./c-precision-multiplication -0.000000123456789123456789 1.0101010101010101010101010101010101010101010101010101010101
-0.0000001247038273974310999999999999999999999999999999999999999999998752961726025689

./c-precision-multiplication 1 _
false
```
