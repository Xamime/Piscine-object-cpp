#pragma once
#include <iostream>

class Person;

class Room
{
private:
	long long ID;
	std::vector<Person*> _occupants;

public:
	Room(int id) : ID(id) {}
	bool canEnter(Person*);
	void enter(Person*);
	void exit(Person*);
	
	void printOccupant();
};