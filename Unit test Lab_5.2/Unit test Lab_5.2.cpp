#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnittestLab52
{
	TEST_CLASS(UnittestLab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 0.1, n = 0, a = x, t1 = (2. * n - 1), t2 = (2. * n + 1);
			double R = x * x * t1 / t2;
			a *= R;
		}
	};
}
