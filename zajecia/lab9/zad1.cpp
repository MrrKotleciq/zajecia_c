#include <iostream>

using namespace std;

int main() {
    
    int wartosc;

    cout << "Podaj wartość: ";
    cin >> wartosc;

    int* pWskaznik = &wartosc;

    cout << "adres zmiennej: " << pWskaznik << endl
    << "wartosc zmiennej: " << *pWskaznik << endl; 


    return 0;
}
