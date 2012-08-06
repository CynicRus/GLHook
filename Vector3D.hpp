#ifndef VECTOR3D_HPP_INCLUDED
#define VECTOR3D_HPP_INCLUDED

#include <iostream>
#include <cmath>

class Vector3D
{
    public:
        double X, Y, Z;

    public:
        Vector3D();
        Vector3D(double x, double y, double z);
        ~Vector3D();

        Vector3D& operator ()(double x, double y, double z);

        bool operator == (const Vector3D& V) const;

        bool operator != (const Vector3D& V) const;

        Vector3D& operator = (const Vector3D& V);

        Vector3D& operator += (const int& W);

        Vector3D& operator += (const Vector3D& V);

        Vector3D& operator -= (const int& W);

        Vector3D& operator -= (const Vector3D& V);

        Vector3D& operator *= (const int& W);

        double operator *= (const Vector3D& V);

        Vector3D& operator /= (const int& W);

        Vector3D& operator ^= (const Vector3D& V);

        double Dot(const Vector3D& V);

        Vector3D& Cross(const Vector3D& V);

        double Magnitude() const;

        double AngleRad(const Vector3D& V);

        double AngleDeg(const Vector3D& V);

        Vector3D& Normalize();

        Vector3D& operator + (const int& W);

        Vector3D& operator + (const Vector3D& V);

        Vector3D& operator - (const int& W);

        Vector3D& operator - (const Vector3D& V);

        Vector3D& operator * (const int& W);

        double operator * (const Vector3D& V);

        Vector3D& operator ^ (const Vector3D& V);

        Vector3D& operator / (const int& W);
};

#endif // VECTOR3D_HPP_INCLUDED
