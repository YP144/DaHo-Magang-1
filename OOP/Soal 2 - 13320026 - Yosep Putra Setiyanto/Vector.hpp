#ifndef _VECTOR2_HPP_
#define _VECTOR2_HPP_

#include <iostream>
using namespace std;


class Vector2 {
    private:
        int* elements;

    public:
    /* Default Constructor */
    /* Inisialisasi vektor <0, 0> */
    Vector2();

    /* Copy Constructor */
    Vector2(const Vector2& other);

    /* Destructor */
    ~Vector2();

    /* Overloading Operator Subscript */
    /* mengembalikan element ke-idx */
    int& operator[](int idx);

    /* Overloading Operator Tambah */
    /* Menambah 2 buah Vector */
    Vector2 operator+(const Vector2& other);

    /* Overloading Operator Kurang */
    /* Mengurangi 2 buah Vector */
    Vector2 operator-(const Vector2& other);

    /* Overloading Operator less than */
    /* Mengembalikan true jika element pertama vektor kiri bernilai lebih kecil
    Jika element pertama sama, periksa element kedua, jika lebih kecil, kembalikan true */
    bool operator<(const Vector2& other);

    /* Overloading Operator more than */
    /* Mengembalikan true jika element pertama vektor kiri bernilai lebih besar
    Jika element pertama sama, periksa element kedua, jika lebih besar, kembalikan true */
    bool operator>(const Vector2& other);

    /* Overloading Operator << output */
    /* print vektor dalam bentuk <element1,element2> */
    friend std::ostream& operator<<(ostream& os, Vector2 vector);

    /* Overloading Operator >> input */
    /* input vektor yang menerima 2 element */
    friend std::istream& operator>>(istream& is, Vector2& vector);
};

#endif