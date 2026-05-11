#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// przykładowa liczba elementów tablicy
	int N = 7;

	// def. tablicy o N elementach typu float
	//float masy[N];

	// Wyświetlenie komunikatu
	cout << "Podaj " << N << " wartosci oddzielajac spacja i zatwierdz Enterem: ";

	// Wprowadzanie elementów (indeksy: 0 - pierwszy element, 2 - ostatni)
	// for (int i = 0; i < N; i++) {
	// 	cin >> masy[i];
	// }

	float masy[] = {12, 35, 4.5, 15, 51, 0.28, 2};

	cout << endl; // wyświetlenie pustej linii

	// Wyświetlenie elementów tablicy:
	cout << "Wyświetlam masy przesyłek [kg]: \n";
	for (int i = 0; i < N; i++) {
		cout << "Paczka nr " << i+1 << ": " << masy[i] << endl;
	}

	float suma = 0;

	for (int i = 0; i < N; i++) suma += masy[i];

	cout << endl << "Masa wszystkich przesyłek: " << suma << " kg" << endl;

	cout << endl << "Przesyłki do specjalnej dostawwy (30+ kg): ";
	cout << endl << "===========================================";
	float suma_s = 0;

	for(int i = 0; i < N; i++){
		if (masy[i] >= 30){
			cout << endl << "Paczka nr " << i+1 << ": " << masy[i] << "kg";
			suma_s += masy[i];
		}
		if(masy[i] >= 50)	cout << " (wymagana paleta)";
	}

	cout << endl << "            ------" << endl << "      Suma: " << std::fixed << std::setprecision(2) << suma_s << " kg";

	return 0;
}
// Zadanie:
// Zmodyfikuj program z przykładu 3, aby:
// - Do tablicy wprowadzać wagę kolejnych paczek, które zostały
//   przyjęte w punkcie nadawczym.
// - Tekst i opisy wyświetlały się według przykładu działania programu.
// - Numeracja paczek była wyświetlana poprawnie.