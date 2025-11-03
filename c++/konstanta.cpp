#include <iostream>
using namespace std;

int mani(){
    const float PI = 3.14159;
    float r;
    cout << "masukan jari-jari: ";
    cin >>r;
    float luas =PI * r * r;
    cout << "Luas Lingkaran = " << luas;
    return 0;

}