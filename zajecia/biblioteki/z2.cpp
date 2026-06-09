#include <iostream>
#include <cstdio>  // dla snprintf
#include <cstring> // dla strlen

using namespace std;

int main() {
	int idSilnika = 14;
	float predkosc = 1450.25f;
	float prad = 3.82f;

	// Tworzymy celowo mały bufor, aby przetestować zabezpieczenie przed przepełnieniem
	char bufor[40];

	// snprintf przyjmuje: (bufor docelowy, rozmiar bufora, format, zmienne...)
	// Funkcja gwarantuje dodanie znaku końca stringu '\0' na końcu bufora (indeks size-1)
	// i nie zapisze więcej niż 'size' znaków
	int wynik = snprintf(bufor, sizeof(bufor), "[LOG] ID:%d RPM:%.2f I:%.2fA", idSilnika, predkosc, prad);

	cout << "Zawartosc bufora (max 40 znakow):" << endl;
	cout << bufor << endl << endl;

	cout << "Dlugosc wygenerowanego tekstu: " << strlen(bufor) << " znakow." << endl;
	cout << "Wartosc zwrocona przez snprintf: " << wynik << " (tyle znakow chciala zapisac)." << endl;

	// Sprawdzenie, czy doszło do obcięcia tekstu (wynik >= rozmiar bufora)
	if (wynik >= sizeof(bufor)) {
		cout << "Ostrzezenie: Tekst zostal obciety! Potrzebny rozmiar bufora: " << wynik + 1 << " bajtow." << endl;
	} else {
		cout << "Tekst zapisany w calosci." << endl;
	}

	return 0;
}

void logujBlad(char* bufor, size_t rozmiar, int kodBledu, float wartoscParametru){
    
}