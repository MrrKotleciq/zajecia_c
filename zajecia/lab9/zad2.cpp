#include <iostream>
using namespace std;

// Struktura przechowuje dane zawodników
struct gracz {
    int punkty;
    string nazwa;
};

// funkcja znajduje gracza z nawyższą liczbą punktów
// i zwraca adres reprezentującej go struktury
gracz *znajdzZwyciezce(int* wynik, gracz zawodnik[], int n) {

    // na początku zakładamy, że pierwszy gracz ma największą liczbę punktów
    int indeks = 0;
    int maxPunkty = zawodnik[indeks].punkty;

    // w pętli sprawdzamy kolejno, czy ktoś ma więcej punktów
    for (int i = 0; i < n; i++) {
        if (zawodnik[i].punkty > maxPunkty) {
            maxPunkty = zawodnik[i].punkty;
            indeks = i;
        }
    }
    *wynik = zawodnik[indeks].punkty;
    // zwracamy adres struktury zawodnika
    // z najwiekszą liczbą punktów
    return &zawodnik[indeks];
}

void drukuj(int n, gracz zawodnik[] , int prog){

    cout << endl << "Lista zawodników z wynikiem powyżej " << prog << ":" << endl;

    for ( int i = 0; i < n; i++ ){
        if (zawodnik[i].punkty > prog){
            cout << "Zawodnik: " << zawodnik[i].nazwa << " Punkty: " << zawodnik[i].punkty << endl;
        }
    }

}

int main ()
{
  int liczbaZawodnikow = 6;
  gracz zawodnicy[] = { {443, "Adam"},
                        {483, "Jan"},
                        {472, "Franek"},
                        {421, "Jakub"},
                        {445, "Adam2"},
                        {499, "Czeczen"} };

  // tworzymy wskaznik na gracza, ktory zwyciężył
  gracz *pZwyciezca;

  int wynik;
  int* pWynik = &wynik;
  // znajdujemy zwyciezce za pomoca zdefiniowanej funkcji
  pZwyciezca = znajdzZwyciezce(pWynik, zawodnicy, liczbaZawodnikow);

  cout << "Zwyciezyl zawodnik o imieniu: " << (*pZwyciezca).nazwa << " z " << wynik << " punktami" << endl;

  drukuj(liczbaZawodnikow, zawodnicy, 450);

  return 0;
}