#ifndef VECTOR_H
#define VECTOR_H

class Vector {
public:
      const static unsigned long n = 3;

    Vector();

    explicit Vector(double v);

    Vector(const Vector &v);

    Vector &operator=(const Vector &in);

    double operator[](unsigned long i) const;

    double &operator[](unsigned long i);

    Vector &operator+=(const Vector &in);

    Vector &operator-=(const Vector &in);

    Vector &operator*=(double v);

    Vector &operator/=(double v);

    friend bool operator==(const Vector &in1, const Vector &in2);

    friend Vector operator+(const Vector &in1, const Vector &in2);

    friend Vector operator-(const Vector &in1, const Vector &in2);

    friend Vector operator*(const Vector &in, double v);

    friend Vector operator*(double v, const Vector &in);

    friend Vector operator/(const Vector &in1, double v);

    friend double operator^(const Vector &in1, const Vector &in2);

    Vector operator-() const;

private:
    double coords_[n];
}; // class Vector

bool operator!=(const Vector &in1, const Vector &in2);

#endif // VECTOR_H

