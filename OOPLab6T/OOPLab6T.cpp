// OOPLab3Tpl.cpp : Цей файл містить є шаблоном для 
// виконання лаб. роботи №6. 
// Він містинь функцію "main" з якої починається та закінчується виконання програми.
//

#include <iostream>
using namespace std;

// Ваші файли загловки
#include "Task1.h"
#include "Task2.h"

void MainMenuTask1()
{
    cout << " \t \t \t Task 1 " << endl;
    cout << "\t \t \t No virtual" << endl;
    cout << "Size for Base1 " << sizeof(Base1) << endl;
    cout << "Size for Base2 " << sizeof(Base2) << endl;
    cout << "Size for D11 " << sizeof(D11) << endl;
    cout << "Size for D21 " << sizeof(D21) << endl;
    cout << "Size for D22 " << sizeof(D22) << endl;
    cout << "Size for D3 " << sizeof(D3) << endl;
    cout << "Size for D4 " << sizeof(D4) << endl;

    cout << "\t \t \t Virtual " << endl;

    cout << "Size for Base1 " << sizeof(Base1) << endl;
    cout << "Size for Base2 " << sizeof(Base2) << endl;
    cout << "Size for D11V " << sizeof(D11V) << endl;
    cout << "Size for D21V " << sizeof(D21V) << endl;
    cout << "Size for D22v " << sizeof(D22V) << endl;
    cout << "Size for D3V " << sizeof(D3V) << endl;
    cout << "Size for D4V " << sizeof(D4V) << endl;
    cout << endl;
}
void MainMenuTask2()
{
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Select option" << endl;
        cout << "1. Linear equation" << endl;
        cout << "2. Quadratic equation" << endl;
        cout << "3. Biquadratic equation" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        LinearEquation linear(5,8);
        QuadraticEquation quadratic(5,6,7);
        switch (select)
        {
            double a, b, c;
        case 1:
            system("cls");
            cout << "\t \t \t Linear equation" << endl;
            cout << "Input a: ";
            cin >> a;
            linear.setA(a);
            cout << "Input b: ";
            cin >> b;
            linear.setB(b);
            linear.root();
            linear.Print();
            break;
        case 2:
            system("cls");
            cout << "\t \t \t Quadratic equation" << endl;
            cout << "Input a: ";
            cin >> a;
            quadratic.setA(a);
            cout << "Input b: ";
            cin >> b;
            quadratic.setB(b);
            cout << "Input c: ";
            cin >> c;
            quadratic.setC(c);

            if (a == 0)
            {
                cout << "It`s not a quadratic equation" << endl;
                break;
            }

            quadratic.root();

            if (quadratic.GetD() < 0)
            {
                cout << "No solution(D < 0)" << endl;
                break;
            }
            else
            quadratic.Print();
            break;
        case 3:
            system("cls");
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}

void MainMenu()
{
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Main menu" << endl;
        cout << "1. Task 1" << endl;
        cout << "2. Task 2" << endl;
        cout << "3. Task 3" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            system("cls");
            MainMenuTask1();
            break;
        case 2:
            system("cls");
            MainMenuTask2();
            break;
        case 3:
            system("cls");
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}

int main()
{
	MainMenu();
}