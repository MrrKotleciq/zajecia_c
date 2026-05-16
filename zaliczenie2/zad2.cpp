#include <iostream>
#include <fstream>

using namespace std;

struct przesylka
{
    string miasto_nadawcy;
    string miasto_odbiorcy;
    int nr_przesylki;
};


int main(){

    int N = 6; //wielkosc tablicy

    fstream plik;
    string nazwa_pliku = "dane.txt";


    przesylka tab[N] = {
        {"Kielce", "Warszawa", 10238},
        {"Gdańsk", "Kraków", 23413},
        {"Berlin", "Moskwa", 23451},
        {"a", "b", 12345},
        {"c", "d", 17425},
        {"e", "f", 15726}
    };

    cout<< "Lista przesylek" << endl << "--------------------" << endl;

    for (int i = 0; i < N; i++){

        cout << endl << i+1 << ". " << tab[i].miasto_nadawcy << " " << tab[i].miasto_odbiorcy << " " << tab[i].nr_przesylki;

    }

    plik.open(nazwa_pliku, ios::out | ios::trunc);

    if (plik.is_open()){

        plik << "Lista przesylek" << endl << "--------------------" << endl;

        for (int i = 0; i < N; i++){

            plik << endl << i+1 << ". " << tab[i].miasto_nadawcy << " " << tab[i].miasto_odbiorcy << " " << tab[i].nr_przesylki;

        }

    }

    else{
        cout << "Nieudało się otworzyć pliku";
    }

    plik.close();

    return 0;
}