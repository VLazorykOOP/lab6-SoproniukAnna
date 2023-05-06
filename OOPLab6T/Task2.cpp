#include "Task2.h"
using namespace std;

Equation::Equation() : a(0), b(0), c(0) {}

Equation::~Equation() {}

void Equation::setA(double val)
{
	this->a = val;
}

double Equation::getA()
{
	return this->a;
}

void Equation::setB(double val)
{
	this->b = val;
}

double Equation::getB()
{
	return this->b;
}

void Equation::setC(double val)
{
	this->c = val;
}

double Equation::getC()
{
	return this->c;
}




LinearEquation::LinearEquation(double _a, double _b) :x(0)
{
	this->a = _a;
	this->b = _b;
}

double LinearEquation::root()
{
	this->x = -(this->b) / this->a;
	return this->x;
}

void LinearEquation::Print()
{
	cout << "\t\t\t Info" << endl;
	cout << this->a << "x + " << this->b << " = 0" << endl;

	if (a == 0 && b != 0)
		cout << "No solution" << endl;
	else
		if (a == 0 && b == 0)
			cout << "Many solutions" << endl;
		else
		{
			cout << "A: " << this->a << endl;
			cout << "B: " << this->b << endl;
			cout << "Result(x): " << this->x << endl;
		}
}

double LinearEquation::GetX()
{
	return this->x;
}




QuadraticEquation::QuadraticEquation(double _a, double _b, double _c) :x1(0), x2(0)
{
	this->a = _a;
	this->b = _b;
	this->c = _c;
}

double QuadraticEquation::root()
{
	this->d = this->b * this->b - 4 * this->a * this->c;
	if (this->d < 0)
		return NAN;
	else
		if (this->d == 0)
		{
			this->x1 = -(this->b) / (2 * this->a);
			return x1;
		}
		else
		{
			this->x1 = (-(this->b) + sqrt(this->d)) / (2 * this->a);
			this->x2 = (-(this->b) - sqrt(this->d)) / (2 * this->a);
		}
}

void QuadraticEquation::Print()
{
	cout << "\t\t\t Info" << endl;
	cout << this->a << "(x * x) + " << this->b << "x + " << this->c << " = 0" << endl;
	cout << "A: " << this->a << endl;
	cout << "B: " << this->b << endl;
	cout << "C: " << this->c << endl;
	cout << "Discriminant: " << this->d << endl;
	if (this->d == 0)
		cout << "Result(x1): " << this->x1 << endl;
	else
		if (this->d > 0)
		{
			cout << "Result(x1): " << this->x1 << endl;
			cout << "Result(x2): " << this->x2 << endl;
		}
}

double QuadraticEquation::GetX1()
{
	return this->x1;
}

double QuadraticEquation::GetX2()
{
	return this->x2;
}

double QuadraticEquation::GetD()
{
	return this->d;
}


