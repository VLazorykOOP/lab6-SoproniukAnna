#pragma once
#include <cmath>
#include <iostream>

class Equation 
{
protected:
    double a, b, c;
  //  int countRoot;
public:
    Equation();
    ~Equation();

    void setA(double);
    double getA();
    void setB(double);
    double getB();
    void setC(double);
    double getC();

    virtual void root() = 0;

    virtual void Print() = 0;
};

class LinearEquation : public Equation
{
private:
    double x = 0;
public:
    LinearEquation(double _a, double _b);

    void root() override;
    void Print() override;

    double GetX();
};

class QuadraticEquation : public Equation
{
private:
    double x1 = 0, x2 = 0;
    double discrim = 0;
public:
    QuadraticEquation(double a, double b, double c);
    void root() override;
    void Print() override;

    double GetX1();
    double GetX2();
    double GetDiscrim();
};

class BiquadraticEquation : public Equation
{
private:
    double x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    double discrim = 0;
public:
    BiquadraticEquation(double a, double b, double c);
    void root() override;
    void Print() override;

    double GetX1();
    double GetX2();
    double GetX3();
    double GetX4();
    double GetDiscrim();
};