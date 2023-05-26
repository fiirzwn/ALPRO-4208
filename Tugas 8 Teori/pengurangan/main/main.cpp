#include <iostream>

using namespace std;

int pengurangan(int j, int i){
    if (i == 0) {
        return j;
    } else {
        return pengurangan(j - 1, i - 1);
    }
}

int main() {
    int bilangan1 = 96;
    int bilangan2 = 45;
    int hasil = pengurangan(bilangan1, bilangan2);
    cout << "Hasil pengurangan rekursif dari " << bilangan1 << " - " << bilangan2 << " = " << hasil << endl;
    return 0;
}
