#include <iostream>
using namespace std;

int main()
{
    char pilihan;
    float nominal;

    cin >> pilihan;

    if (pilihan == 'a')
    {
    cout << "masukkan nominal";
    cin >> nominal;

    float totnominal = nominal / 15000;
    cout << totnominal;
    }
    else if (pilihan == 'b')
    {
    cout << "masukkan nominal";
    cin >> nominal;

    float totnominal = nominal * 15000;
    cout << totnominal;    
    }
    return 0;
}