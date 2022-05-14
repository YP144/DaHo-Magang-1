# include "vector.hpp"


/* Default constructor */
Vector2::Vector2(){
    this->elements = new int[2];
    this->elements[0] = 0;
    this->elements[1] = 0;
}

/* Copy Constructor */
Vector2::Vector2(const Vector2& other){
    this->elements = new int[2];
    this->elements[0] = other.elements[0];
    this->elements[1] = other.elements[1];
}

/* Destructor */
Vector2::~Vector2(){
    delete[] this->elements;
}

/* Overloading Operator Subscript */
int& Vector2::operator[](int idx){
    return this->elements[idx];
}

/* Overloading Operator Tambah */
Vector2 Vector2::operator+(const Vector2& other){
    Vector2 *sum = new Vector2();
    sum->elements[0] = this->elements[0] + other.elements[0];
    sum->elements[1] = this->elements[1] + other.elements[1];
    return *sum;
}
/* Overloading Operator Kurang */
Vector2 Vector2::operator-(const Vector2& other){
    Vector2 *min = new Vector2();
    min->elements[0] = this->elements[0] - other.elements[0];
    min->elements[1] = this->elements[1] - other.elements[1];
    return *min;
}

/* Overloading Operator less than */
bool Vector2::operator<(const Vector2& other){
    if (this->elements[0] == other.elements[0]){
        return this->elements[1] < other.elements[1];
    }
    else{
        return this->elements[0] < other.elements[0];
    }
}

/* Overloading Operator more than */
bool Vector2::operator>(const Vector2& other){
    if (this->elements[0] == other.elements[0]){
        return this->elements[1] > other.elements[1];
    }
    else{
        return this->elements[0] > other.elements[0];
    }
}

/* Overloading Operator << output */
std::ostream& operator<<(ostream& os, Vector2 vector){
    os << "<" << vector.elements[0] << "," << vector.elements[1] << ">";
    return os;
}

/* Overloading Operator >> input */
std::istream& operator>>(istream& is, Vector2& vector){
    is >> vector.elements[0] >> vector.elements[1];
    return is;
}