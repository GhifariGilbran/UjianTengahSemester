#include <iostream>
using namespace std;
int main() {
    float beratBadan, tinggiBadan, IMT;


    cout << "Masukkan berat badan (kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggiBadan;

    IMT = beratBadan / (tinggiBadan * tinggiBadan);

    cout << "Indeks Massa Tubuh (IMT) Anda: " << IMT << endl;

    if (IMT <= 18.4) {
        cout << "Kategori: Berat Badan Kurang" << endl;
    }
    else if (IMT >= 18.5 && IMT <= 24.9) {
        cout << "Kategori: Berat Badan Ideal" << endl;
    }
    else if (IMT >= 25 && IMT <= 29.9) {
        cout << "Kategori: Berat Badan Lebih" << endl;
    }
    else if (IMT >= 30 && IMT <= 39.9) {
        cout << "Kategori: Gemuk" << endl;
    }
    else if (IMT >= 40) {
        cout << "Kategori: Sangat Gemuk" << endl;
    }

    return 0;
}
