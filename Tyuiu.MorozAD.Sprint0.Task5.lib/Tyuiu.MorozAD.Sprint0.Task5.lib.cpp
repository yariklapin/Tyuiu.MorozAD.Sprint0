// Tyuiu.MorozAD.Sprint0.Task3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.MorozAD.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint0Task5
{
	virtual int Zadacha(int a, int b, int c) override
	{
		return ((a + b + c) + (a * b / 2));
	};
};
