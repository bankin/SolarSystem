#include "SpaceObject.h"

#ifndef _SATELLITE_H
#define _SATELLITE_H

class Satellite : SpaceObject{
	bool _isNative;
public:
	//Constructors
	Satellite(int x, int y, bool isNative, int weight = 0, int diameter = 0, int thickness = 0, int temperature = 0, int rotationSpeed = 0, char* dateOfBirth = "");

	//Getters
	bool get_isNative(){ return this->_isNative; }

	//Setters
	void set_isNative(bool isNative){ this->_isNative = isNative; }
};

#endif