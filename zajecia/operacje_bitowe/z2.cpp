#include <iostream>
#include <cstdint> 	// dla typu uint8_t
#include <bitset> 	// do obsługi wyświetlanai bitowego


using namespace std;

int main() {

	// przykładowe 8-bitowe zmienne o wartościach dziesiętnych 6 i 85
	uint8_t a = 6;
	uint8_t b = 85;

	cout << "Dzialanie operatora sumy bitowej |" << endl << endl;

	cout << "     a = " << bitset<8>(a) 	<< endl; 	// bitset<8>(a) - wyświetli liczbę a w formie binarnej
	cout << "   | b = " << bitset<8>(b) 	<< endl;	// bitset<8>(b) - wyświetli liczbę b w formie binarnej
	cout << "         --------" 		<< endl;
	cout << "  OR   = " << bitset<8>(a | b) << endl << endl; // wyświetlamy wynik binarny operacji (a | b)
    cout << "  AND  = " << bitset<8>(a & b) << endl << endl; // wyświetlamy wynik binarny operacji (a | b)
    cout << "  XOR  = " << bitset<8>(a ^ b) << endl << endl; // wyświetlamy wynik binarny operacji (a | b)
    cout << "  NOT  = " << bitset<8>(~a) << endl << endl; // wyświetlamy wynik binarny operacji (a | b)
    
	return 0;
}