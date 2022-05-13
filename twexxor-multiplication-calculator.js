const _16_0 = {'1': 1, '-1': 1};
const _16_1 = {'NaN': 1};
const _16_2 = require('twexxor-addition-calculator');
const _16_3 = require('twexxor-highest-detector');
const _16_4 = require('twexxor-string-repeater');

const twexxorMultiplicationCalculator = function(_16_5, _16_6) {
	_16_5 = [
		_16_2(_16_5, '0'),
		_16_2(_16_6, '0')
	];
	_16_6 = [
		_16_5[0],
		_16_5[1]
	];
	let _16_7 = '';
	let _16_8 = 0;
	let _16_9 = 0;
	let _16_10 = 0;

	while (_16_8 !== 2) {
		_16_7 = _16_5[_16_8];

		if (_16_7 === false) {
			return false;
		}

		if (_16_7 === '0') {
			return '0';
		}

		if (typeof _16_0[_16_7] === 'number') {
			_16_6 = _16_5[(_16_8 === 0) - 0];
			_16_8 = '';

			if (_16_6[0] === '-' || _16_7[0] === '-') {
				if (_16_7[0] === '-') {
					_16_8 = '-';

					if (_16_6[0] === '-') {
						_16_7 = _16_6.length;
						_16_8 = '';
						_16_9 = '';
						_16_10 = 1;

						while (_16_7 !== _16_10) {
							_16_9 += _16_6[_16_10++];
						}

						_16_6 = _16_9;
					}
				}
			}

			return _16_8 + _16_6;
		}

		_16_9 = (_16_7[0] === '-') - 0;

		if (_16_9 === 0) {
			_16_6[_16_8] = '-' + _16_6[_16_8];
		}

		_16_10 += _16_9;
		_16_8++;
	}

	_16_7 = _16_3(_16_6);
	_16_8 = (_16_6[0] === _16_7) - 0;
	_16_7 = _16_6[(_16_8 === 0) - 0];
	_16_9 = _16_7.length;
	_16_11 = '';
	let _16_12 = ['-'];
	let _16_13 = 1;
	let _16_14 = 0;

	while (_16_9 !== _16_13) {
		_16_11 = _16_7[_16_13++];

		if (_16_11 === '.') {
			_16_12[1] = '-';
			_16_14 = 1;
			continue;
		}

		_16_12[_16_14] += _16_11;
	}

	_16_7 = 0;
	let _16_15 = 0;
	let _16_16 = 0;
	let _16_17 = 0;

	if (_16_14 === 1) {
		_16_13 = _16_12[1];
		_16_14 = _16_13.length;
		_16_15 = '-';

		if (_16_13[1] === '0') {
			_16_7 = 0;
			_16_16 = _16_13[1];

			while (_16_16 === '0') {
				_16_16 = _16_13[_16_7++ + 1];
			}
		}

		_16_16 = _16_7 + ((_16_7 === 0) - 0);
		_16_7 = _16_14 - 1;

		while (_16_14 !== _16_16) {
			_16_15 += _16_13[_16_16++];
		}

		_16_12[1] = _16_15;
	}

	_16_5 = _16_12.length;
	_16_6 = _16_6[_16_8];
	// todo: _16_12[1] decimal position in _16_7 based on _16_6 '0.0[n]'
	_16_8 = [];
	_16_9 = 0;
	let _16_18 = '';
	let _16_19 = '';

	while (_16_5 !== _16_9) {
		_16_11 = _16_12[_16_9];

		if (_16_11 === '-0') {
			_16_11 = '0';
		}

		_16_13 = _16_6;
		_16_14 = '0';
		_16_15 = '0';
		_16_16 = '0';
		_16_17 = '1';

		while (_16_11 !== _16_14) {
			_16_17 = _16_2(_16_17, _16_17);
			_16_18 = _16_2(_16_15, _16_17);
			_16_19 = _16_2(_16_11, _16_18);

			if (_16_19[0] !== '-') {
				_16_13 = _16_6;
				_16_15 = _16_2(_16_15, '1');
				_16_14 = '-' + _16_15;
				_16_16 = _16_2(_16_13, _16_16);
				_16_17 = '1';
				continue;
			}

			_16_13 = _16_2(_16_13, _16_13);
			_16_15 = _16_18;
			_16_14 = '-' + _16_15;
			_16_16 = _16_2(_16_13, _16_16);
		}

		_16_8[_16_9++] = _16_16;
	}

	if (_16_7 !== 0) {
		_16_5 = _16_8[1];
		_16_6 = _16_5.length - 1;
		_16_9 = {};
		_16_11 = 1;

		while (_16_6 !== _16_11) {
			_16_9[_16_5[_16_11]] = _16_11++;
		}

		_16_9 = _16_9['.'] - _16_7;

		if (typeof _16_1[_16_9] === 'number') {
			_16_9 = _16_6 - _16_7;
		}

		_16_11 = 1;
		_16_12 = '';
		_16_13 = _16_9 + '';

		if (_16_13[0] === '-') {
			_16_14 = _16_13.length;
			_16_15 = '';
			_16_16 = 1;

			while (_16_14 !== _16_16) {
				_16_15 += _16_13[_16_16++];
			}

			_16_9 = 1;
			_16_12 = '0.0' + _16_4('0', _16_15);
		}

		if (_16_9 !== 0) {
			while (_16_9 !== _16_11) {
				_16_12 += _16_5[_16_11++];
			}
		}

		if (_16_12[1] !== '.') {
			_16_12 += '.';

			if (_16_12 === '.') {
				_16_12 = '0.';

				if (_16_9 !== 0) {
					_16_12 += '0';
				}

				// todo
			}
		}

		_16_6++;

		while (_16_6 !== _16_11) {
			if (_16_5[_16_11] === '.') {
				_16_11++;
				continue;
			}

			_16_12 += _16_5[_16_11++];
		}

		_16_8[1] = '-' + _16_12;
	}

	_16_5 = _16_8[0];

	if (typeof _16_8[1] === 'string') {
		_16_5 = _16_2(_16_8[0], _16_8[1]);
	}

	if ((_16_10 & 1) === 0) {
		_16_6 = _16_5.length;
		_16_7 = '';
		_16_8 = 1;

		while (_16_6 !== _16_8) {
			_16_7 += _16_5[_16_8++];
		}

		_16_5 = _16_7;
	}

	return _16_5;
};
