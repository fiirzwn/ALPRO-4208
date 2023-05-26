#include <iostream>

using namespace std;

int pembagian(int c, int o) {
    if (o == 0){
        cout << "Error: pembagian oleh angka 0 tidak terdefinisikan" << endl;
        return 0;
    } else if (c < o){
        return 0;
    } else {
        return 1 + pembagian(c - o, o);
    }
}


int main() {
    int bil1 = 488;
    int bil2 = 2;
    int hasil = pembagian(bil1, bil2);
    cout << "hasil pembagian rekursif dari " << bil1 << " / " << bil2 << " = " << hasil << endl;

    return 0;
}
