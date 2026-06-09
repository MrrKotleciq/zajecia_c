#include <iostream>

using namespace std;

// przykładowe funkcje do przypisania przyciskom...
void odbierzPolaczenie() {
    cout << "## Odbiera połączenie ##" << endl << endl;
}

void inteligentnySpryskiwacz() {
    cout << "## Inteligentny spryskiwacz włączony ##" << endl << endl;
}

void wlaczRadio() {
	cout << "## Wlaczylem radio ##" << endl << endl;
}


void podgrzewanieFoteli() {
	cout << "## Podgrzewanie foteli wlaczone ##" << endl << endl;
}


void otworzMape() {
	cout << "## Ustawiam mape ##" << endl << endl;
}


void regulacjaZaglowkow() {
	cout << "## Regulacja zaglowkow ##" << endl << endl;
}


void ustawTempomat() {
	cout << "## Ustawiam tempomat ##" << endl << endl;
}




// funkcja ustawiająca wywoływane funkcje przez wskaźniki fptrA, fptrB, fptrC
void konfiguracja(void (*&fptrA)(), void (*&fptrB)(), void (*&fptrC)(), void (*&fptrD)()) {

	// tablica wskazników do funkcji
	void (*listaFunkcji[])() = {wlaczRadio,
                                podgrzewanieFoteli,
                                otworzMape,
                                regulacjaZaglowkow,
                                ustawTempomat,
                                odbierzPolaczenie,
                                inteligentnySpryskiwacz};

	cout << endl << endl;
	cout << "KONFIGURACJA PRZYCISKOW"   << endl;
	cout << "Numery funkcji:"           << endl;
	cout << "  Wlacz radio           0" << endl;
	cout << "  Podgrzewanie foteli   1" << endl;
	cout << "  Otworz mape           2" << endl;
	cout << "  Regulacja zaglowkow   3" << endl;
	cout << "  Ustaw tempomat        4" << endl;
    cout << "  Odbierz polaczenie    5" << endl;
    cout << "  Intel. spryskiwacz    6" << endl << endl;

	cout << "Ustaw funkcje dla przycisku A: ";
	int numer;
	cin >> numer;
	fptrA = listaFunkcji[numer];

	cout << "Ustaw funkcje dla przycisku B: ";
	cin >> numer;
	fptrB = listaFunkcji[numer];

	cout << "Ustaw funkcje dla przycisku C: ";
	cin >> numer;
	fptrC = listaFunkcji[numer];

    cout << "Ustaw funkcje dla przycisku D: ";
	cin >> numer;
	fptrD = listaFunkcji[numer];

	cout << endl;
}


int main() {


	cout << "Sterowanie:" << endl;
	cout << " A - Wcisnij przycisk A" << endl;
	cout << " B - Wcisnij przycisk B" << endl;
    cout << " C - Wcisnij przycisk C" << endl;
	cout << " D - Wcisnij przycisk D" << endl << endl;

	cout << " K - Konfiguracja" << endl;
	cout << " 0 - Wyjscie" << endl;


	// definicja wskaźników do funkcji
	void (*fptrA)();
	void (*fptrB)();
	void (*fptrC)();
    void (*fptrD)();


	// przypisanie dmomyślnych funkcji wskaźnikom do funkcji
	// (nazwa funkcji bez nawiasów jest adresem funkcji)
	fptrA = wlaczRadio;
	fptrB = podgrzewanieFoteli;
	fptrC = otworzMape;
    fptrD = regulacjaZaglowkow;


	// główna pętla programu
	char wybor;
	do {
		cout << "Podaj swoj wybor (A/B/C/D/K/0): ";
		cin >> wybor;

		switch (wybor) {
			case 'a':
			case 'A':
				fptrA(); // wywołaj funkcję wskazaną przez fptrA
				break;
			case 'b':
			case 'B':
				fptrB(); // wywołaj funkcję wskazaną przez fptrB
				break;
			case 'c':
			case 'C':
				fptrC(); // wywołaj funkcję wskazaną przez fptrC
				break;
            case 'd':
			case 'D':
				fptrD(); // wywołaj funkcję wskazaną przez fptrC
				break;
			case 'k':
			case 'K':
				konfiguracja(fptrA, fptrB, fptrC, fptrD);
				break;
			case '0':
				break;
			default:
				cout << "Niezdefiniowana opcja." << endl << endl;
		}

	} while (wybor != '0');

	return 0;
}