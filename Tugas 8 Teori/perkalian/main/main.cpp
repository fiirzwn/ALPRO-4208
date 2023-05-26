#include <iostream>

using namespace std;

int perkalian(int j, int i){
    if (i == 0){
        return 0;
    }else if(i > 0){
        return j + perkalian(j, i - 1);
    }else{
        return -perkalian(j, -i);
    }
}

int main() {
    int bilanganpertama = 9;
    int bilangankedua = 10;
    int hasil = perkalian(bilanganpertama, bilangankedua);
    cout << "Hasil pengurangan rekursif dari " << bilanganpertama << " * " << bilangankedua << " = " << hasil << endl;

    return 0;
}
