# include "WarungSaltedEgg.hpp"

WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam) : WarungNasi(uang, nasi, telur){
    this->telurAsin = telurAsin;
    this->ayam = ayam;
}

bool WarungSaltedEgg::masak(int pesanan){
    if ((getNasi() >= pesanan) and (getTelur() >= pesanan) and (this->ayam >= pesanan) and (this->telurAsin >= 3*pesanan) ){
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        this->ayam -= pesanan;
        this->telurAsin -= 3*pesanan;
        int pendapatan = 30000 * pesanan;
        setUang(pendapatan + getUang());
        return true;
    }
    else{
        return false;
    }
}
