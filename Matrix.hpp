#ifndef MATRIX_HPP_INCLUDED
#define MATRIX_HPP_INCLUDED

#include <windows.h>
#include <iostream>
#include <vector>
#include <sstream>

class Matrix
{
    private:
        friend class Dimensional;
        std::vector<std::vector<double>> Data;
        double& DimensionalIndex(size_t I, size_t J) {return Data[I][J];}

        class Dimensional
        {
            private:
                Matrix& Parent;
                size_t Index;

            public:
                Dimensional(Matrix& M, size_t I) : Parent(M), Index(I) {}
                double& operator [](size_t J) const {return Parent.DimensionalIndex(Index, J);}
        };

    public:
        Matrix(uint32_t Rows, uint32_t Columns);
        ~Matrix();

        Matrix& operator()(uint32_t Rows, uint32_t Columns);

        Dimensional operator [](size_t I); //const Dimensional operator [](size_t I) const;

        bool operator == (const Matrix& M) const;

        bool operator != (const Matrix& M) const;

        Matrix& operator = (const Matrix& M);

        Matrix& operator += (const Matrix& M);

        Matrix& operator -= (const Matrix& M);

        Matrix& operator *= (const int& I);

        Matrix& operator *= (const Matrix& M);

        Matrix& operator + (const Matrix& M);

        Matrix& operator - (const Matrix& M);

        Matrix& operator * (const int& I);

        Matrix& operator * (const Matrix& M);
};

#endif // MATRIX_HPP_INCLUDED
