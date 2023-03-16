#include <iostream>

using namespace std;

int rata(int num[], int x){
    int sum = 0;
    for (int i = 0; i < x; i++){
        sum += num[i];
    }
    return sum / x;
}

int main()
{
    int himp[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Rata-rata dari himpunan : " << rata(himp, 7) << endl;
}
