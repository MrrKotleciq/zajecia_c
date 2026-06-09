#include <iostream>

using namespace std;

// tworzenie nowego typu za pomocą struktury
struct punkt
{
    float x;
    float y;
    float z;

    // konstruktor i wartości domyślne
    // umożliwia utworzenie i zainicjowanie zmiennej w postaci np. punkt P(5, 10);
    punkt(float a=0, float b=0, float c=0)
    {
        x = a;
        y = b;
        z = c;
    }

    // przeciążanie operatorów w implementacji struktury:
    // składnia: zwracany_typ operator # (argument z prawej strony)
    // # - jeden z operatorów języka C++, np. +, -, /, *, %, ^, ==, !=, itd.
    // można dodać const jeśli operand ma nie być modyfikowany

    // do lewego operandu, odnosimy się jak bezpośrednio do składowych
    // struktury, czyli w tym przypadku będą to zmienne x i y.
    // Przykładowo wyrażenie
    // P1 + P2
    // ma lewy operand (P1), operator (+) i prawy operand (P2)

    // przeciążenie operatora =
    // przepisuje wsp. z punktu a do aktualnego punktu
    void operator = (const punkt& a)
    {
        x=a.x;
        y=a.y;
        z=a.z;
    }

    // przeciążenie operatora +
    // dodaje współrzędne punktu z lewej strony znaku + (lewy operand)
    // oraz punktu z prawej strony znaku + (prawy operand)
    // Zwraca nowy punkt
    punkt operator + (const punkt& a) const
    {
        return punkt(x+a.x, y+a.y, z+a.z);
    }

    punkt operator - (const punkt& a) const
    {
        return punkt(x-a.x, y-a.y, z-a.z);
    }

    // przeciążenie operatora porównania ==
    // Zwraca wartość logiczną prawda, jeżeli składowe
    // porównywanych punktów są jednakowe
    bool operator == (const punkt& a) const
    {
        return (x == a.x && y == a.y && z == a.z);
    }

    // przeciążony operator mnożenia *
    // Mnoży współrzędne punktu przez skalę
    punkt operator * (const float skala)
    {
        return punkt(x*skala, y*skala, z*skala);
    }
};

int main()
{
    // utworzenie obiektów typu punkt: P1 i P2
    // oraz zainicjowanie ich współrzędnych
    punkt P1(3, 4, 5);
    punkt P2(2, 5, 8);

    // ---------------------------------------------

    cout << "Wspolrzedne punktu P1: " << endl;
    cout << P1.x << " " << P1.y << " " << P1.z << endl;
    cout << "Wspolrzedne punktu P2: " << endl;
    cout << P2.x << " " << P2.y << " " << P2.z << endl;

    // ---------------------------------------------

    // wykorzystanie operatora sumy + oraz przypisania =
    punkt P3 = P1+P2;
    
    cout << "Dodaje punkt P1 i P2 (P3 = P1+P2)." << endl;
    cout << "Wspolrzedne punktu P3: " << endl;
    cout << P3.x << " " << P3.y << " " << P3.z << endl;
    // wykorzystanie operatora sumy + oraz przypisania =
    punkt P6 = P1-P2;
    
    cout << "Odejmuje punkt P1 i P2 (P6 = P1-P2)." << endl;
    cout << "Wspolrzedne punktu P3: " << endl;
    cout << P6.x << " " << P6.y << " " << P6.z << endl;
    // ---------------------------------------------

    cout << "\nSkaluje punkt P3 o wspolczynnik 5." << endl;
    // wykorzystanie przeciążonego operatora *
    punkt P4 = P3*5;
    cout << "Wspolrzedne nowego punktu:" << endl;
    cout << P4.x << " " << P4.y << " " << P4.z << endl << endl;

    // ---------------------------------------------



    // sprawdzenie działania operatora ==
    if (P1 == P2)
        cout << "Punkty P1 i P2 maja jednakowe wspolrzedne.";
    else
        cout << "Punkty P1 i P2 maja rozne wspolrzedne.";

    return 0;
}