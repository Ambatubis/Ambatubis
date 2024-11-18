#include <iostream>
#include <conio.h>
using namespace std;
const float PHI = 3.14;
int x, menu, angka_inisiasi, angka_iterasi;
char yesno;
float r;

void Awal();
void BilanganFibonacci();
void OperasiBilanganFibonacci(int angka_inisiasi, int angka_iterasi);
void OperasiLingkaran();
void luasLingkaran();
void kelilingLingkaran();
void Kembali();
void keluar();
void MenuUtama();
void MenuKedua();
float luasLingkaran(float r);
float kelilingLingkaran(float r);

main()
{
    Awal();
    switch (menu)
    {
    case 1:
        BilanganFibonacci();
        OperasiBilanganFibonacci(angka_inisiasi, angka_iterasi);
        Kembali();
        break;
    case 2:
        OperasiLingkaran();
        switch (menu)
        {
        case 1:
            luasLingkaran();
            Kembali();
            break;
        case 2:
            kelilingLingkaran();
            Kembali();
            break;
        default:
            MenuKedua();
            Kembali();
            break;
        }
    case 3:
        keluar();
        break;
    default:
        MenuUtama();
        Kembali();
        break;
    }
}

void Awal(){
    cout << "=== Program Fungsi ===\n\n";
    cout << "1. Operasi Bilangan Fibonacci\n";
    cout << "2. Operasi Lingkaran\n";
    cout << "3. Keluar\n";
    cout << "Pilih Opsi : "; cin >> menu;
}

void BilanganFibonacci(){
    system("cls");
    cout << " = Operasi Bilangan Fibonacci = \n";
    cout << "Pilih nilai inisiasi (mulai dari 1) : "; cin >> angka_inisiasi;
    cout << "Pilih jumlah iterasi : "; cin >> angka_iterasi;
}

void OperasiBilanganFibonacci(int angka_inisiasi, int angka_iterasi){
    int angka_selanjutnya, inisiasi;
    cout << angka_inisiasi;
    inisiasi = 0;
    for (x = 1; x <= angka_iterasi - 1; x++){
        angka_selanjutnya = (angka_inisiasi) + (inisiasi);
        inisiasi = angka_inisiasi;
        angka_inisiasi = angka_selanjutnya;
        cout << " " << angka_selanjutnya;
    }
}

void OperasiLingkaran(){
    system("cls");
    cout << "= Operasi Lingkaran =\n\n";
    cout << "1. Hitung Luas\n";
    cout << "2. Hitung Keliling\n";
    cout << "\nPilih Opsi : "; cin >> menu;
}

void luasLingkaran(){
    system("cls");
    cout << "\nPilih Opsi : 1";
    cout << "\nInput nilai jari-jari : "; cin >> r;
    cout << "\nNilai luas Lingkaran adalah :"<< luasLingkaran(r) << endl;
}

void kelilingLingkaran(){
    system("cls");
    cout << "\nPilih Opsi : 2";
    cout << "\nInput nilai jari-jari : "; cin>> r;
    cout << "\nNilai luas Keliling adalah :" << kelilingLingkaran(r) << endl;
}

float luasLingkaran(float r){
    float luas = PHI * r * r;
    return luas;
}

float kelilingLingkaran(float r){
    return PHI * 2 * r;
}

void MenuUtama(){
    system("cls");
    cout << "Tolong pilih angka 1, 2 dan 3 ";
}

void MenuKedua(){
    system("cls");
    cout << "Tolong pilih angka 1 dan 2 ";
}

void Kembali(){
    bool y = false;
    cout << "\nKembali ke menu utama? (y/t) ";cin >> yesno;
    if (yesno == 'y' || yesno == 'Y')
    {
        system("cls");
        main();
    }else if (yesno == 'n' || yesno == 'N'){
        keluar();
    }else{
        system("cls");
        cout << "Tolong pilih huruf (y/n)";
        keluar();
    }
}

void keluar(){
    system("cls");
    cout << "= Terima kasih dan sampai jumpa nanti lagi =";
}