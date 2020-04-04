#include <iostream>

using namespace std;

template<typename T>
class complex
{
public:
    complex(T a=0, T b=0): re(a), im(b){}

    T real() const {return re;}
    T imag() const {return im;}

    complex& operator += (const complex& r);
private:
    T re;
    T im;
};

template<typename T>
complex<T>& complex<T>::operator += (const complex& r)
{
    this->re += r.re;
    this->im += r.im;
    return *this;
}


int main()
{
    complex<float> c(1.3, 2.4);
    cout<<c.real()<<"+"<<c.imag()<<"i"<<endl;
    complex<float> c2(3.7, 4.6);
    c2 += c;
    cout<<c2.real()<<"+"<<c2.imag()<<"i"<<endl;
    return 0;
}