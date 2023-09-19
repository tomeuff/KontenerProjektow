#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Czlowiek.h"
#include "../Project1/Czlowiek.cpp"
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string dane = "Jan Kowal";
			Czlowiek c1("Jan", "Kowal", 67);
			Assert::AreEqual(dane, c1.daj_imie_i_nazwisko());
		}

		TEST_METHOD(TestMethod2)
		{
			fstream plik("C:\\Users\\Admin\\Desktop\\dane.txt");
			int p, d;
			while (!plik.eof())
			{
				plik >> p >> d;
				Assert::AreEqual(Czlowiek::czy_pierwsza(p), bool(d));
			}
		}
	};
}
