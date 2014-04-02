#include <iostream>

using namespace std;

class Person
{

char* _name [40];

char* _WhichPlanet[];

char* _race[30];

char* _DateOfBirht[10];

public:
	//Constructor
	Person(char name,char WhichPlanet,char race,char DateOfBirht);
    //Setters
     void _name(char name)
     {
     	this->_name=name;
     }
     void _WhichPlanet(char WhichPlanet)
     {
     	this->_WhichPlanet = WhichPlanet;
     }
     void _race(char race)
     {
     	this->_race = race;
     }
     void _DateOfBirht(char DateOfBirht)
     {
     	this->_DateOfBirht = DateOfBirht;
     }
     //Getters
     char* _name()
     {
       return this->_name;
     }
     char* _WhichPlanet()
     {
     	return -> _WhichPlanet;
     }
     char* _race()
     {
     	return this->_race;
     }
     char* _DateOfBirht()
     {
     	return this-> _DateOfBirht;
     }
     
}
