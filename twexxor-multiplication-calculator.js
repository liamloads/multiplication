const _16_0 = {'e': 1, 'E': 1, 'NaN': 1};
const _16_1 = require('twexxor-addition-calculator');
const _16_2 = require('twexxor-highest-detector');
const _16_3 = require('twexxor-string-repeater');

const twexxorMultiplicationCalculator = function(_16_4, _16_5) {
	_16_4 = [
		_16_1(_16_4, '0'),
		_16_1(_16_5, '0')
	];
	_16_5 = [
		_16_4[0],
		_16_4[1]
	];
	let _16_6 = 0;
	let _16_7 = 0;
	let _16_8 = 0;

	while (_16_6 !== 2) {
		if (_16_4[_16_6] === false) {
			return false;
		}

		if (_16_4[_16_6] === '0') {
			return '0';
		}

		if (_16_4[_16_6] === '1') {
			return _16_4[(_16_6 === 0) - 0];
		}

		_16_7 = (_16_4[_16_6][0] === '-') - 0;

		if (_16_7 === 0) {
			_16_5[_16_6] = '-' + _16_5[_16_6];
		}

		_16_8 += _16_7;
		_16_6++;
	}

	_16_6 = _16_2(_16_5);
	_16_7 = (_16_5[0] === _16_6) - 0;
	_16_6 = _16_5[(_16_7 === 0) - 0];
	let _16_9 = _16_6;
	_16_7 = _16_5[_16_7];
	//let _16_9 = '1';
	//let _16_10 = '1';
	//let _16_11 = '';
	//let _16_12 = '';

	//console.log(_16_8);
	//console.log(_16_6);

	while (_16_9 !== _16_5) {
		//_16_10 = _16_1(_16_10, _16_10);
		//_16_11 = _16_1(_16_6, _16_6);
		//_16_11 = _16_1(_16_10, '-' + _16_6);
		// todo
	}

	// todo
};
