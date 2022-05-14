# include "WarungNasi.hpp"

WarungNasi::WarungNasi(int uang, int nasi, int telur){
    this->uang = uang;
    this->nasi = nasi;
    this->telur = telur;
}

// Getter
int WarungNasi::getUang() const{
    return this->uang;
}
int WarungNasi::getTelur() const{
    return this->telur;
}
int WarungNasi::getNasi() const{
    return this->nasi;
}

// Setter
void WarungNasi::setUang(int _uang){
    this->uang = _uang;
}
void WarungNasi::setTelur(int _telur){
    this->telur = _telur;
}
void WarungNasi::setNasi(int _nasi){
    this->nasi = _nasi;
}

bool WarungNasi::masak(int pesanan){
    if ((getNasi() >= pesanan) and (getTelur() >= 2 * pesanan)){
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - 2 * pesanan);
        int pendapatan = 10000 * pesanan;
        setUang(pendapatan + getUang());
        return true;
    }
    else{
        return false;
    }
}
