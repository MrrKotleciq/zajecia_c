#include <iostream>
#include <cstdint> 	// dla typu uint8_t
#include <bitset> 	// do obsługi wyświetlania bitowego

using namespace std;

int main() {

	uint8_t a = 0; // ośmiobitowa zmienna całkowita bez znaku (bez liczb ujemnych)
				   // to samo co: unsigned char a = 0, ale typy _t czesto wykorzystuje się
				   // gdy chcemy mieć pewność, co do rozmiaru zmiennej


	// Wyświetlone przez pętlę kolumny zawierają:
	// K1 - licznik iteracji pętli
	// K2 - zmienna a wyświetlana w postaci dziesiętnej
	// K3 - zmienna a wyświetlana binarnie (bitowo)

	cout << "K1\tK2\tK3" << endl;

	for (int i = 0; i < 300; i++) {
		cout << "i=" << i << "\ta=" << (int) a << "\ta=" << bitset<8>(a) << endl;
		a++; // zwiększamy a o 1 w każdej iteracji
	}

	// Uwaga: zapis "(int) a" jest to tzw. rzutownie
	// wymusza traktowanie w konsoli a jako liczby całkowitej, a nie jako znaku
	// którym domyślnie jest liczba 8 bitowa. Na chwilę usuń (int) i uruchom program

	return 0;
}