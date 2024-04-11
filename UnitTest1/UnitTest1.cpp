#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab#3.4/T2.cpp"
#include "../OOPLab#3.4/T1.cpp"
#include "../OOPLab#3.4/T2.h"
#include "../OOPLab#3.4/T1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCompareMethod)
		{
			T2 obj1("obj1", 5, 4);
			T2 obj2("obj2", 3, 6);

			bool result = T2::Compare(obj1, obj2);

			Assert::IsTrue(result);
		}
	};
}