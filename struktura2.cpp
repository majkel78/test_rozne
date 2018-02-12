#include <string.h>
#include <iostream>

using namespace std;

struct Osoba
{
	string imie, nazwisko;
	unsigned int wiek;
	
	void wyswietl();
	
};

void Osoba::wyswietl()
{
	cout << "Struktura" <<endl;
	cout << "Osoba: " << imie << " " << nazwisko << " " << wiek << endl;
}

int main()
{
	struct Osoba czlowiek;
	//string imie, nazwisko;
	//int wiek;

	//cout << "Podaj imie, nazwisko, wiek - po spacji (zmienne)" << endl;
	//cin >> imie >> nazwisko >> wiek;
	
	cout << "Podaj imie, nazwisko, wiek - po spacji (struktura)" << endl;
	cin >> czlowiek.imie >> czlowiek.nazwisko >> czlowiek.wiek;
	
	//cout << "Zmienne" << endl;
	//cout << imie << " " << nazwisko << " " << wiek << endl;
	
	cout << "Struktura" << endl;
	cout << czlowiek.imie << " " << czlowiek.nazwisko << " " << czlowiek.wiek << endl;
	
	cout << "Struktura (metoda)" << endl;
	czlowiek.wyswietl();
	
	return 0;
}
