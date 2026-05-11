#include <iostream>
#include <fstream>		// biblioteka do obsługi we/wy plików

using namespace std;

int main() {

	// // dane, które będziemy chcieli zapisać:
	// string naglowek = "Ustawienia sterownika temperatur:";
	// float temp_biuro   = 21.0;
	// float temp_hala    = 18.5;
	// float temp_magazyn = 12.0;

	// string nazwy_pomieszczen[] = {"Biuro", "Hala", "Magazyn"};


	// // wyświetlenie danych
	// cout << naglowek << endl;
	// cout << nazwy_pomieszczen[0] << ": " << temp_biuro << " st. C" << endl;
	// cout << endl;

	// // ----------------------------------------
	// // CZĘŚĆ PROGRAMU ZAPISUJĄCA DANE DO PLIKU
	// // ----------------------------------------

	// // zdefiniowanie nazwy pliku fizycznego na dysku
	char nazwa_pliku[20] = "temperatury.txt";

	// // utworzenie strumienia o nazwie plik
	fstream plik;

	// // otwarcie strumienia do zapisu (ios::out - do zapisu, ios::trunc - nadpisz lub utwórz nowy plik)
	// plik.open(nazwa_pliku, ios::out | ios::trunc);

	// // sprawdzenie, czy udało się otworzyć plik: jeśli tak, to zapisujemy dane
	// if (plik.is_open())
	// {
	// 	plik << naglowek << endl;
	// 	plik << temp_biuro << endl;
	// 	plik << temp_hala << endl;
	// 	plik << temp_magazyn; // na końcu pliku nie powinno być znaku nowej linii

	// 	// wyświetlenie komunikatu po ukończeniu zapisu
	// 	cout <<"# Info: Dane zapisano do pliku: " << nazwa_pliku << endl;
	// }
	// else // jeśli się nie udało zapisać...
	// {
	// 	// ...wyświetlamy informację o błędzie
	// 	cout <<"# Blad: Nie można zapisac do pliku " << nazwa_pliku << endl;
	// }

	// // zamknięcie pliku powiązanego ze strumieniem
	// plik.close();

	// ------------------------------------------------------
	// CZĘŚĆ PROGRAMU ODCZYTUJĄCA DANE Z PLIKU (sprawdzenie)
	// ------------------------------------------------------

	// Informacja wyświetlana w konsoli
	cout <<"\n# Info:\tTeraz naglowek oraz liczby z pliku\n";
	cout <<"\tzostana odczytane przez program.\n\n";


	// ponowne otwarcie pliku - tym razem do odczytu
	plik.open(nazwa_pliku, ios::in);

	// najpierw wczytanie i wyswietlenie nagłówka jako całej linii tekstu
	string tekst_naglowka;
	getline(plik, tekst_naglowka);
	cout << tekst_naglowka << endl;

	// wczytanie i wyświetlenie kolejnych temperatur
	float temperatura; // zmienna do przechowywania wczytywanej temperatury
    string miejsce;

	// wczytujemy w pętli dopóki nie ma flagi końca pliku (eof - End Of File)
	while (!plik.eof())
	{
		plik >> miejsce >> temperatura; // odczyt liczby z pliku do zmiennej temperatura
		cout << "Temperatura odczytana z pliku w: " << miejsce << " " << temperatura << endl; // wyświetlenie zmiennej i nowej linii
	}

	// zamknięcie pliku powiązanego ze strumieniem
	plik.close();

	return 0;
}
