#include <iostream>

using namespace std;

int main() {

	// def. tablicy o 3 elementach typu int
	float tablica[5];

	// Wprowadzanie poszczególnych elementów (indeksy: 0 - pierwszy element, 2 - ostatni)
	cout << "Podaj element 0: ";
	cin >> tablica[0];

	cout << "Podaj element 1: ";
	cin >> tablica[1];

	cout << "Podaj element 2: ";
	cin >> tablica[2];

    cout << "Podaj element 3: ";
	cin >> tablica[3];

    cout << "Podaj element 4: ";
	cin >> tablica[4];
    

	// Wyświetlenie elementów tablicy:
	cout << "\nWyswietlam tablice recznie:\n";
	cout << "tab[0] = " << tablica[0] << " ";
	cout << "tab[1] = " << tablica[1] << " ";
	cout << "tab[2] = " << tablica[2] << " ";
	cout << "tab[2] = " << tablica[3] << " ";
	cout << "tab[2] = " << tablica[4] << " ";
    
	return 0;
}
// Zadanie:
// Zmodyfikuj przykład 1 tak, aby tablica mogła przyjmować
// 5 elementów typu float (liczby rzeczywiste).