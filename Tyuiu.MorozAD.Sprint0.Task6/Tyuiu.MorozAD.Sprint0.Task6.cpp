// Tyuiu.MorozAD.Sprint0.Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введеите x:";
    int x;
    cin >> x;
    cout << "Введеите y:";
    int y;
    cin >> y;
    int s = (x * 8) / y * 2;
    cout << "Ответ : "<<s;
}

