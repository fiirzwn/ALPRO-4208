#include <iostream>

using namespace std;

int main()
{
    int all;//jumlah array
    int num[] = {7, 12, 5, 10, 25, 85, 96};
    all = sizeof(num) / sizeof(*num);

    for(int z = 0; z < all; z++){
        cout << num[z] << endl;
    }
}
