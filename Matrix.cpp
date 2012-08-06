#include "Matrix.hpp"

Matrix::~Matrix(){}

Matrix::Matrix(uint32_t Rows, uint32_t Columns) : Data(0)
{
    Data.resize(Rows);
    for (std::vector<std::vector<double>>::iterator it = Data.begin(); it != Data.end(); ++it)
        it->resize(Columns);
}

Matrix& Matrix::operator ()(uint32_t Rows, uint32_t Columns)
{
    Data.resize(Rows);
    for (std::vector<std::vector<double>>::iterator it = Data.begin(); it != Data.end(); ++it)
        it->resize(Columns);
    return *this;
}

Matrix::Dimensional Matrix::operator [](size_t I)
{
    return Dimensional(*this, I);
}

bool Matrix::operator == (const Matrix& M) const
{
    if (M.Data.size() == Data.size())
    {
        for (size_t I = 0; I < Data.size(); I++)
        {
            for (size_t J = 0; J < Data[I].size(); J++)
            {
                if (Data[I][J] != M.Data[I][J])
                    return false;
            }
        }
    }
    return true;
}

bool Matrix::operator != (const Matrix& M) const
{
    return !(*this == M);
}

Matrix& Matrix::operator = (const Matrix& M)
{
    Data = M.Data;
    return *this;
}

Matrix& Matrix::operator += (const Matrix& M)
{
    if (Data.size() == M.Data.size())
    {
        for (size_t I = 0; I < Data.size(); I++)
        {
            for (size_t J = 0; J < Data[I].size(); J++)
            {
                Data[I][J] += M.Data[I][J];
            }
        }
    }
    return *this;
}

Matrix& Matrix::operator -= (const Matrix& M)
{
    if (Data.size() == M.Data.size())
    {
        for (size_t I = 0; I < Data.size(); I++)
        {
            for (size_t J = 0; J < Data[I].size(); J++)
            {
                Data[I][J] -= M.Data[I][J];
            }
        }
    }
    return *this;
}

Matrix& Matrix::operator *= (const int& I)
{
    for (std::vector<std::vector<double>>::iterator Rows = Data.begin(); Rows != Data.end(); ++Rows)
    {
        for (std::vector<double>::iterator Columns = Rows->begin(); Columns != Rows->end(); ++Columns)
        {
            *Columns *= I;
        }
    }
    return *this;
}

Matrix& Matrix::operator *= (const Matrix& M)
{
    //Matrix Product = Matrix(Data.size(), M.Data[0].size());
    if (Data.size() == M.Data[0].size())
    {
        for (size_t I = 0; I < Data.size(); I++)
        {
            for (size_t J = 0; J < M.Data[0].size(); J++)
            {
                double SumElements = 0.0;
                for (size_t K = 0; K < Data.size(); K++)
                {
                    SumElements += Data[I][K] * M.Data[K][J];
                }
                Data[I][J] = SumElements;
            }
        }
    }
    return *this;
}

Matrix& Matrix::operator + (const Matrix& M)
{
    return Matrix(*this) += M;
}

Matrix& Matrix::operator - (const Matrix& M)
{
    return Matrix(*this) -= M;
}

Matrix& Matrix::operator * (const int& I)
{
    return Matrix(*this) *= I;
}

Matrix& Matrix::operator * (const Matrix& M)
{
    return Matrix(*this) *= M;
}
