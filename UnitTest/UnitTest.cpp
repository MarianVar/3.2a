#include "pch.h"
#include "CppUnitTest.h"
#include "../3.2a/3.2a.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int N = 2;
			Student* s = new Student[N];
			s[0].prizv = "Varhomij";
			s[0].cours = 1;
			s[0].spec = "it";
			s[0].physic = 5;
			s[0].math = 5;
			s[0].informatic = 5;
			s[1].prizv = "Shevchenco";
			s[1].cours = "2";
			s[1].spec = "it";
			s[1].physic = 3;
			s[1].math = 3;
			s[1].informatic = 3;

			Assert::IsTrue(BinSearch(s, N, "Shevchenco", "2", "it") == 1);
		}
	};
}
