#pragma once
#include <iostream>
using namespace std;

class Czlowiek
{
	public:
		Czlowiek(string imie, string nazwisko, unsigned int wiek);
		string imie;
		int wiek;
	private:
		string nazwisko;
	public:
		void przywitanie();
		void postarz_czlowieka(int lata);
		string daj_imie_i_nazwisko();
		static bool czy_pierwsza(int n);
};
