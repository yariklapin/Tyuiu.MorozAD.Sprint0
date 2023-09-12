// Tyuiu.MorozAD.Sprint0.Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.MorozAD.Sprint0.Task5.lib/Tyuiu.MorozAD.Sprint0.Task5.lib.cpp"
using namespace std;

int main()
{
    ISprint0Task5* date = new Service1();
    cout << "MorozAD\n";
    cout << "R=P+S : " << "15,10\n";
    cout << "Result =  " << date->Zadacha(4, 5,6);
    cout << endl;



}

