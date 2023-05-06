#pragma once
#include <iostream>
using namespace std;
class Base1
{
protected:
    int dat;
    double a[5] = { 10,1,7,1,9 };
public:
    Base1() : dat(1) {}
    Base1(int d) : dat(d) {}
};

class D11 : protected Base1 
{
protected:
    int d11;
public:
    D11() : d11(1) {}
    D11(int d) : d11(d) {}
    D11(int d, int dt) : Base1(dt), d11(d) {}
};

class Base2 
{
protected:
    int dat2;
    double b[5] = { 9,8,7,6,5 };
public:
    Base2() : dat2(1) {}
    Base2(int d) : dat2(d) {}
};

class D21 : protected Base2 
{
protected:
    int d21;
public:
    D21() : d21(1) {}
    D21(int d) : d21(d) {}
    D21(int d, int dt) : Base2(dt), d21(d) {}
};

class D22 : protected Base2, protected D21 
{
protected:
    int d22;
public:
    D22() : d22(1) {}
    D22(int d) : d22(d) {}
    D22(int d, int dt) : Base2(dt), d22(d) {}
};

class D3 : protected D11, protected D21, protected D22 
{
protected:
    double dt;
public:
    D3() : dt(1) {}
    D3(int d) : dt(d) {}
    D3(int a, int b, int c, double d, int e) : D11(a, b), D21(c, d), D22(a, d), dt(e) {}
};

class D4 : protected D3, protected D11 
{
protected:
    double dt;
public:
    D4() : dt(1) {}
    D4(int d) : dt(d) {}
    D4(int a, int b, double c) : D11(a, b), D3(c) {}
};


//
//virtual
//

class D11V : virtual protected Base1
{
protected:
    int d11;
public:
    D11V() : d11(1) {}
    D11V(int d) : d11(d) {}
    D11V(int d, int dt) : Base1(dt), d11(d) {}
};

class D21V : virtual protected Base2
{
protected:
    int d21;
public:
    D21V() : d21(1) {}
    D21V(int d) : d21(d) {}
    D21V(int d, int dt) : Base2(dt), d21(d) {}
};

class D22V : virtual protected Base2, virtual protected D21V
{
protected:
    int d22;
public:
    D22V() : d22(1) {}
    D22V(int d) : d22(d) {}
    D22V(int d, int dt) : Base2(dt), d22(d) {}
};

class D3V : virtual protected D11V, virtual protected D21V, virtual protected D22V
{
protected:
    double dt;
public:
    D3V() : dt(1) {}
    D3V(int d) : dt(d) {}
    D3V(int a, int b, int c, double d, int e) : D11V(a, b), D21V(c, d), D22V(a, d), dt(e) {}
};

class D4V : virtual protected D3V, virtual protected D11V
{
protected:
    double dt;
public:
    D4V() : dt(1) {}
    D4V(int d) : dt(d) {}
    D4V(int a, int b, double c) : D11V(a, b), D3V(c) {}
};
