#include <iostream>

using namespace std;

int main()
{
	cout << "--- Programm zur Multiplikation zweier Zahlen ---\n";

	double factor1;
	double factor2;
	cout << "Bitte gib den ersten Faktor ein: ";
	cin >> factor1;
	cout << "Bitte gib den zweiten Faktor ein: ";
	cin >> factor2;
	cout << "Das Produkt ist " << factor1 * factor2;

	return 0;
}