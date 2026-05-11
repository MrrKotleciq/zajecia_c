#include <iostream>
#include <fstream>

using namespace std;

// definicja struktury samochod
struct samochod
{ // elementy składowe struktury:
    string marka;
    string model;
    string kolor;
    int rok_produkcji;
    float pojemnosc;
};

int main() {

    fstream plik;

    string nazwa = "plik.txt";
    plik.open(nazwa, ios::out);

    int liczba_aut = 5;

    // utworzenie tablicy ze strukturami typu samochod
    samochod auta[] = { {"VW", "Passat", "Granatowy", 2006, 1.9},
                        {"BMW", "M550d", "Czarny", 2013, 3},
                        {"Ferrari", "F50", "Czerwony", 1996, 4.7},
                        {"Fiat", "Marea", "Biały", 1998, 1.6},
                        {"Peugeot", "508", "Srebrny", 2024, 1.4} };

    // wyświetlenie nagłówka
    cout << "Marka \tModel \tRok \tKolor" << endl;
    cout << "----------------------------------" << endl;

    // pętla, która automatycznie wyświetli wszystkie samochody
    // \t – oznacza znak tabulacji (odstęp)
    for (int i = 0; i < liczba_aut; i++) {
         cout << auta[i].marka << "\t" << auta[i].model << "\t"
              << auta[i].rok_produkcji << "\t" << auta[i].kolor << endl;
    }

    if (plik.is_open()){

        plik << "Marka \tModel \tRok \tKolor" << endl;
        plik << "----------------------------------" << endl;

        // pętla, która automatycznie wyświetli wszystkie samochody
        // \t – oznacza znak tabulacji (odstęp)
        for (int i = 0; i < liczba_aut; i++) {
            plik << auta[i].marka << "\t" << auta[i].model << "\t"
                << auta[i].rok_produkcji << "\t" << auta[i].kolor << endl;
        };

    }
    else cout << "blad";

    return 0;
}