// Tyuiu.Cours.cpp.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <math.h>

// � ���� ����� ������ ������ �� ����!
// Sprint0
// 
// TODO: This is an example of a library function
class ISprint0Task2V0 // �� ��������
{
public:
	virtual int Add(int a,int b) = 0; // ��������� -0, ������� �����
};
//
class ISprint0Task2V1 // �� ��������
{
public:
	virtual int Summ(float a, int b, int c) = 0; // ��������� -0, ������� �����
};
class ISprint0Task2V2 // �� ��������
{
public:
	virtual int SummV2(int a, int b, int c) = 0; // ��������� -0, ������� �����
};
//
class ISprint0Task3 // �� ��������
{
public:
	virtual int SummV3(int a, int b, int c) = 0; // ��������� -0, ������� �����
};
//
class ISprint0Task4// �� ��������
	//������: ��������� �������� ���������.
	//���� �� ������� ���� �������, �� � �������� ����������� ���������� ����� Task0.(V0) �� ����������. 
{
public:
	virtual int Calculate(int a, int b, int c, int d) = 0; // ��������� -0, ������� �����
};
//
class ISprint0Task5// �� ��������
	//������: ������ ������.
	//���� �� ������� ���� �������, �� � �������� ����������� ���������� ����� Task0.(V0) �� ����������. 
{
public:
	virtual int Zadacha(float a , float b, float c) = 0; // ��������� -0, ������� �����
};
//
class ISprint0Task6// �� ��������
	//������:��������� �������� ���������.
	//���� �� ������� ���� �������, �� � �������� ����������� ���������� ����� Task0.(V0) �� ����������. 
{
public:
	virtual int Calculate(float a, int b) = 0; // ��������� -0, ������� �����
};
//
class ISprint0Task7// �� ��������
	//������:��������� �������� ���������.
	//���� �� ������� ���� �������, �� � �������� ����������� ���������� ����� Task0.(V0) �� ����������. 
{
public:
	virtual float Rezalt(int a) = 0; // ��������� -0, ������� �����
};
//
// 
// 

//  Sprint1
class ISprint1Task0V00// �� ��������
	//������:��������� �������� ���������.
	//���� �� ������� ���� �������, �� � �������� ����������� ���������� ����� Task0.(V0) �� ����������. 
{
public:
	virtual int Calculate(int a, int b) = 0; // ��������� -0, ������� �����
};
//
class ISprint1Task0V01// �� ��������
	//������:��������� �������� ���������.
	//���� �� ������� ���� �������, �� � �������� ����������� ���������� ����� Task0.(V0) �� ����������. 
{
public:
	virtual int Rezalt(int a, int b, int c) = 0; // ��������� -0, ������� �����
};
//
class ISprint1Task1// �� ��������
	//������:��������� �������� ���������.
	//���� �� ������� ���� �������, �� � �������� ����������� ���������� ����� Task0.(V0) �� ����������. 
{
public:
	virtual int Logic(int a) = 0; // ��������� -0, ������� �����
};
//
class ISprint1Task2// �� ��������
	//������:��������� �������� ���������.
	//���� �� ������� ���� �������, �� � �������� ����������� ���������� ����� Task0.(V0) �� ����������. 
{
public:
	virtual int LogicLong(int a) = 0; // ��������� -0, ������� �����
};


