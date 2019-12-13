#include <iostream>

using namespace std;

int main()
{
    cout << "\nNama :   Annisa Rusydina Sabila";
    cout << "\nNIM  :   19051397004";
    cout << "\nPRODI:   D4 Manajemen informatika";

    int pilih;
    ulang:
    cout << "\n\n========== KALKULATOR SEDERHANA ==========";
    cout << "\n 1. Penjumlahan";
    cout << "\n 2. Pengurangan";
    cout << "\n 3. Perkalian";
    cout << "\n 4. Pembagian";
    cout << "\nMasukkan Inputan = 1 - 4 :";
    cin >> pilih;

    float bil1,bil2,total;
    float *a = &bil1 ;
    float *b = &bil2 ;
    float *c = &total ;

    switch(pilih)
    {
    case 1:
        cout << "\nMasukkan Bilangan pertama = ";
        cin >> bil1;
        cout << "\nMasukkan Bilanga kedua = ";
        cin >> bil2;

        total = bil1 + bil2;

        cout << *c;
        break;

    case 2:
        cout << "\nMasukkan Bilangan pertama = ";
        cin >> bil1;
        cout << "\nMasukkan Bilanga kedua = ";
        cin >> bil2;

        total = bil1 - bil2;

        cout << *c;
        break;

    case 3:
        cout << "\nMasukkan Bilangan pertama = ";
        cin >> bil1;
        cout << "\nMasukkan Bilanga kedua = ";
        cin >> bil2;

        total = bil1 * bil2;

        cout << *c;
        break;

    case 4:
        cout << "\nMasukkan Bilangan pertama = ";
        cin >> bil1;
        cout << "\nMasukkan Bilanga kedua = ";
        cin >> bil2;

        total = bil1 / bil2;

        cout << *c;
        break;

    default:
        cout << "\nInputan Anda Salah";
        goto ulang;
        break;
    }

}
