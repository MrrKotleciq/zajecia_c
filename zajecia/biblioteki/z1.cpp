#include <iostream>
#include <cstring> // odpowiednik <string.h> w C++
#include <cstdio>  // odpowiednik <stdio.h> w C++

using namespace std;

int main() {
	// Symulacja ramki odebranej z czujnika temperatury i wilgotności
	const char* ramka = "$GPS:52.2297,21.0122;ALT:110.5;#";

	cout << "Odebrana ramka: " << ramka << endl << endl;

    const char* isCorrect = strstr(ramka, "$GPS:");
    
    if (isCorrect == NULL){
        cout << "Analia ramki: " << ramka << endl;
        cout << "Błąd : brak danych GPS!" << endl;
        return 0;
    }

    cout << endl << "Dane GPS zostały popranie odczytane:" << endl;

	// Wyszukanie pozycji frazy "$TEMP:" w ramce
	// Funkcja strstr(str1, str2) szuka pierwszego wystąpienia str2 w str1
	// i zwraca wskaźnik na początek tego wystąpienia, lub NULL jeśli nie znajdzie
	const char* pozycjaGPSlat = strstr(ramka, "$GPS:");

	if (pozycjaGPSlat != NULL) {
		float LAT = 0.0f;

		// sscanf pozwala na czytanie danych ze stringa według określonego formatu
		// %f wczytuje liczbę float
		// pozycjaGPSlat + 6 przesuwa wskaźnik o długość etykiety "$TEMP:" (6 znaków),
		// dzięki czemu czytamy bezpośrednio wartość liczbową
		if (sscanf(pozycjaGPSlat + 5, "%f", &LAT) == 1) {
			cout << "- Szerokość (Lat): " << LAT << " st" << endl;
		} else {
			cout << "Blad parsowania szerokości!" << endl;
		}
	} else {
		cout << "Brak etykiety szerokości w ramce!" << endl;
	}

    const char* pozycjaGPSlon = strstr(ramka, ",");

	if (pozycjaGPSlon != NULL) {
		float LON = 0.0f;

		// sscanf pozwala na czytanie danych ze stringa według określonego formatu
		// %f wczytuje liczbę float
		// pozycjaGPSlon + 6 przesuwa wskaźnik o długość etykiety "$TEMP:" (6 znaków),
		// dzięki czemu czytamy bezpośrednio wartość liczbową
		if (sscanf(pozycjaGPSlon + 1, "%f", &LON) == 1) {
			cout << "- Długość (Lon): " << LON << " st" << endl;
		} else {
			cout << "Blad parsowania długości!" << endl;
		}
	} else {
		cout << "Brak etykiety długości w ramce!" << endl;
	}


	// Wyszukanie pozycji frazy "ALT:"
	const char* pozycjaGPSalt = strstr(ramka, "ALT:");

	if (pozycjaGPSalt != NULL) {
		float ALT = 0.0f;
		// Etykieta "HUM:" ma 4 znaki, więc przesuwamy wskaźnik o 4 bajty
		// %d wczytuje liczbę całkowitą (int)
		if (sscanf(pozycjaGPSalt + 4, "%f", &ALT) == 1) {
			cout << "- Wysokość (ALT): " << ALT << " m" << endl;
		} else {
			cout << "Blad parsowania wysokości!" << endl;
		}
	} else {
		cout << "Brak etykiety wysokości w ramce!" << endl;
	}

	return 0;
}