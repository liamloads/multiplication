## About

#### Description
This is a fast and memory-efficient calculator tool for products of big numbers with full precision.

It's written in C and can be compiled as a lightweight binary to use with any programming language that supports command line execution.

#### License
[MIT License](https://github.com/liamloads/multiplication/blob/main/LICENSE)

## Installation

#### Linux
``` console
cd
git clone https://github.com/liamloads/multiplication.git
cd multiplication
gcc -o multiplication multiplication.c
```

## Usage

#### Details

The command line interface accepts two numeric arguments.

The result is the first argument multiplied by the second argument.

#### Examples

``` console
./multiplication 1 10
10

./multiplication 30 4
120

./multiplication -00 10
0

./multiplication -0.04 -.05
0.002

./multiplication 0.04 -0.001
-0.00004

./multiplication 0.4 0.5
0.2

./multiplication 0.04 0.5
0.02

./multiplication -000123456.00000078900 10.2340
-1263448.704008074626

./multiplication -0.000000123456789123456789 1.0101010101010101010101010101010101010101010101010101010101
-0.0000001247038273974310999999999999999999999999999999999999999999998752961726025689

./multiplication 1 _
false
```
