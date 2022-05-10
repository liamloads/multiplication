const _16_0 = {'e': 1, 'E': 1, 'NaN': 1};
const _16_1 = require('twexxor-addition-calculator');
const _16_2 = require('twexxor-highest-detector');
const _16_3 = require('twexxor-string-repeater');

const twexxorMultiplicationCalculator = function(_16_4, _16_5) {
	_16_4 = [
		_16_1(_16_4, '0'),
		_16_1(_16_5, '0')
	];
	_16_5 = _16_2(_16_4);
	let _16_6 = (_16_4[0] === _16_5) - 0;
	_16_5 = _16_4[(_16_6 === 0) - 0];
	_16_6 = _16_4[_16_6];
	console.log(_16_5);
	console.log(_16_6);
	// todo
};
