#include <iostream>
#include <string>
using namespace std;

struct SampelAir {
    int warna;      // 0–3
    int bau;        // 0–2
    int partikel;   // 0–2
};

int inputValid(const string& pesan, int minVal, int maxVal) {
    int nilai;
    do {
        cout << pesan;
        cin >> nilai;

        if (nilai < minVal || nilai > maxVal) {
            cout << "   ⚠ Input tidak valid! Masukkan angka antara "
                 << minVal << " dan " << maxVal << ".\n";
        }
    } while (nilai < minVal || nilai > maxVal);

    return nilai;
}
