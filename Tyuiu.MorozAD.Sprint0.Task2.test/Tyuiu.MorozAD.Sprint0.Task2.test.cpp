#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.MorozAD.Sprint0.Task2.lib/Tyuiu.MorozAD.Sprint0.Task2.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace  UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V0* service = new Service();
			int a = 3;
			int b = 4;
			int c;

			c = service->Add(a, b);

			Assert::AreEqual(7, c);
		}
	};
}
