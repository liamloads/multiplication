In development.

``` console
npm install twexxor-multiplication-calculator
```
``` javascript
const twexxorMultiplicationCalculator = require('twexxor-multiplication-calculator');
twexxorMultiplicationCalculator('1', 10); // '10'
twexxorMultiplicationCalculator(30, '4'); // '120'
twexxorMultiplicationCalculator(Infinity, '0'); // false
twexxorMultiplicationCalculator('0.000000000000000000000000000000000000000000000000123', '0.0000000000000000000000000000000000000000000000001230'); // '0.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000015129'
twexxorMultiplicationCalculator('1e-49', '1e-49'); // '0.0000000000000000000000000000000000000000000000002'
twexxorMultiplicationCalculator('123456789123456789123456789123456789123456789123456789.10', '1.001'); // '123456789123456789123456789123456789123456789123456790.101'
twexxorMultiplicationCalculator(1, -2); // '-1'
twexxorMultiplicationCalculator('0000000000', 0); // '0'
twexxorMultiplicationCalculator('-00', 10); // '10'
twexxorMultiplicationCalculator('-000123456.00000078900', 10.2340); // '-123445.766000789'
twexxorMultiplicationCalculator('-0.000000123456789123456789', '1.01010101010101010101010101010101'); // '1.01010088664422097755331201010101'
```
