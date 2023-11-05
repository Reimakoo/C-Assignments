

#include <iostream>
using namespace std;

int main() {
    int x = 42;  // Kokonaislukumuuttuja x
    int* y = &x; // Osoitinmuuttuja y, osoittaa x:‰‰n

    // Tulostetaan muuttujien osoitteet ja arvot
    cout << "x:n osoite: " << &x << endl;
    cout << "y:n osoite: " << &y << endl;
    cout << "x:n arvo: " << x << endl;
    cout << "y:n arvo (osoitin): " << *y << endl;
     
    return 0;
}
