#include
main()
{
    char a[30] = "---BELAJAR TIPE DATA---";
    short b;
    int c;
    long d;
    float e;
    double f;
    int g = 1;
    int h = 2;
    
    b = 10000;
    c = 1000000;
    d = 1000000000;
    e = 3.12;
    f = 3.12345;
    
    cout << a << endl;
    cout << "tipe data short: " << b << endl;
    cout << "tipe data int: " << c << endl;
    cout << "tipe data long: " << d << endl;
    cout << "tipe data float: " << e << endl;
    cout << "tipe data double: " << f << endl;
    cout << endl;

    cout << "berikut hasil boolean : " << endl;
    cout << (g > h); // akan menghasilkan nilai 0 (false), karena 1 lebih kecil dari 2
    cout << endl;
    cout << (g < h); // akan menghasilkan nilai 1 (true), karena 1 lebih kecil dari 2 
    cout << endl;
    cout << (g == h); // akan menghasilkan nilai 0 (false), karena 1 tidak sama dengan 2
    cout << endl;
    cout << (g != h); // akan menghasilkan nilai 1 (true), karena 1 tidak sama dengan 2
    }