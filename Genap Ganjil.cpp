#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan Angka : ";
    cin >> angka;

    cout << "Bilangan Ganjil :" << endl;
    for (int i = 0; i < angka; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    cout << "Bilangan Genap: " << endl;
        for (int i = 0; i < angka; i++){
        if (i % 2 == 0 ) {
            cout << i << endl;
        }
    }

    return 0;
}

