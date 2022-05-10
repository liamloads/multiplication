const _16_0 = {'e': 1, 'E': 1, 'NaN': 1};
const _16_1 = require('twexxor-addition-calculator');
const _16_2 = require('twexxor-highest-detector');
const _16_3 = require('twexxor-string-repeater');

const twexxorMultiplicationCalculator = function(_16_4, _16_5) {
	_16_4 = [
		_16_1(_16_4, '0'),
		_16_1(_16_5, '0')
	];
	_16_5 = 0;
	let _16_6 = 0;
	let _16_7 = 0;

	while (_16_5 !== 2) {
		if (_16_4[_16_5] === false) {
			return false;
		}

		_16_6 = (_16_4[_16_5][0] === '-') - 0;

		if (_16_6 === 0) {
			_16_4[_16_5] = '-' + _16_4[_16_5];
		}

		_16_7 += _16_6;
		_16_5++;
	}

	_16_5 = _16_2(_16_4);
	_16_6 = (_16_4[0] === _16_5) - 0;
	_16_5 = _16_4[(_16_6 === 0) - 0];
	let _16_8 = _16_5;
	_16_6 = _16_4[_16_6];
	let _16_9 = '0';
	let _16_10 = '0';
	let _16_11 = '';

	while (_16_9 !== _16_6) {
		_16_9 = _16_1(_16_8, _16_8);
		// todo
	}

	// todo
};
