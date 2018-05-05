#if ARDUINO >= 100
#include <Arduino.h> 
#else
#include <WProgram.h> 
#endif
#include "Compteur.h"

Compteur::Compteur(int min, int max)
{
	_index = min;
	_isSelect = false;
	_min = min;
	_max = max;
}
void Compteur::run(int key)
{
	switch (key)
	{
		case 0:
			_index += 1;
			if(_index > _max) _index = _min;
			break;
			
		case 1:
			_index += 1;
			if(_index > _max) _index = _min;
			break;
			
		case 2:
			_index -= 1;
			if(_index < _min) _index = _max;
			break;
			
		case 3:
			_index -= 1;
			if(_index < _min) _index = _max;
			break;
			
		case 4:
			_isSelect = true;
			break;
		
		default:
			break;
	}
}
int Compteur::index(void)
{
	return _index;
}
void Compteur::setIndex(int index)
{
	_index = index;
}
bool Compteur::isSelect(void)
{
	return _isSelect;
}
void Compteur::setSelect(bool value)
{
	_isSelect = value;
}


CompteurBool::CompteurBool(bool value)
{
	_value = value;
	_isSelect = false;
}
void CompteurBool::start(bool value)
{
	_value = value;
	_isSelect = false;
}
void CompteurBool::run(int key)
{
	switch (key)
	{
		case 0:
			if(_value) _value = false;
			else _value = true;
			break;
			
		case 1:
			if(_value) _value = false;
			else _value = true;
			break;
			
		case 2:
			if(_value) _value = false;
			else _value = true;
			break;
			
		case 3:
			if(_value) _value = false;
			else _value = true;
			break;
			
		case 4:
			_isSelect = true;
			break;
		
		default:
			break;
	}
}
bool CompteurBool::value(void)
{
	return _value;
}
bool CompteurBool::isSelect(void)
{
	return _isSelect;
}


CompteurDate::CompteurDate(int annee, int mois, int jour)
{
	_annee = annee;
	_mois = mois;
	_jour = jour;
	_isSelect = false;
	_selected = YEAR;
}
void CompteurDate::start(int annee, int mois, int jour)
{
	_annee = annee;
	_mois = mois;
	_jour = jour;
	_isSelect = false;
	_selected = YEAR;
}
void CompteurDate::run(int key)
{
	switch (key)
	{
		case 0:
			if(++_selected > DAY) _selected = YEAR;
			break;
			
		case 1:
			switch(_selected)
			{
				case YEAR:
					if(++_annee > 2050) _annee = 2016;
					break;
					
				case MONTH:
					if(++_mois > 12) _mois = 1;
					break;
					
				case DAY:
					if(++_jour > 31) _mois = 1;
					break;
					
				default:
					break;
			}
			break;
			
		case 2:
			switch(_selected)
			{
				case YEAR:
					if(--_annee < 2016) _annee = 2050;
					break;
					
				case MONTH:
					if(--_mois < 1) _mois = 12;
					break;
					
				case DAY:
					if(--_jour < 1) _mois = 31;
					break;
					
				default:
					break;
			}
			break;
			
		case 3:
			if(--_selected < YEAR) _selected = DAY;
			break;
			
		case 4:
			_isSelect = true;
			break;
			
		default:
			break;
	}
}
int CompteurDate::annee(void)
{
	return _annee;
}
int CompteurDate::mois(void)
{
	return _mois;
}
int CompteurDate::jour(void)
{
	return _jour;
}
bool CompteurDate::isSelect(void)
{
	return _isSelect;
}
int CompteurDate::selected(void)
{
	return _selected;
}


