#include <iostream>

using namespace std;

int kurang(int a, int b){
    int hasil;
    hasil = a - b;
    return hasil;
}

int main()
{
    int a,b;
    cout << "Masukkan nilai A = ";
    cin >> a;
    cout << "Masukkan nilai B = ";
    cin >> b;
    cout << "Hasil = " << kurang(a,b) << endl;
    return 0;
}
