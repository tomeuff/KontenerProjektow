#include "Czlowiek.h"

Czlowiek::Czlowiek(string imie, string nazwisko, unsigned int wiek)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->wiek = wiek;
}

void Czlowiek::postarz_czlowieka(int lata)
{
	this->wiek += lata;
}

void Czlowiek::przywitanie()
{
	cout << "Witaj " + this->imie + " " + this->nazwisko << endl;
}

string Czlowiek::daj_imie_i_nazwisko()
{
	return this->imie + " " + this->nazwisko;
}

bool Czlowiek::czy_pierwsza(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}