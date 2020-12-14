#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My112Btest
{
	TEST_CLASS(My112Btest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s;

			double l = (s, 0);


			Assert::AreEqual(l, 0.0);

		}
	};
}
