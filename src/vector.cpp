#include "vector.h"

Vector::Vector() {
    for (unsigned int i = 0; i < n; ++i) {
        coords_[i] = 0;
    }
}

Vector::Vector(double v) {
    for (unsigned int i = 0; i < n; ++i) {
        coords_[i] = v;
    }
}

Vector::Vector(const Vector &in) {
    for (unsigned int i = 0; i < n; ++i) {
        coords_[i] = in.coords_[i];
    }
}

Vector &Vector::operator=(const Vector &in) {
    for (unsigned int i = 0; i < n; ++i) {
        coords_[i] = in.coords_[i];
    }
    return *this;
}

double Vector::operator[](unsigned long i) const {
    return coords_[i];
}

double &Vector::operator[](unsigned long i) {
    return coords_[i];
}

Vector &Vector::operator+=(const Vector &in) {
    for (unsigned int i = 0; i < n; ++i) {
        coords_[i] += in.coords_[i];
    }
    return *this;
}


Vector &Vector::operator-=(const Vector &in) {
    for (unsigned int i = 0; i < n; ++i) {
        coords_[i] -= in.coords_[i];
    }
    return *this;
}

Vector &Vector::operator*=(double v) {
    for (unsigned int i = 0; i < n; ++i) {
        coords_[i] *= v;
    }
    return *this;
}

Vector &Vector::operator/=(double v) {
    for (unsigned int i = 0; i < n; ++i) {
        coords_[i] /= v;
    }
    return *this;
}

bool operator==(const Vector &in1, const Vector &in2) {
    for (unsigned int i = 0; i < Vector::n; i++) {
        if (in1.coords_[i] != in2.coords_[i]) {
            return false; }
    }
    return true;
}

Vector operator+(const Vector &in1, const Vector &in2) {
    return Vector(in1) += in2;
}

Vector operator-(const Vector &in1, const Vector &in2) {
    return Vector(in1)-= in2;

}

Vector operator*(const Vector &in, double v) {
    return  Vector(in) *= v;
  
}
Vector operator*(double v, const Vector &in){
    return Vector(in) *= v;
  
}

Vector operator/(const Vector &in1, double v) {
    return Vector(in1) /= v;
    
}

double operator^(const Vector &in1, const Vector &in2) {
    double res = 0;
    for (unsigned int i = 0; i < Vector::n; ++i) {
        res += in1.coords_[i] * in2.coords_[i];
    }
    return res;
}

Vector Vector::operator-() const {
    return Vector(*this) *= -1;
}

bool operator!=(const Vector &in1, const Vector &in2) {
    return !(in1 == in2);

}
