#include "SpaceObject.h"

#ifndef _STAR_H
#define _STAR_H

class Star: public SpaceObject
{
public:
    Star(double luminosity=0, BurningTime=0,int weight=0,int diameter=0, int thickness=0, int temperature=0, int rotationSpeed=0,char* dateOfBirth="",int x=0, int y=0)

//setters
    void set_luminosity(double _luminosity) { this->_luminosity = luminosity; }
    void set_BurningTime(double _BurningTime) { this->_BurningTime= BurningTime; }


 //getters
    double get_luminosity(){ return this->_luminosity; }
    double get_BurningTime(){ return this->_BurningTime; }

private:
    double _luminosity;
    double _BurningTime;

};
