#pragma once
#include <iostream>

class Room;

class Person
{
private:
	std::string _name;
public:
	Person(std::string p_name) : _name(p_name){}
	std::string getName() {return _name;}
};
