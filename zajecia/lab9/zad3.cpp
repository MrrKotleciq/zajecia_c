#include <iostream>

using namespace std;

void zamienSekundyNaDniIGodziny(int sekundy, int *dni, int *godziny, int *minuty) {
    // Oblicz liczbę dni
    *dni = sekundy / (24 * 3600);
    // Oblicz pozostałe sekundy po odjęciu dni
    int pozostaleSekundy = sekundy - *dni * (24 * 3600); // lub: ... = sekundy % (24 * 3600);
    // Oblicz liczbę godzin
    *godziny = pozostaleSekundy / 3600;
    pozostaleSekundy = sekundy % 3600;
    *minuty = pozostaleSekundy / 60;
}

int main() {
    int sekundy = 2 * 24*3600 + 5 * 3600 + 14 * 60;  // Przykładowa liczba sekund
    int dni = 0;
    int godziny = 0;
    int minuty = 0;

    // Wywołaj funkcję podając adresy zmiennych, do których obliczone będą wartośći
    zamienSekundyNaDniIGodziny(sekundy, &dni, &godziny, &minuty);

    cout << "Liczba sekund: " << sekundy << endl << endl;

    cout << "Liczba dni: " << dni << endl;
    cout << "Liczba godzin: " << godziny << endl;
    cout << "Liczba minut: " << minuty << endl;

    return 0;
}