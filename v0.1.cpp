#include <iostream>
#include <string>
using namespace std;

int main()
{
	string vardas, pradzia, suma;
	pradzia = "Sveikas, ";
	cout << "Irasykite savo varda: ";
	cin >> vardas;
	suma = pradzia + vardas + "!";
	int sum = suma.length();

	string pilnas(sum + 4, '*');
	string tuscias(sum+2, ' ');

	tuscias.insert(0, "*");
	tuscias.append("*");
	suma.insert(0, "* ");
	suma.append(" *");


	cout << pilnas << endl;
	cout << tuscias << endl;
	cout << suma << endl;
	cout << tuscias << endl;
	cout << pilnas << endl;
	
}