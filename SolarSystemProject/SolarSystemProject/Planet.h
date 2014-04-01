#include "SpaceObject.h"
#include "Satellite.h"

#ifndef _PLANET_H
#define _PLANET_H

class Planet : SpaceObject{
	int _rings;
	bool _atmosphere;
	int _satellitesCount;
	Satellite* _satellites;
public:
	//Constructors
	Planet(int x, int y, int weight = 0, int diameter = 0, int thickness = 0, int temperature = 0, int rotationSpeed = 0, char* dateOfBirth = "",
		int rings = 0, bool atmosphere = true, int satellitesCount = 0, Satellite* satellites = {});

	//Getters
	int get_rings(){ return this->_rings; }
	bool get_atmosphere() { return this->_atmosphere; }
	int get_satellitesCount(){ return this->_satellitesCount; }
	Satellite* get_satellites() { return this->_satellites; }

	//Setters
	void set_rings(int rings){ this->_rings = rings; }
	void set_atmosphere(bool atmosphere){ this->_atmosphere; }
	void set_satellitesCount(int satellitesCount){ this->_satellitesCount = satellitesCount; }
	void set_satellites(Satellite* satellites){ this->_satellites = satellites; }
};

#endif