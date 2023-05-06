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

void LinearEquation::root()
{
	this->x = -(this->b) / this->a;
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

void QuadraticEquation::root()
{
	this->discrim = this->b * this->b - 4 * this->a * this->c;
	if (this->discrim == 0)
		this->x1 = -(this->b) / (2 * this->a);
	else
	{
		this->x1 = (-(this->b) + sqrt(this->discrim)) / (2 * this->a);
		this->x2 = (-(this->b) - sqrt(this->discrim)) / (2 * this->a);
	}
}

void QuadraticEquation::Print()
{
	cout << "\t\t\t Info" << endl;
	cout << this->a << "(x * x) + " << this->b << "x + " << this->c << " = 0" << endl;
	cout << "A: " << this->a << endl;
	cout << "B: " << this->b << endl;
	cout << "C: " << this->c << endl;
	cout << "Discriminant: " << this->discrim << endl;
	if (this->discrim < 0)
		cout << "No solution(D < 0)" << endl;
	else
		if (this->discrim == 0)
			cout << "Result(x1): " << this->x1 << endl;
		else
			if (this->discrim > 0)
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

double QuadraticEquation::GetDiscrim()
{
	return this->discrim;
}




BiquadraticEquation::BiquadraticEquation(double _a, double _b, double _c) :x1(0), x2(0), x3(0), x4(0)
{
	this->a = _a;
	this->b = _b;
	this->c = _c;
}

void BiquadraticEquation::root()
{
	this->discrim = this->b * this->b - 4 * this->a * this->c;
	if (this->discrim == 0)
	{
		double t = -b / (2 * a);
		if (t >= 0)
		{
			this->x1 = sqrt(t);
			this->x2 = -sqrt(t);
		}
	}
	else if (this->discrim > 0)
	{
		double t1 = (-b - sqrt(this->discrim)) / (2 * a);
		double t2 = (-b + sqrt(this->discrim)) / (2 * a);

		if (t1 >= 0)
		{
			this->x1 = sqrt(t1);
			this->x2 = -this->x1;
		}
		if (t2 >= 0)
		{
			this->x3 = sqrt(t2);
			this->x4 = -this->x3;
		}
	}
}

void BiquadraticEquation::Print()
{
	cout << "\t\t\t Info" << endl;
	cout << this->a << "(x * x * x * x) + " << this->b << "(x * x) + " << this->c << " = 0" << endl;
	cout << "A: " << this->a << endl;
	cout << "B: " << this->b << endl;
	cout << "C: " << this->c << endl;
	cout << "Discriminant: " << this->discrim << endl;
	if (this->discrim < 0)
		cout << "No solution(D < 0)" << endl;
	else
		if (this->discrim == 0)
		{
			cout << "Result(x1): " << this->x1 << endl;
			cout << "Result(x2): " << this->x2 << endl;
		}
		else
			if (this->discrim > 0)
			{
				cout << "Result(x1): " << this->x1 << endl;
				cout << "Result(x2): " << this->x2 << endl;
				cout << "Result(x3): " << this->x3 << endl;
				cout << "Result(x4): " << this->x4 << endl;
			}
}

double BiquadraticEquation::GetX1()
{
	return this->x1;
}

double BiquadraticEquation::GetX2()
{
	return this->x2;
}

double BiquadraticEquation::GetX3()
{
	return this->x3;
}

double BiquadraticEquation::GetX4()
{
	return this->x4;
}

double BiquadraticEquation::GetDiscrim()
{
	return this->discrim;
}
