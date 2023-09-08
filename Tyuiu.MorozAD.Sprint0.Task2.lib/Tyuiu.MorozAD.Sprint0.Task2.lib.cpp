// Tyuiu.MorozAD.Sprint0.Task2.lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.MorozAD.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task2V0
{
	virtual int Add(int a, int b) override
	{
		return a + b;
	}
};