/*==============================================================================
  Authors include: Liqun Liu (lliu329@uwo.ca), Danfeng Chen (dchen285@uwo.ca)  
  See README.txt for details.
==============================================================================*/ 

#ifndef VECTOPERATION_H_INCLUDED
#define VECTOPERATION_H_INCLUDED

#include <vector>
#include <numeric>
#include <algorithm>

//operations for vector
template<typename T>
std::vector<T> operator+(const std::vector<T>& a, const T& scalar)
{
    std::vector<T> result(a.size());
    for(unsigned int i=0; i<a.size(); i++)
        {
            result[i] = a[i] + scalar;
        }
    return result;
}

template<typename T>
std::vector<T> operator-(const std::vector<T>& a, const T& scalar)
{
    std::vector<T> result(a.size());
    for(unsigned int i=0; i<a.size(); i++)
        {
            result[i] = a[i] - scalar;
        }
    return result;
}

template<typename T>
std::vector<T> operator-(const std::vector<T>& a)
{
    std::vector<T> result(a.size());
    for(unsigned int i=0; i<a.size(); i++)
        {
            result[i] = -a[i];
        }
    return result;
}

template<typename T>
std::vector<T> operator*(const std::vector<T>& a, const T& scalar)
{
    std::vector<T> result(a.size());
    for(unsigned int i=0; i<a.size(); i++)
        {
            result[i] = a[i]*scalar;
        }
    return result;
}

template<typename T>
std::vector<T> operator/(const std::vector<T>& a, T dividor)
{
    assert(dividor!=0);
    std::vector<T> result(a);
    for(int i=0; i<result.size(); i++)
        {
            result[i] = result[i]/dividor;
        }

    return result;
}

template<typename T>
T min(const std::vector<T>& a)
{
    return *std::min_element(a.begin(),a.end());
}

template<typename T>
T max(const std::vector<T>& a)
{
    return *std::max_element(a.begin(),a.end());
}
#endif // VECTOPERATION_H_INCLUDED