CompteurFloat::CompteurFloat(float value)
{
	_entier = (int)value;
	_decimal = (int)((value - _entier)*100);
	_isSelect = false;
	_selected = true;
}
void CompteurFloat::start(float value)
{
	_entier = (int)value;
	_decimal = (int)((value - _entier)*100);
	_isSelect = false;
	_selected = true;
}
void CompteurFloat::run(int key)
{
	switch (key)
	{
		case 0:
			if(_selected) _selected = false;
			else _selected = true;
			break;
			
		case 1:
			if(_selected)
			{
				if(++_entier > 99) _entier = 0;
			}
			else
			{
				if(++_decimal > 99) _decimal = 0;
			}
			break;
			
		case 2:
			if(_selected)
			{
				if(--_entier < 0) _entier = 99;
			}
			else
			{
				if(--_decimal < 0 ) _decimal = 99;
			}
			break;
			
		case 3:
			if(_selected) _selected = false;
			else _selected = true;
			break;
			
		case 4:
			_isSelect = true;
			break;
			
		default:
			break;
	}
}
float CompteurFloat::value(void)
{
	return ((float)(_entier) + ((float)(_decimal)/100.0));
}
int CompteurFloat::entier(void)
{
	return _entier;
}
int CompteurFloat::decimal(void)
{
	return _decimal;
}
bool CompteurFloat::isSelect(void)
{
	return _isSelect;
}
bool CompteurFloat::selected(void)
{
	return _selected;
}


CompteurHeure::CompteurHeure(int time)
{
	_heure = (int)time / 60;
	_minute = (int)time % 60;
	_isSelect = false;
	_selected = true;
}
void CompteurHeure::start(int time)
{
	_heure = (int)time / 60;
	_minute = (int)time % 60;
	_isSelect = false;
	_selected = true;
}
void CompteurHeure::run(int key)
{
	switch (key)
	{
		case 0:
			if(_selected) _selected = false;
			else _selected = true;
			break;
			
		case 1:
			if(_selected)
			{
				if(++_heure > 23) _heure = 0;
			}
			else
			{
				if(++_minute > 59) _minute = 0;
			}
			break;
			
		case 2:
			if(_selected)
			{
				if(--_heure < 0) _heure = 23;
			}
			else
			{
				if(--_minute < 0 ) _minute = 59;
			}
			break;
			
		case 3:
			if(_selected) _selected = false;
			else _selected = true;
			break;
			
		case 4:
			_isSelect = true;
			break;
			
		default:
			break;
	}
}
int CompteurHeure::time(void)
{
	return (_heure * 60) + _minute;
}
int CompteurHeure::heure(void)
{
	return _heure;
}
int CompteurHeure::minute(void)
{
	return _minute;
}
bool CompteurHeure::isSelect(void)
{
	return _isSelect;
}
bool CompteurHeure::selected(void)
{
	return _selected;
}


CompteurInt::CompteurInt(int min, int max)
{
	_value = 0;
	_isSelect = false;
	_min = min;
	_max = max;
}
void CompteurInt::start(int value)
{
	_value = value;
	_isSelect = false;
}
void CompteurInt::run(int key)
{
	switch (key)
	{
		case 0:
			if(++_value > _max ) _value = _min;
			break;
			
		case 1:
			if(++_value > _max ) _value = _min;
			break;
			
		case 2:
			if(--_value < _min ) _value = _max;
			break;
			
		case 3:
			if(--_value < _min ) _value = _max;
			break;
			
		case 4:
			_isSelect = true;
			break;
		
		default:
			break;
	}
}
int CompteurInt::value(void)
{
	return _value;
}
bool CompteurInt::isSelect(void)
{
	return _isSelect;
}


CompteurSeconde::CompteurSeconde(unsigned long value)
{
	_seconde = value;
	_isSelect = false;
	_increment = 1;
}
void CompteurSeconde::start(unsigned long value)
{
	_seconde = value;
	_isSelect = false;
	_increment = 1;
}
void CompteurSeconde::run(int key)
{
	switch (key)
	{
		case 0:
			if(_increment == 1) _increment = 60;
			else if(_increment == 60) _increment = 3600;
			else if(_increment == 3600) _increment = 1;
			break;
			
		case 1:
			_seconde += _increment;
			if(_seconde > 4000000000 ) _seconde = 0;
			break;
			
		case 2:
			_seconde -= _increment;
			if(_seconde < 0 ) _seconde = 4000000000;
			break;
			
		case 3:
			if(_increment == 1) _increment = 3600;
			else if(_increment == 60) _increment = 1;
			else if(_increment == 3600) _increment = 60;
			break;
			
		case 4:
			_isSelect = true;
			break;
			
		default:
			break;
	}
}
unsigned long CompteurSeconde::seconde(void)
{
	return _seconde;
}
bool CompteurSeconde::isSelect(void)
{
	return _isSelect;
}
int CompteurSeconde::increment(void)
{
	return _increment;
}
