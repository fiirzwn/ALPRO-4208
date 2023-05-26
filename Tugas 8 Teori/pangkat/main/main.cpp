#include <iostream>

using namespace std;

int pangkat(int a, int b){
    if ( b == 0){
        return 1;
    } else {
        return a * pangkat(a, b -1);
    }
}


int main() {
    int a = 2;
    int b = 24;
    int hasil = pangkat(a, b);
    cout << "Hasil pengkat rekursif dari " << a << " Pangkat " << b << " = " << hasil << endl;
}
