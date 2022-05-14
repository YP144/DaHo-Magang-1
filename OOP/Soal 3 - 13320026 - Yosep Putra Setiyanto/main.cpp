# include "WarungNasi.hpp"
# include "WarungNasgor.hpp"
# include "WarungSaltedEgg.hpp"
# include "WarungNasi.cpp"
# include "WarungNasgor.cpp"
# include "WarungSaltedEgg.cpp"
# include <iostream>
# include <conio.h>
using namespace std;

int main(){
    int pilihan,a,atelur,anasgor,asaltedegg,b,c,d,e,f,psn_telur,psn_nasgor,psn_saltedEgg;
    cout << "\nMasukan Uang Sekarang >>"; 
    cin >> a;
    cout << "Masukan persediaan nasi >>"; 
    cin >> b;
    cout << "Masukan persediaan telur >>"; 
    cin >> c;
    cout << "Masukan persediaan telur asin >>"; 
    cin >> d;
    cout << "Masukan persediaan ayam >>"; 
    cin >> e;
    cout << "Masukan persediaan kecap >>"; 
    cin >> f;

    WarungNasi nasi = WarungNasi(a,b,c);
    WarungNasgor nasgor = WarungNasgor(a,b,c,f);
    WarungSaltedEgg saltedEgg = WarungSaltedEgg(a,b,c,d,e);

    cout << endl;
    cout << "Resep Memasak Nasi Telur :\n1 Buah nasi\n2 Buah Telur\nPendapatan @10000/pesanan\n" << endl;
    cout << "Resep Memasak Nasi Goreng :\n1 Buah nasi\n1 Buah Telur\n1 buah kecap\nPendapatan @15000/pesanan\n" << endl;
    cout << "Resep Memasak Nasi Ayam Salted Egg :\n1 Buah nasi\n1 Buah Telur\n3 Buah Telur Asin\n1 Buah Ayam\nPendapatan @30000/pesanan\n" << endl;
    cout << "1.Nasi Telur\n2.Nasi Goreng\n3.Nasi Ayam Salted Egg\nIngin Memasak pesanan apa ? <1/2/3>" << endl;
    cin >> pilihan;

    if (pilihan == 1){   
        cout << "\nJumlah pesanan Nasi Telur yang ingin dimasak : ";
        cin >> psn_telur;
        if (nasi.masak(psn_telur)){
            cout << "Pesanan Nasi Telur Berhasil Dimasak." << endl;
            atelur = psn_telur*10000;
            a += atelur;
            cout << "Mendapatkan pendapatan " << atelur << "\nJumlah uang sekarang : " << a << "\n" << endl;
            }
        else{
            cout << "Bahan tidak cukup." << endl;
                }
            }

    if (pilihan == 2){   
        cout << "\nJumlah pesanan Nasi Goreng yang ingin dimasak : ";
        cin >> psn_nasgor;
        if (nasgor.masak(psn_nasgor)){
            cout << "Pesanan Nasi Goreng Berhasil Dimasak." << endl;
            anasgor = psn_nasgor*15000;
            a += anasgor;
            cout << "Mendapatkan pendapatan " << anasgor << "\nJumlah uang sekarang : " << a << "\n" << endl;
            }
        else{
            cout << "Bahan tidak cukup." << endl;
                }
            }

    if (pilihan == 3){   
        cout << "\nJumlah pesanan Nasi Ayam Salted Egg yang ingin dimasak : ";
        cin >> psn_saltedEgg;
        if (saltedEgg.masak(psn_saltedEgg)){
            cout << "Pesanan Nasi Ayam Salted Egg Berhasil Dimasak." << endl;
            asaltedegg = psn_saltedEgg*30000;
            a += asaltedegg;
            cout << "Mendapatkan pendapatan " << asaltedegg << "\nJumlah uang sekarang : " << a << "\n" << endl;
            }
        else{
            cout << "Bahan tidak cukup." << endl;
                }
            }
    }