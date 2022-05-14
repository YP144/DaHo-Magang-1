#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

    // inisiasi dan deklarasi

    int bentuk;
    float luas,keliling;

    // input

    cout << "\nProgram Luas dan Keliling Bangun Datar\n" << endl;
    cout << "Silahkan Pilih Bangun Datar" << endl;
    cout << "1. Lingkaran\n2. Persegi Panjang\n3. Segitiga Siku-Siku" << endl;
    cout << "Pilihan (1/2/3) >>";
    cin >> bentuk;

    // process

    if (bentuk == 1){
        float r;
        cout << "\nMasukan jari-jari lingkaran = ";
        cin >> r;

        luas = M_PI * pow(r,2);
        keliling = M_PI * 22 * r;
    }
    
    else if (bentuk == 2){
        float p,l;
        cout << "\nMasukan panjang sisi persegi panjang = ";
        cin >> p;
        cout << "Masukan lebar sisi persegi panjang = ";
        cin >> l;

        luas = p * l;
        keliling = 2 * (p + l);
    }

    else if (bentuk == 3){
        float a,t;
        cout << "\nMasukan panjang alas segitiga = ";
        cin >> a;
        cout << "Masukan tinggi segitiga = ";
        cin >> t;

        luas = a * t / 2;
        keliling = a + t + sqrt(pow(a,2) + pow(t,2));
    }

    // output

    cout << "\nLuas Bangun Datar =" << luas <<"\nKeliling Bangun Datar =" << keliling << endl;
}