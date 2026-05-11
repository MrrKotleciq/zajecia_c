#include <iostream>

using namespace std;

int main() {

	// def. tablicy o 3 elementach typu int
	float tablica[5];

	// Wprowadzanie elementów (indeksy: 0 - pierwszy element, 2 - ostatni)
	// i = zmienna licznikowa pętli for i jednocześnie użyta jako indeks tablicy
	for (int i = 0; i < 5; i++) {
		cout << "Podaj element " << i << ": ";
		cin >> tablica[i];
	}

	cout << endl; // wyświetlenie pustej linii

	// Wyświetlenie elementów tablicy:
	for (int i = 0; i < 5; i++) {
		cout << "tab[" << i << "] = " << tablica[i] << " ";
	}

	return 0;
}
// Zadanie:
// Zmodyfikuj przykład 2, aby program korzystał z dwóch niezależnych
// pętli for:
// - w pierwszej pętli użytkownik wprowadza elementy (liczby rzeczywiste) do tablicy,
// - w drugiej pętli tablica jest wyświetlana.