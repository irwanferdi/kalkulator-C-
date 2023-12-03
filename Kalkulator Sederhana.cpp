#include<iostream>
using namespace std;

int main() {
    char operasi;
    float angka1, angka2, hasil;
    bool lanjut = true;

    while (lanjut) {
        cout << "Selamat datang di Kalkulator Sederhana C++" << endl;
        
		// Memasukkan dua angka
        cout << "Masukkan angka pertama: ";
        cin >> angka1;

        cout << "Masukkan angka kedua: ";
        cin >> angka2;

        // Memasukkan operator
        cout << "Masukkan operator (+, -, *, /): ";
        cin >> operasi;

        // Melakukan operasi berdasarkan operator
        switch (operasi) {
            case '+':
                hasil = angka1 + angka2;
                break;
            case '-':
                hasil = angka1 - angka2;
                break;
            case '*':
                hasil = angka1 * angka2;
                break;
            case '/':
                if(angka2 != 0)
                    hasil = angka1 / angka2;
                else {
                    cout << "Error! Pembagian dengan nol tidak diizinkan." << endl;
                    return 1;  // Keluar dari program dengan kode kesalahan
                }
                break;
            default:
                cout << "Error! Operator tidak valid." << endl;
                return 1;  // Keluar dari program dengan kode kesalahan
        }

        // Menampilkan hasil
        cout << "Hasil: " << angka1 << " " << operasi << " " << angka2 << " = " << hasil << endl;

        // Meminta user apakah ingin mengulangi kalkulasi
        char pilihan;
        cout << "Apakah Anda ingin melakukan kalkulasi lagi? (y/n): ";
        cin >> pilihan;

        if (pilihan != 'y' && pilihan != 'Y') {
            lanjut = false;
            cout << "Terima kasih telah menggunakan Kalkulator Sederhana C++." << endl;
        }
    }

    return 0;
}

