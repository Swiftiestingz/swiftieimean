#include "Vector3.h"
#include <cmath>
Vector3::Vector3()
{
for (int i = 0; i < n; i++)
elem[i] = 0;
};
Vector3::Vector3(double arg)
{
for (int i = 0; i < n; i++)
elem[i] = arg;
};
Vector3::Vector3(const double arg[3])
{
for (int i = 0; i < n; i++)
elem[i] = arg[i];
};
Vector3::Vector3(const Vector3& other)
{
for (int i = 0; i < n; i++)
elem[i] = other.elem[i];
};
Vector3::Vector3(double arg1, double arg2, double arg3)
{
elem[0] = arg1;
elem[1] = arg2;
elem[2] = arg3;
};
Vector3::~Vector3()
{

};
double& Vector3::operator[](unsigned int i)
{
return elem[i];
}
double Vector3::operator[](unsigned int i) const
{
return elem[i];
}
Vector3& Vector3::operator=(const Vector3& other)
{
    for (int i = 0; i < n; i++)
        this->elem[i] = other.elem[i];
    return *this;
};
Vector3& Vector3::operator+=(const Vector3& other)
{
    for (int i = 0; i < n; i++)
        this->elem[i] = this->elem[i] + other.elem[i];
    return *this;
};
Vector3& Vector3::operator-=(const Vector3& other)
{
    for (int i = 0; i < n; i++)
        this->elem[i] = this->elem[i] - other.elem[i];
    return *this;
};
Vector3& Vector3::operator*=(const double number)
{
    for (int i = 0; i < n; i++)
        this->elem[i] = this->elem[i] * number;
    return *this;
};
Vector3& Vector3::operator/=(const double number)
{
    for (int i = 0; i < n; i++)
        this->elem[i] = this->elem[i] / number;
    return *this;
};

bool operator==(const Vector3& lhs, const Vector3& rhs)
{
    for (int i = 0; i < Vector3::n; i++)
    {
        if (lhs[i] != rhs[i])
        {
            return false;
            break;
        }
    }
    return true;
};
bool operator!=(const Vector3& our, const Vector3& other)
{
    for (int i = 0; i < Vector3::n; i++)
    {
        if (our[i] != other[i])
        {
            return true;
            break;
        }
    }
return false;
};
Vector3 operator+(const Vector3& our, const Vector3& other)
{
return Vector3(our.elem[0] + other.elem[0], our.elem[1] + other.elem[1], our.elem[2] + other.elem[2]);
};
Vector3 operator-(const Vector3& our, const Vector3& other)
{
return Vector3(our.elem[0] - other.elem[0], our.elem[1] - other.elem[1], our.elem[2] - other.elem[2]);
};
Vector3 operator*(const Vector3& our, double number)
{
return Vector3(our.elem[0] * number, our.elem[1] * number, our.elem[2] * number);
};
Vector3 operator*(double number, const Vector3& our)
{
return Vector3(our.elem[0] * number, our.elem[1] * number, our.elem[2] * number);
};
Vector3 operator/(const Vector3& our, double number)
{
return Vector3(our.elem[0] / number, our.elem[1] / number, our.elem[2] / number);
};
Vector3 Vector3::operator-()const
{
return Vector3(-elem[0], -elem[1], -elem[2]);
};
std::ostream& operator<<(std::ostream& stream, const Vector3& V)
{
return stream << "(" << V.elem[0] << "; " << V.elem[1] << "; " << V.elem[2] << ")";
};
double Vector3::getNorma() const
{
return double(sqrt(pow(elem[0], 2) + pow(elem[1], 2) + pow(elem[2], 2)));
};
void Vector3::normalize()
{
try
    {
double ADECVAT = (sqrt(pow(elem[0], 2) + pow(elem[1], 2) + pow(elem[2], 2)));
if (ADECVAT == 0.0)
throw std::exception("Can't normalize a null");
for (int i = 0; i < n; i++)
elem[i] = elem[i] / ADECVAT;
    }
catch (const std::exception& ex)
    {
std::cerr << ex.what() << "\n";
    }
};
Vector3 Vector3::getNormalized() const
{
try
    {
double ADECVAT = (sqrt(pow(elem[0], 2) + pow(elem[1], 2) + pow(elem[2], 2)));
if (ADECVAT == 0.0)
throw std::exception("Can't normalize a null");
return Vector3(elem[0] / ADECVAT, elem[1] / ADECVAT, elem[2] / ADECVAT);
    }
catch (const std::exception& ex)
    {
std::cerr << ex.what() << "\n";
    }
};
double Vector3::getScalarProduct(const Vector3& other) const
{
return elem[0] * other[0] + elem[1] * other[1] + elem[2] * other[2];
};
Vector3 getVectorProduct(const Vector3& our, const Vector3& other)
{
return Vector3(our[(0 + 1) % 3] * other[(0 + 2) % 3] - our[(0 + 2) % 3] * other[(0 + 1) % 3], our[(1 + 1) % 3] * other[(1 + 2) % 3] - our[(1 + 2) % 3] * other[(1 + 1) % 3], our[(2 + 1) % 3] * other[(2 + 2) % 3] - our[(2 + 2) % 3] * other[(2 + 1) % 3]);
};
const double* Vector3::getElements()
{
return &elem[0];
};