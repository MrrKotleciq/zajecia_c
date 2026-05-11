#include <iostream>

using namespace std;

int main() {

	// przykładowa liczba elementów tablicy
	int N = 7;

	// def. tablicy o N elementach typu float
	float masy[N];

	// Wyświetlenie komunikatu
	cout << "Podaj " << N << " wartosci oddzielajac spacja i zatwierdz Enterem: ";

	// Wprowadzanie elementów (indeksy: 0 - pierwszy element, 2 - ostatni)
	for (int i = 0; i < N; i++) {
		cin >> masy[i];
	}

	cout << endl; // wyświetlenie pustej linii

	// Wyświetlenie elementów tablicy:
	cout << "Wyświetlam masy przesyłek [kg]: \n";
	for (int i = 0; i < N; i++) {
		cout << "Paczka nr " << i+1 << ": " << masy[i] << endl;
	}

	return 0;
}
// Zadanie:
// Zmodyfikuj program z przykładu 3, aby:
// - Do tablicy wprowadzać wagę kolejnych paczek, które zostały
//   przyjęte w punkcie nadawczym.
// - Tekst i opisy wyświetlały się według przykładu działania programu.
// - Numeracja paczek była wyświetlana poprawnie.