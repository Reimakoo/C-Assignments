// Assignment 2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*     
* 
* Ensimm�iseksi osoittajamuodossa:
* 
int summaaOsoittajina(int* luku1, int* luku2) {
    return *luku1 + *luku2;
}

int main()
{
    int luku1 = 1;
    int luku2 = 2;

    int tulos = summaaOsoittajina(&luku1, &luku2);
    cout << "Tulos on :  " << tulos;
    return 0;
}
*/
// Toisena Referenssimuodossa!:


int summaaReferenssein�(int& luku1, int& luku2) {
    return luku1 + luku2;
}

int main() {
    int luku1 = 1;
    int luku2 = 3;

    int tulos = summaaReferenssein�(luku1, luku2);
    cout << "Tulos on :  "  << tulos;
    return 0;
}
