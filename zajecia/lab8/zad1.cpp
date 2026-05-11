// Program zapisuję linię tekstu do pliku
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	// utworzenie strumienia o nazwie plik
	fstream plik;

	// zdefiniowanie nazwy pliku fizycznego na dysku
	char nazwa_pliku[20] = "moj_plik.txt";

	// otwarcie strumienia do zapisu
	plik.open(nazwa_pliku, ios::out | ios::trunc);

	// jeżeli udało się otworzyć plik, nastąpi wczytanie
	// i zapisanie linii tekstu do pliku
	if (plik.is_open())
	{
		cout <<"Wpisz linie tekstu i zakoncz Enterem: ";
		string tekst;
		getline(cin, tekst); // wczytuje całą linię ze strumienia cin do tekst
		plik << tekst;
        plik << "\n"; // zapisuje zmienną do pliku
        getline(cin, tekst); // wczytuje całą linię ze strumienia cin do tekst
		plik << tekst;
        plik << "\n";
        getline(cin, tekst); // wczytuje całą linię ze strumienia cin do tekst
		plik << tekst;


		cout <<"# Podane informacje zapisano do pliku o nazwie: " << nazwa_pliku << endl;
	}
	else
	{
		cout <<"Nie mozna utworzyc pliku "<< nazwa_pliku;
	}

	// zamknięcie pliku powiązanego ze strumieniem
	plik.close();


	return 0;
}