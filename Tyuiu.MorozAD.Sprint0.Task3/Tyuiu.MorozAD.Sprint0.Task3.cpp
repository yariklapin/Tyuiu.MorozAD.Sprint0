// Tyuiu.MorozAD.Sprint0.Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.MorozAD.Sprint0.Task3.Lib/Tyuiu.MorozAD.Sprint0.Task3.Lib.cpp"

int main()
{
    ISprint0Task3* date = new Service1();
    std::cout << "MorozAD\n";
    std::cout << "P = a+b+c: "<<"12,14,6\n";
    std::cout << "Result =  " << date->SummV3(12,14,6);
    std::cout << std::endl;


    
}

