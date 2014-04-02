#ifndef _SPACE_OBJECT_H
#define _SPACE_OBJECT_H

class SpaceObject{
private:
	int _weight;
	int _diameter;
	int _thickness;
	int _temperature;
	int _rotationSpeed;
	char* _dateOfBirth;
	int _x;
	int _y;
	char* _Composition;
public:
	//Constructors
	SpaceObject(int x, int y, int weight = 0, int diameter = 0, int thickness = 0, int temperature = 0, int rotationSpeed = 0, char* dateOfBirth = "",char* Composition = "");

	//Setters
	void set_x(int x) { this->_x = x; }
	void set_y(int y) { this->_y = y; }
	void set_dateOfBirth(char* dateOfBirth){ this->_dateOfBirth = dateOfBirth; }
	void set_rotationSpeed(int rotationSpeed) { this->_rotationSpeed = rotationSpeed; }
	void set_temperature(int temperature){ this->_temperature = temperature; }
	void set_thickness(int thickness){ this->_thickness = thickness; }
	void set_diameter(int diameter){ this->_diameter = diameter; }
	void set_weight(int weight){ this->_weight = weight; }
    void set_Composition(char* Composition){ this ->_Composition = Composition}
	//Getters
	int get_x() { return this->_x; }
	int get_y() { return this->_y; }
	char* get_dateOfBirth(){ return this->_dateOfBirth; }
	int get_rotationSpeed() { return this->_rotationSpeed; }
	int get_temperature(){ return this->_temperature; }
	int get_thickness(){ return this->_thickness; }
	int get_diameter(){ return this->_diameter; }
	int get_weight(){ return this->_weight; }
	char* get_Composition(){ return this->_Composition;}
};
#endif