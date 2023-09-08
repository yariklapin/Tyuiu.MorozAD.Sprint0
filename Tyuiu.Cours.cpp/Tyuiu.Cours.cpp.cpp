// Tyuiu.Cours.cpp.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <math.h>

// В этом файле менять НИЧЕГО НЕ НАДО!
// Sprint0
// 
// TODO: This is an example of a library function
class ISprint0Task2V0 // не меняется
{
public:
	virtual int Add(int a,int b) = 0; // результат -0, функция любая
};
//
class ISprint0Task2V1 // не меняется
{
public:
	virtual int Summ(float a, int b, int c) = 0; // результат -0, функция любая
};
class ISprint0Task2V2 // не меняется
{
public:
	virtual int SummV2(int a, int b, int c) = 0; // результат -0, функция любая
};
//
class ISprint0Task3 // не меняется
{
public:
	virtual int SummV3(int a, int b, int c) = 0; // результат -0, функция любая
};
//
class ISprint0Task4// не меняется
	//Задача: вычислить значение выражения.
	//Если Вы решаете один вариант, то в названии консольного приложения после Task0.(V0) не указываете. 
{
public:
	virtual int Calculate(int a, int b, int c, int d) = 0; // результат -0, функция любая
};
//
class ISprint0Task5// не меняется
	//Задача: решить задачу.
	//Если Вы решаете один вариант, то в названии консольного приложения после Task0.(V0) не указываете. 
{
public:
	virtual int Zadacha(float a , float b, float c) = 0; // результат -0, функция любая
};
//
class ISprint0Task6// не меняется
	//Задача:вычислить значение выражения.
	//Если Вы решаете один вариант, то в названии консольного приложения после Task0.(V0) не указываете. 
{
public:
	virtual int Calculate(float a, int b) = 0; // результат -0, функция любая
};
//
class ISprint0Task7// не меняется
	//Задача:вычислить значение выражения.
	//Если Вы решаете один вариант, то в названии консольного приложения после Task0.(V0) не указываете. 
{
public:
	virtual float Rezalt(int a) = 0; // результат -0, функция любая
};
//
// 
// 

//  Sprint1
class ISprint1Task0V00// не меняется
	//Задача:вычислить значение выражения.
	//Если Вы решаете один вариант, то в названии консольного приложения после Task0.(V0) не указываете. 
{
public:
	virtual int Calculate(int a, int b) = 0; // результат -0, функция любая
};
//
class ISprint1Task0V01// не меняется
	//Задача:вычислить значение выражения.
	//Если Вы решаете один вариант, то в названии консольного приложения после Task0.(V0) не указываете. 
{
public:
	virtual int Rezalt(int a, int b, int c) = 0; // результат -0, функция любая
};
//
class ISprint1Task1// не меняется
	//Задача:вычислить значение выражения.
	//Если Вы решаете один вариант, то в названии консольного приложения после Task0.(V0) не указываете. 
{
public:
	virtual int Logic(int a) = 0; // результат -0, функция любая
};
//
class ISprint1Task2// не меняется
	//Задача:вычислить значение выражения.
	//Если Вы решаете один вариант, то в названии консольного приложения после Task0.(V0) не указываете. 
{
public:
	virtual int LogicLong(int a) = 0; // результат -0, функция любая
};


