#include "Task3.h"

Transport::Transport(){}

Transport::Transport(string mod, int cap, int year): model(mod), capacity(cap), year(year) {}

Transport::~Transport(){}

void Transport::setModel(string val)
{
	this->model = val;
}

string Transport::getModel()
{
	return this->model;
}

void Transport::setCapacity(int val)
{
	this->model = val;
}

int Transport::getCapacity()
{
	return this->capacity;
}

void Transport::setYear(int val)
{
	this->year = val;
}

int Transport::getYear()
{
	return this->year;
}

istream& operator>>(istream& is, Transport tran)
{
	is >> tran.model;
	is >> tran.capacity;
	is >> tran.year;
	return is;
}

ostream& operator<<(ostream& os, const Transport tran)
{
	os << tran.model;
	os << tran.capacity;
	os << tran.year;
	return os;
}





Ship::Ship() :Transport(){}

Ship::Ship(int length, int width) :Transport(model, capacity, year), length(length), width(width) {}

Ship::~Ship() {}

void Ship::setLength(int val)
{
	this->length = val;
}

int Ship::getLength()
{
	return this->length;
}

void Ship::setWidth(int val)
{
	this->width = val;
}

int Ship::getWidth()
{
	return this->width;
}





PassangerTransport::PassangerTransport() : Transport(){}

PassangerTransport::PassangerTransport(int NumOfS) : Transport(model, capacity, year), numberOfSeats(NumOfS) {}

PassangerTransport::~PassangerTransport() {}

void PassangerTransport::setNumberOfSeats(int val)
{
	this->numberOfSeats = val;
}

int PassangerTransport::getNumberOfSeats()
{
	return this->numberOfSeats;
}





PassangerShip::PassangerShip() : PassangerTransport() {}

PassangerShip::PassangerShip(int numOfPas) : Ship(length, width), numberOfPassengers(numOfPas) {}

PassangerShip::~PassangerShip() {}

void PassangerShip::setNumberOfPassengers(int val)
{
	this->numberOfPassengers = val;
}

int PassangerShip::getNumberOfPassengers()
{
	return this->numberOfPassengers;
}

