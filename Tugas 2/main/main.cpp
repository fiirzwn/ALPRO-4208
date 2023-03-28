#include <iostream>

using namespace std;

//isEven
bool isEven(int b){
    if (b % 2 == 0){
        return true;
    }else{
        return false;
    }
}

//isFactor
bool isFactor(int a, int b){
    if (b % a == 0 ) {
        return true;
    }else {
        return false;
    }
}

//isFound
bool isFound(int array[], int d, int e) {
    for (int i = 0; i < d; i++) {
        if (array[i] == e){
            return true;
        }
    }
    return false;
}

//isOdd
bool isOdd(int f){
    return f % 2 == 1;
}

//maxArray
int maxArray(int array[], int g){
    int max = array[0];
    for (int i = 1; i < g; i++){
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

//maxN
int maxN (int array[], int h){
    int temp = array[0];
    for (int i = 1; i < h; i++){
        if (array[i] > temp) temp = array[i];
    }
    return temp;
}

//minArray
int minArray(int array[], int j){
    int min = array[0];
    for (int i = 1; i < j; i++){
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

//minN
int minN (int array[], int k){
    int temp = array[0];
    for (int i = 1; i < k; i++){
        if (array[i] < temp) temp = array[i];
    }
    return temp;
}

//sumEven
int sumEven(int array[], int l){
    int sum = 0;
    for (int i = 0; i < l; i++){
        if (array[i] % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}

//sumOdd
int sumOdd(int array[], int m){
    int sum = 0;
    for (int i = 0; i < m; i++) {
        if (array[i] % 2 != 0) {
            sum += array[i];
        }
    }
    return sum;
}

//swapN
void swapN (int* n, int* o){
    int temp = *n;
    *n = *o;
    *n = temp;
}

int main(){
    //isEven
    int c;
    cout << "Masukan angka: ";
    cin >> c;

    if (isEven(c)){
        cout << c << " bilangan genap " << endl;
    }else{
        cout << c << " bilangan ganjil " << endl;
    }

    //isFactor
    int a, b;
    cout << "masukan a : ";
    cin >> a;
    cout << "masukan b : ";
    cin >> b;

    if (isFactor(a, b)){
        cout << a << " ini faktor dari " << b << "." << endl;
    }else{
        cout << a << " ini bukan faktor dari " << b << "." << endl;
    }

    //isFound
    int array[] = {2, 4, 6, 8, 10};
    int d = sizeof(array) / sizeof(array[0]);
    int e = 4;
    cout << isFound(array, d, e) ? "ada" : "tidak ada)";

    //isOdd
    int f;
    cout << "bilangan : ";
    cin >> f;
    cout << "bilangan " << f << " merupakan bilangan " << (isOdd(a) ? "ganjil" : "genap") << endl;

    //maxArray
    int g = sizeof(array) / sizeof(array[0]);
    int max = maxArray(array, g);
    cout << " Nilai maksimum dalam array adalah : " << max << endl;

    //maxN
    int h;
    cout << "banyak elemen : ";
    cin >> h;
   // int array[h]; (gunakan ini, hapus integer array diatas)
    for (int i = 0; i < h; i++){
        cout << "elemen ke " << i << ": ";
        cin >> array[i];
    }
    cout << "elemen terbesar " << maxN(array, h) << endl;

    //minArray
    int j = sizeof(array) / sizeof(array[0]);
    int min = maxArray(array, j);
    cout << " Nilai manimum dalam array adalah : " << min << endl;

    //minN
    int k;
    cout << "banyak elemen : ";
    cin >> k;
    //int array[k];
    for (int i = 0; i < k; i++){
        cout << "elemen ke " << i << ": ";
        cin >> array[i];
    }
    cout << "elemen terkecil " << minN(array, k) << endl;

    //sumEven
    //int array[] = {1, 3, 5, 7, 9, 10, 11, 12, 15, 20};
    int l = sizeof(array) / sizeof(array[0]);
    int sum = sumEven(array, l);
    cout << " Jumlah bilangan genap dalam array : " << sum << endl;

    //sumOdd
    //int array[] = {1, 3, 5, 7, 9, 10, 11, 12, 15, 20};
    int m = sizeof(array) / sizeof(array[0]);
    int sum = sumOdd(array, m);
    cout << "Jumlah bilangan ganjil dalam array : " << sum << endl;

    //swapN
    int x = 10;
    int y = 20;
    cout << "sebelup swap: x = " << x << ", y = " << y << endl;
    swapN(&x, &y);
    cout << "sesudah swap: x = " << x << ", y = " << y << endl;

    return 0;
}
