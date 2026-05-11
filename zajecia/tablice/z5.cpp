#include <iostream>

using namespace std;

float sumujTablice(float tab[], int N);
void wyswietlTablice(float tab[], int N);
float sredniaTablicy(float tab[], int N);

// Funkcja main() - od tej funkcji program zawsze zaczyna się wykonywać
int main() {

	// Przykładowa tablica kilku liczb rzeczywistych
	// float tablica1[] = {1.25, 2, 3, 4.5, 5.5, 6};
	// cout << "Utworzono tablice typu float..." << endl << endl;


	// // Przykład działania funkcji sizeof()
	// cout << "Rozmiar calej tablicy (w bajtach): "
	//      << sizeof(tablica1) << endl;                     // sizeof(tablica) zwróci liczbę bajtów zajmowanych przez calą tablicę (działa tylko w miejscu deklaracji)
	// cout << "Rozmiar pierwszego elementu (w bajtach): "
	//      << sizeof(tablica1[0]) << endl << endl;          // sizeof(tablica[0]) zwróci liczbę bajtów zajmowanych przez pierwszy element

	// int N1 = sizeof(tablica1)/sizeof(tablica1[0]);        // obliczmy automatycznie, ile tablica ma elementów
	// cout << "Obliczona liczba elementow tablicy N1 = " << N1 << endl << endl;



	// // wyswietlenie tablicy za pomocą zdefiniowanej funkcji
	// cout << "Wyswietlam przykladowa tablice: " << endl;
	// wyswietlTablice(tablica1, N1);



	// // wyświetlenie sumy elementów tablicy (suma zwracana przez funkcję 'sumujTablice()'
	// cout << "Suma jej elementow: " << sumujTablice(tablica1, N1) << endl;

    int N2;
	cout << "\n\nIle elementow chcesz wprowadzić? ";
	cin >> N2;
    float tablica2[N2];
    for (int i = 0; i < N2; i++ )
	cin >> tablica2[i]; // utworzenie nowej tablicy o liczbie elementów N2

    cout << endl << "Ich suma to: " << sumujTablice(tablica2, N2) << endl;
    cout << "Ich średnia to: " << sredniaTablicy(tablica2, N2);

	return 0;
}

void wyswietlTablice(float tab[], int N) {

	// Wyświetlenie elementów tablicy:
	for (int i = 0; i < N; i++) {
		cout << "Element " << i+1 << " (tab[" << i << "]) = " << tab[i] << endl;
	}
	cout << endl;

}

float sumujTablice(float tab[], int N) {

	float suma = 0;  // początkowa wartość sumy

	// po kolei kolejne elementy tablicy dodają się do sumy
	for (int i = 0; i < N; i++) {
		suma = suma+tab[i];
	}

	return suma; // funkcja zwraca obliczoną sumę
}

float sredniaTablicy(float tab[], int N){
    return sumujTablice(tab, N)/N;
}