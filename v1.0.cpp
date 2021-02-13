#include <iostream>
#include <string>
using namespace std;
string kaita(string vardas, string pradzia)
{
	tolower(vardas.back());
	if (vardas.back() == 'a')
	{
		pradzia = "Sveika, ";
	}
	else
	{
		pradzia = "Sveikas, ";
	}
	return pradzia;
}

int main()
{
	int kiekis;
	string vardas, pradzia, suma;
	cout << "Irasykite savo varda: ";
	cin >> vardas;
	cout << "Irasykite remelio dydi: ";
	cin >> kiekis;
	pradzia = kaita(vardas, pradzia);
	suma = pradzia + vardas + "!";
	int sum = suma.length();

	string pilnas(sum + 4, '*');
	string tuscias(sum+2, ' ');

	tuscias.insert(0, "*");
	tuscias.append("*");
	suma.insert(0, "* ");
	suma.append(" *");

	cout << pilnas << endl;

	for (int i = 0; i < kiekis / 2-1; i++)
	{
		cout << tuscias << endl;
	}
	cout << suma << endl;
	for (int i = 0; i < kiekis / 2-1; i++)
	{
		cout << tuscias << endl;
	}

	cout << pilnas << endl;
	
}