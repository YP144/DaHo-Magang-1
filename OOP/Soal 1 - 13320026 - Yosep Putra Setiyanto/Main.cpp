#include "Time.hpp"
#include "Time.cpp"
# include <iostream>

using namespace std;

int main(){
    Time t0 = Time();                   // Default Constructor
    int h,m,s;
    cout << "\nUser Defined\nmasukan jam : ", cin >> h;
    cout << "masukan menit : ", cin >> m;
    cout << "masukan detik : ", cin >> s;
    Time t = Time(h, m, s);         // User Defined Constructor
    cout << "Tampilan jam yang pertama \nt1 -> ";
    t.printTime();

    // GETTER
    Time t1 = Time(1, 25, 47);      
    cout << "\n\nSet jam lainnya 1:25:47\nt2 -> ";
    t1.printTime();         
    cout << "\nFungsi getter untuk menampilkan rincian \nhour : " << t1.getHour() << endl;   
    cout << "minute : " << t1.getMinute() << endl;
    cout << "second : " << t1.getSecond() << endl;

    // SETTER
    cout << "\nTampilan Jam\nt0 -> ";
    t0.printTime();
    cout << endl;
    t0.setHour(06);
    t0.setMinute(50);
    t0.setSecond(01);
    cout << "Set waktu menjadi 6:50:1\nMenggunakan fungsi setter untuk mengubah t0\nt0 -> ";
    t0.printTime();
    cout << endl;
    cout << endl;

    // TAMBAH
    Time t2 = t.add(t1);
    cout << "Data:\nt1 -> ";
    t.printTime();
    cout << "\nt2 -> ";
    t1.printTime();
    cout << "\nMenggunakan fungsi tambah untuk menghitung hasil penjumlahan 2 waktu t1 dan t2" << endl;
    t.printTime();
    cout << "  +  ";
    t1.printTime();
    cout << "  =  ";
    t2.printTime();
    cout << endl;
    cout << endl; 

    // KURANG
    Time t3 = t.minus(t1);
    cout << "Data:\nt1 -> ";
    t.printTime();
    cout << "\nt2 -> ";
    t1.printTime();
    cout << "\nMenggunakan fungsi kurang untuk menghitung selisih 2 waktu t1 dan t2" << endl;
    t.printTime();
    cout << "  -  ";
    t1.printTime();
    cout << "  =  ";
    t3.printTime();
    cout << endl;
    t3 = t1.minus(t);
    t1.printTime();
    cout << "  -  ";
    t.printTime();
    cout << "  =  ";
    t3.printTime();
    cout << endl;
    cout << endl; 

    // CONVERT KE DETIK
    cout << "Menggunakan fungsi convert ke detik untuk mengubah waktu menjadi dalam detik" << endl;
    t2.printTime();
    cout << " = " << t2.convertToSecond() << " detik\n" << endl;
}