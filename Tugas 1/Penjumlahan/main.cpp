#include <iostream>

using namespace std;

int tambah(int a, int b){
    int hasil;
    hasil = a + b;
    return hasil;
}

int main()
{
    int a,b;
    cout << "Masukkan nilai A = ";
    cin >> a;
    cout << "Masukkan nilai B = ";
    cin >> b;
    cout << "Hasil = " << tambah(a,b) << endl;
    return 0;
}
