#include <iostream>
#include <iomanip>

using namespace std;

struct mobil
{
    string merk;
    string type;
    int tahun_pembuatan;
    float harga;
};

int main(){
    mobil *mobil_ptr = nullptr;
    mobil mobil_x;
    mobil_ptr = &mobil_x;

    (*mobil_ptr).merk = "Nissan";
    (*mobil_ptr).type = "JDM Car";
    (*mobil_ptr).tahun_pembuatan = 2021;
    (*mobil_ptr).harga = 2000000000;

    cout << "Merek : " << (*mobil_ptr).merk << endl;
    cout << "Type  : " << (*mobil_ptr).type << endl;
    cout << "Tahun : " << (*mobil_ptr).tahun_pembuatan << endl;
    cout << fixed << setprecision(0) << "Harga : " << (*mobil_ptr).harga << endl;

    return 0;
}
