# include "WarungNasgor.hpp"

WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap) :  WarungNasi(uang, nasi, telur){
    this->kecap = kecap;
}

bool WarungNasgor::masak(int pesanan){
        if ((getNasi() >= pesanan) and (getTelur() >= pesanan) and (this->kecap >= pesanan)){
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        this->kecap -= pesanan;
        int pendapatan = 15000 * pesanan;
        setUang(pendapatan + getUang());
        return true;
    }
    else{
        return false;
    }
}