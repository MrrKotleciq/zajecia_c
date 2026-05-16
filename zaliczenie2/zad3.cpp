#include <iostream>

using namespace std;


bool zmiana(float*, float*);

int main(){

    float a;
    float b;

    bool is_good;

    cout << endl << "Masa składnika 1 [kg]: ";
    cin >> a;
    cout << endl << "Masa składnika 2 [kg]: ";
    cin >> b;

    is_good  = zmiana(&a, &b);

    cout << endl << "Czy funkcja wykonana: " << is_good;
    cout << endl << "Składnik 1: " << a << " kg";
    cout << endl << "Składnik 2: " << b << " kg";

    return 0;
}

bool zmiana(float* a, float* b){

    cout << endl << "Wywołuje funkcję podwojenia warunkowego i wracam do main(). Wartości zmiennych: ";

    if(*a <= 20 && *b <= 20){
        *a *= 2;
        *b *= 2;
        return true;
    }

    return false;

}