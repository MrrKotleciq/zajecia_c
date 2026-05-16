#include <iostream>

using namespace std;

int main(){

    string tab[6] = {"AAA", "BBB", "CCC", "DDD", "EEE", "FFF"};

    string kod;

    cout << "Podaj kod rabatowy dużymi literami: ";
    cin >> kod;

    for (int i = 0; i < 6; i++){
        if (kod == tab[i]){
            cout << endl << "INFO: Kod zgodny. Przyznano rabat 10%." << endl;
            return 0;
        }
    }

    cout << endl << "INFO: Nie rozpoznano kodu rabatowego." << endl;

    return 0;
}