#include <iostream>

using namespace std;
void binary(int desimal);

void binary(int desimal)
{ 
     int sisa;
     int hasil;
     int *sa = &sisa;
     int *sil =&hasil;
     
     if ( desimal <=1)
     {
        cout<<desimal;
        return;
     }
     sisa = desimal %2;
     hasil = desimal / 2;
     binary(hasil);
     cout<< *sa;
}

int main()
{
    int a;
    int *aku = &a;
    cout << " Masukkan Bilangan yang akan dikonversi : ";
    cin>>a;
    cout << *aku << " dalam biner adalah " ; 
    binary(a);
    cout<<endl;
     
    system(" pause");
    return 0;

}

