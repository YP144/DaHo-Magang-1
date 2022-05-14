# include "Vector.hpp"
# include "Vector.cpp"

int main()
    {
    Vector2 v = Vector2();          // Default constructor
    Vector2 u = Vector2();
    cout << "\nData :\nMasukan Vektor1(v1) <x1 y1> = ", cin >> v;
    Vector2 v1 = Vector2(v);        // Copy Constructor
    cout << "Masukan Vektor2(v2) <x2 y2> = ", cin >> u;
    Vector2 v2 = Vector2(u);
    cout << endl;

    // Penjumlahan Vektor
    Vector2 v3 = v1 + v2;
    cout << "Menggunakan Fungsi penjumlahan antara 2 vektor v1 dan v2\n" << v1 << " + " << v2 << " = " << v3 << endl;

    // Pengurangan Vektor
    Vector2 v4 = v1 - v2;
    cout << "\nMenggunakan Fungsi pengurangan antara 2 vektor v1 dan v2\n" << v1 << " - " << v2 << " = " << v4 << endl;

    cout << "\nMenggunakan Fungsi Perbandingan antara 2 vektor v1 dan v2" << endl;
    if (v1 < v2)
        {
        cout << "v1 lebih pendek dari v2\n" << endl;
        }
    else if (v1 > v2)
        {
        cout << "v1 lebih panjang v2\n" << endl;
        }
    else
        {
        cout << "v1 sama panjang v2\n"  << endl;
        }
    }