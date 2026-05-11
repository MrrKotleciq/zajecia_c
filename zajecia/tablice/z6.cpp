#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    srand( time( NULL ) );
    cout << rand()%49+1;

    return 0;
}