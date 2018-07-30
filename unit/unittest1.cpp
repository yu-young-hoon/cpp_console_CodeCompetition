#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\\codeforce_cpp\\backjun\\1003.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 0;
			int b = 0;
			int i = 0;
			int z = fib(1, a, b);
			Assert::AreEqual(z, 1);
		}

	};
}