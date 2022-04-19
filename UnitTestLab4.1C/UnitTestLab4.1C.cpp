#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "CppUnitTest.h"
#include "../Lab4.1C/Lab4.1C.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab41C
{
	TEST_CLASS(UnitTestLab41C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = ProcessTXT("../t.txt");
			Assert::AreEqual(t, 8);
		}
	};
}
