#include <iostream>
#include <cstdint> 	// dla typu uint8_t
#include <bitset> 	// do obsługi wyświetlanai bitowego

using namespace std;

int main() {

	uint8_t a = 6; // przykładowa liczba całkowita zapisana w 8-bitowej zmiennej

	cout << "Dzialanie operatora przesuniecia w lewo <<" << endl << endl;

	cout << "     a = " << bitset<8>(a) << " a = " << (int) a << endl;
	cout << "         --------"	        << endl;
	
    for(int i = 1; i < 8; i++){
        cout << "a << 1 = " << bitset<8>(a << i) << " a = " << (int) (a << i) << endl;
    }


	cout << "Dzialanie operatora przesuniecia w prawo >>" << endl << endl;

	cout << "     a = " << bitset<8>(a) << " a = " << (int) a << endl;
	cout << "         --------"	        << endl;

	for(int i = 1; i < 8; i++){
        cout << "a >> 1 = " << bitset<8>(a >> i) << " a = " << (int) (a >> i) << endl;
    }


	return 0;
}