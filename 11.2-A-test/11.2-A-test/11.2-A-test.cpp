#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My112Atest
{
	TEST_CLASS(My112Atest)
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
