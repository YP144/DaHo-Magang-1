#ifndef TIME_HPP
#define TIME_HPP

/*
    Lengkapi File Header di bawah ini. Buat Juga sebuah file main.cpp untuk melakukan pengujian ke tiap method dibawah.
*/ 

class Time {
    private:
        int h;
        int m;
        int s;

    public:
        Time();                     // Default Constructor h=0;m=0;s=0 
        Time(int h, int m, int s);  // User Defined Constructor
        Time(const Time& other);    // Copy Constructor 
        ~Time();                    // Destruktor

        int getHour();              // Mengembalikan nilai atribut h
        int getMinute();
        int getSecond();

        void setHour(int HOUR);             // assign nilai atribut h dengan HOUR
        void setMinute(int MINUTE);
        void setSecond(int SECOND);

        int convertToSecond();              // Konversi waktu ke detik
        
        // Return penjumlahan dua objek jam, yaitu *this* dan t.
        // Apabila hasil penjumlahan melebihi 23:59:59, maka Anda harus mengonversinya seperti tampilan jam digital asli.
        // Contoh : 24:00:00 dituliskan 00:00:00, 25:00:00 dituliskan 01:00:00, dst.
        Time add(Time t);

        // Return selisih antara dua objek jam, yaitu *this* dan t.
        // Perhitungan selisih hanya dapat dilakukan jika objek ruas kiri lebih akhir dari atau sama dengan objek ruas kanan.
        // Jika objek ruas kiri lebih awal, maka kembalikan nilai objek ruas kiri.
        // Contoh: 00:00:01 - 00:00:02 = 00:00:01
        Time minus(Time t);
        void printTime();                   // Menuliskan jam dalam format hh:mm:ss diakhiri dengan newline. Perhatikan bahwa setiap parameter harus dituliskan 2 digit.
};

#endif