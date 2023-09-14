// Tyuiu.MorozAD.Sprint0.Task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    
    cout << "Ведите 7-х значное число : ";
    int c;
    cin >> c;
    cout << "Какое число ищете : ";
    string x;
    cin >> x;
    cout << boolalpha << (to_string(c).find(x) != string::npos);
}

