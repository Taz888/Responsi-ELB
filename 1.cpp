#include <iostream>
using namespace std;

int main()
{
    string warna[7] = {"Merah", "Hitam", "Biru", "Cokelat", "Kuning", "Putih"};
    int value[7] = {2, 0, 6, 1, 4, 9};
    string resistorcolor[4];
    int result[4];

    // Input
    for (int i = 0; i < 4; i++)
    {
        cout << "Masukkan warna resistor ke-" << i+1 << ": ";
        cin >> resistorcolor[i];
    }

    // Processing
    cout << "\nHasil nilai resistor:\n";
    for (int i = 0; i < 4; i++)
    {
        if (resistorcolor[i] == warna[0])
        {
            result[i] = value[0];
        }
        else if (resistorcolor[i] == warna[1])
        {
            result[i] = value[1];
        }
        else if (resistorcolor[i] == warna[2])
        {
            result[i] = value[2];
        }
        else if (resistorcolor[i] == warna[3])
        {
            result[i] = value[3];
        }
        else if (resistorcolor[i] == warna[4])
        {
            result[i] = value[4];
        }
        else if (resistorcolor[i] == warna[5])
        {
            result[i] = value[5];
        }
        else
        {
            cout << "invalid!";
        }
    }

    // Output
    int resistance;

    resistance = ((result[0] * 1000) + (result[1] * 100) + (result[2] * 10) + result[3]);
    
        cout << "Nilai: " << resistance << endl;

    return 0;
}
