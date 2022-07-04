In pre-release development.

## About

#### Description
This is a fast and memory-efficient calculator tool for products of big numbers with full precision.

It's written in C and can be compiled as a lightweight binary on any operating system with any programming language that supports command line execution.

#### License
[MIT License](https://github.com/twexxor/multiplication/blob/main/LICENSE)

## Installation

#### Linux
``` console
cd
sudo git clone https://github.com/twexxor/multiplication.git
cd multiplication
sudo gcc -o twexxor-multiplication multiplication.c
```

## Usage

#### Details

The command line interface accepts two numeric parameters.

The result is the first parameter multiplied by the second parameter.

#### Examples

``` console
./twexxor-addition 1 10
10

./twexxor-addition 30 4
120

./twexxor-addition 0.000000000000000000000000000000000000000000000000123 0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000015129
0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001860867

./twexxor-addition 123456789123456789123456789123456789123456789123456789.10 1.001
123469134802369134802369134802369134802369134802369134.77891

./twexxor-addition 1 -2
-2

./twexxor-addition 0000000000 0
0

./twexxor-addition -00 10
0

./twexxor-addition -0.04 -.05
0.002

./twexxor-addition 0.04 -0.001
-0.00004

./twexxor-addition 0.4 0.5
0.2

./twexxor-addition 0.04 0.5
0.02

./twexxor-addition 0.4 0.05
0.02

./twexxor-addition -000123456.00000078900 10.2340
-1263448.704008074626

./twexxor-addition -0.000000123456789123456789 1.01010101010101010101010101010101
-0.00000012470382739743109999999999999999998752961726025689
```
