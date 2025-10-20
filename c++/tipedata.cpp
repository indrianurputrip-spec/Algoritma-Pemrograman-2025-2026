#include <iostream> 
#include <conio.h>
#include <iostream>

int main()
{
    char a[30] = "---BELAJAR TIPE DATA---";
    short b;
    int c;
    long d;
    float e;
    double f;
    int g = 1;
    int h = 2;

    b = 1000;
    c = 100000;
    d = 1000000000;
    e = 3.12;
    f = 3.1234;

   count << A << endl;
   cout << "Tipe data short : " << b << endl;
   cout << "Tipe data int : " << c << endl;
   cout << "Tipe data long : " << d << endl; 
   cout << "Tipe data float : " << e << endl;
   cout << "Tipe data double : " << f << endl;
   cout << endl;

    cout << "berikut hasil boolen : " << std::endl;
    cout << (g > h); // akan menghasilkan nilai 0 (false), karena 1 tidak lebih besar dari 2
    cout << endl;
    cout << (g < h); // akan menghasilkan nilai 1 (true), karena 1 lebih kecil dari 2
    cout << endl;
    cout << (g == h); // akan menghasilkan nilai 0 (false), karena 1 tidak sama dengan 2
    cout << endl;
    cout << (g != h); // akan menghasilkan nilai 1 (true), karena 1 tidak sama dengan 2
    
}
