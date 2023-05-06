#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
	string model = "Avrora";
	int capacity = 40000; //вантажопідйомність
	int year = 2020;
public:
	Transport();
	Transport(string mod, int cap, int year);
	virtual ~Transport();

	void setModel(string);
	string getModel();
	void setCapacity(int);
	int getCapacity();
	void setYear(int);
	int getYear();

	//InputAll
	friend istream& operator>>(istream& is, Transport);
	//PrintAll
	friend ostream& operator<<(ostream& os, const Transport);

};

class Ship :public Transport
{
protected:
	int length = 20;
	int width = 10;
public:
	Ship();
	Ship(int length, int width);
	~Ship();
	void setLength(int);
	int getLength();
	void setWidth(int);
	int getWidth();

};

class PassangerTransport: public Transport
{
protected:
	int numberOfSeats = 20;
public:
	PassangerTransport();
	PassangerTransport(int NumOfS);
	~PassangerTransport();

	void setNumberOfSeats(int);
	int getNumberOfSeats();
};

class PassangerShip: public PassangerTransport, public Ship
{
private:
	int numberOfPassengers = 20;
public:
	PassangerShip();
	PassangerShip(int numOfPas);
	~PassangerShip();

	void setNumberOfPassengers(int);
	int getNumberOfPassengers();
};

