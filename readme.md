In development.

``` console
npm install twexxor-multiplication-calculator
```
``` javascript
const twexxorMultiplicationCalculator = require('twexxor-multiplication-calculator');
twexxorMultiplicationCalculator('1', 10); // '10'
twexxorMultiplicationCalculator(30, '4'); // '120'
twexxorMultiplicationCalculator(Infinity, '0'); // false
twexxorMultiplicationCalculator('0.000000000000000000000000000000000000000000000000123', '0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000015129'); // '0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001860867'
twexxorMultiplicationCalculator('1e-49', '1e-49'); // '0.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001'
twexxorMultiplicationCalculator('123456789123456789123456789123456789123456789123456789.10', '1.001'); // '123469134802369134802369134802369134802369134802369134.77891'
twexxorMultiplicationCalculator(1, -2); // '-2'
twexxorMultiplicationCalculator('0000000000', 0); // '0'
twexxorMultiplicationCalculator('-00', 10); // '0'
twexxorMultiplicationCalculator('-0.04', '-0.05'); // 0.002
twexxorMultiplicationCalculator('0.04', '0.005'); // 0.0002
twexxorMultiplicationCalculator('0.04', '-0.001'); // -0.00004
twexxorMultiplicationCalculator('0.4', '0.5'); // 0.2
twexxorMultiplicationCalculator('0.04', '0.5'); // 0.02
twexxorMultiplicationCalculator('0.4', '0.05'); // 0.02
twexxorMultiplicationCalculator('-000123456.00000078900', 10.2340); // '-1263448.704008074626'
twexxorMultiplicationCalculator('-0.000000123456789123456789', '1.01010101010101010101010101010101'); // '-0.00000012470382739743109999999999999999998752961726025689'
```
