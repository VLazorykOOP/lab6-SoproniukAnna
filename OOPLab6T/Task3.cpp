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

void Ship::Input()
{
	cout << "Input model: ";
	cin >> this->model;
	cout << "Input capacity: ";
	cin >> this->capacity;
	cout << "Input year: ";
	cin >> this->year;
	cout << "Input length: ";
	cin >> this->length;
	cout << "Input width: ";
	cin >> this->width;
}

void Ship::Print()
{
	cout << "Model: " << this->model << endl;
	cout << "Capacity: " << this->capacity << endl;
	cout << "Year: " << this->year << endl;
	cout << "Length: " << this->length << endl;
	cout << "Width: " << this->width << endl;
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

void PassangerTransport::Input()
{
	cout << "Input model: ";
	cin >> this->model;
	cout << "Input capacity: ";
	cin >> this->capacity;
	cout << "Input year: ";
	cin >> this->year;
	cout << "Input number of seats: ";
	cin >> this->numberOfSeats;
}

void PassangerTransport::Print()
{
	cout << "Model: " << this->model << endl;
	cout << "Capacity: " << this->capacity << endl;
	cout << "Year: " << this->year << endl;
	cout << "Number of seats: " << this->numberOfSeats << endl;
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

void PassangerShip::Input()
{
	Ship::Input();
	cout << "Input number of passangers: ";
	cin >> this->numberOfPassengers;
}


void PassangerShip::Print()
{
	Ship::Print();
	cout << "Number of seats:" << this->numberOfSeats << endl;
	cout << "Number of passangers:" << this->numberOfPassengers << endl;
	cout << endl;
}

