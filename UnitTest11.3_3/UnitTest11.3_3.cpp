#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_11.3_3/lab_11.3_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest721
{
	TEST_CLASS(UnitTest721)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int r;
			r = main();
			Assert::AreEqual(r, 0);
		}
	};
}

