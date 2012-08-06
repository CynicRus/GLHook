#include "Vector3D.hpp"

Vector3D::~Vector3D() {}

Vector3D::Vector3D() : X(0), Y(0), Z(0) {}

Vector3D::Vector3D(double x, double y, double z) : X(x), Y(y), Z(z) {}

Vector3D& Vector3D::operator ()(double x, double y, double z)
{
    if (X != x && Y != y && Z != z)
    {
        X = x;
        Y = y;
        Z = z;
    }
    return *this;
}

bool Vector3D::operator == (const Vector3D& V) const
{
    return ((X == V.X) && (Y == V.Y) && (Z == V.Z));
}

bool Vector3D::operator != (const Vector3D& V) const
{
    return ((X != V.X) && (Y != V.Y) && (Z != V.Z));
}

Vector3D& Vector3D::operator = (const Vector3D& V)
{
    if (this != &V)
    {
        X = V.X;
        Y = V.Y;
        Z = V.Z;
    }
    return *this;
}

Vector3D& Vector3D::operator += (const int& W)
{
    if (W > 0)
    {
        X += W;
        Y += W;
        Z += W;
    }
    return *this;
}

Vector3D& Vector3D::operator += (const Vector3D& V)
{
    X += V.X; Y += V.Y; Z += V.Z;
    return *this;
}

Vector3D& Vector3D::operator -= (const int& W)
{
    X -= W; Y -= W; Z -= W;
    return *this;
}

Vector3D& Vector3D::operator -= (const Vector3D& V)
{
    X -= V.X; Y -= V.Y; Z -= V.Z;
    return *this;
}

Vector3D& Vector3D::operator *= (const int& W)
{
    X *= W; Y *= W; Z *= W;
    return *this;
}

double Vector3D::operator *= (const Vector3D& V)
{
    return ((X * V.X) + (Y * V.Y) + (Z * V.Z));
}

Vector3D& Vector3D::operator /= (const int& W)
{
    if (W != 0)
    {
        X /= W;
        Y /= W;
        Z /= W;
    }
    return *this;
}

Vector3D& Vector3D::operator ^= (const Vector3D& V)
{
    X = (Y * V.Z) - (Z * V.Y);
    Y = (Z * V.X) - (X * V.Z);
    Z = (X * V.Y) - (Y * V.X);
    return *this;
}

double Vector3D::Dot(const Vector3D& V)
{
    return Vector3D(*this) *= V;
}

Vector3D& Vector3D::Cross(const Vector3D& V)
{
    return Vector3D(*this) ^= V;
}

double Vector3D::Magnitude() const
{
    return sqrtf((X * X) + (Y * Y) + (Z * Z));
}

double Vector3D::AngleRad(const Vector3D& V)
{
    double I = Magnitude();
    double J = V.Magnitude();
    return (I == 0.0 || J == 0.0) ? 0.0 : acosf(Dot(V) / (I * J));
}

double Vector3D::AngleDeg(const Vector3D& V)
{
    return (AngleRad(V) * (180 / 3.14159265)); //PI = 4 * atan(1);
}

Vector3D& Vector3D::Normalize()
{
    size_t Size = this->Magnitude();
    if (Size != 0)
    {
        X /= Size;
        Y /= Size;
        Z /= Size;
    }
    return *this;
}

Vector3D& Vector3D::operator + (const int& W)
{
    return Vector3D(*this) += W;
}

Vector3D& Vector3D::operator + (const Vector3D& V)
{
    return Vector3D(*this) += V;
}

Vector3D& Vector3D::operator - (const int& W)
{
    return Vector3D(*this) -= W;
}

Vector3D& Vector3D::operator - (const Vector3D& V)
{
    return Vector3D(*this) -= V;
}

Vector3D& Vector3D::operator * (const int& W)
{
    return Vector3D(*this) *= W;
}

double Vector3D::operator * (const Vector3D& V)
{
    return (*this *= V);
}

Vector3D& Vector3D::operator ^ (const Vector3D& V)
{
    return Vector3D(*this) ^= V;
}

Vector3D& Vector3D::operator / (const int& W)
{
    return Vector3D(*this) /= W;
}
