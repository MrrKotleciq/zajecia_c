#include <iostream>
#include <cstdint> // dla typów całkowitych o jawnie określonej liczbie bitów, uint8_t, int8_t, uint16_t, itd...

using namespace std;


void WyswietlMikrokontroler(uint8_t port);


// funkcja główna
int main() {

	// uint8_t - typ danych przechowujący liczbę 8 bitową bez znaku minus
	// zakres: 0-255 (tylko całkowite)
	uint8_t port = 0b00000000;  // zmienna 8 bitowa przechowująca stan nóżek mikrokontrolera
						    // domyślnie wszystkie wyjścia ustawione bitowo na 0; to samo: port = 0;

	WyswietlMikrokontroler(port); // wyświetlenie mikrokontrolera z aktualnym stanem portu


	// zmienne pomocnicze do obsługi menu i programu
	char wybor         = 0;
	int  numer         = 0;
	bool symulacjaTrwa = true;


	// główna pętla programu
	do {
		cout << "Wybierz opcje: u - ustaw bit, z - zeruj bit, o - odwroc, r - resetuj wszystko, f - ustaw wszystko, a - odwróć wszystko." << endl;
		cout << " > ";

		cin >> wybor;

		switch (wybor) {
			case 'u':
			case 'U':
				//cout << "Ktory bit portu ustawic? Podaj nr: ";
				cout << "Ustaw bit nr P";
				cin >> numer;

				// ustawienie wybranego bitu operacją sumy bitowej i przesunięciem 1-ki na wybrany numer bitu
				port = port | (1 << numer); // to samo co: port |= (1 << numer)
				WyswietlMikrokontroler(port);
				break;


			case 'r':
			case 'R':
				port = 0b00000000;
				WyswietlMikrokontroler(port);
				break;


			case 'k':
			case 'K':
				symulacjaTrwa = false;
				break;

            case 'z':
            case 'Z':
                cout << "Zeruj bit nr P";
				cin >> numer;

                port = port & ~(1 << numer); // to samo co: port |= (1 << numer)
				WyswietlMikrokontroler(port);
                break;

            case 'o':
            case 'O':
                cout << "odwroc bit nr P";
				cin >> numer;

                port = port ^ (1 << numer); // to samo co: port |= (1 << numer)
				WyswietlMikrokontroler(port);
                break;
            case 'f':
            case 'F':
                cout << "Ustaw wszystko";

                port = 0b11111111; // to samo co: port |= (1 << numer)
				WyswietlMikrokontroler(port);
                break;

            case 'a':
            case 'A':
                cout << "Odwróć wszystko";

                port = ~port; // to samo co: port |= (1 << numer)
				WyswietlMikrokontroler(port);
                break;

			default:
				cout << "Opcja niezaimplementowana.\nk - wyjscie." << endl << endl;

		} // switch (wybor)
	} while (symulacjaTrwa);

	cout << "\nKoniec programu.\n";
	return 0;
} // main()


// definicja funkcji wyświetlającej mikrokontroler i stan portu.
// Jako parametr funkcja przyjmuje liczbę 8-bitową bez znaku (uint8_t)
void WyswietlMikrokontroler(uint8_t port)
{
    const char* UL = "┌";
    const char* UR = "┐";
    const char* BL = "└";
    const char* BR = "┘";
    const char* H  = "─";
    const char* V  = "│";
    const char* TL = "┤";
    const char* TP = "├";

    system("clear"); // czyści konsolę

    cout << UL;
    for (int i = 0; i < 10; i++) cout << H;
    cout << UR << "\n";

    // pętla do odczytu pojedynczych bitów i wyświetlania ich stanu
    for (int i = 7; i >= 0; i--)
    {
        uint8_t stan = (port >> i) & 0x01; // odczytujemy bity z portu zaczynając od najstarszego

        cout << "|       P" << i << " " << TP << H << " " << (int) stan;
        cout << "      (" << ((stan) ? "+5V)" : "0V)") << endl;
    }

    cout << "'----------'\n\n";

    
} // WyswietlMikrokontroler(uint8_t port)