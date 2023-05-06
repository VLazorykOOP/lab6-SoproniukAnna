#pragma once
#include <cmath>
#include <iostream>

class Equation 
{
protected:
    double a, b, c;
public:
    Equation();
    ~Equation();

    void setA(double);
    double getA();
    void setB(double);
    double getB();
    void setC(double);
    double getC();

    virtual double root() = 0;

    virtual void Print() = 0;
};

class LinearEquation : public Equation
{
private:
    double x = 0;
public:
    LinearEquation(double _a, double _b);

    double root() override;
    void Print() override;

    double GetX();
};

class QuadraticEquation : public Equation
{
private:
    double x1 = 0, x2 = 0;
    double d = 0;
public:
    QuadraticEquation(double a, double b, double c);
    double root() override;
    void Print() override;

    double GetX1();
    double GetX2();
    double GetD();
};

class BiquadraticEquation : public Equation
{};