#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.MorozAD.Sprint0.Task5.Lib/Tyuiu.MorozAD.Sprint0.Task5.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new Service1();
			int a = 4;
			int b = 5;
			int c = 6;
			int d;

			d = date->Zadacha(a, b, c);

			Assert::AreEqual(25, d);

		}
	};
}
