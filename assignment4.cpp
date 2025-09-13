#include <iostream>
using namespace std;
class Complex
{
float real, imag;
public:
//default operator
Complex()
{
real = 0;
imag = 0;
}
//parameterized constructor
Complex(float a, float b)
{
real = a;
imag = b;
}
//Addition Operator
Complex operator +(Complex c)
{
Complex temp;
temp.real = real + c.real;
temp.imag = imag + c.imag ;
return temp;
}
friend Complex operator*(Complex other1, Complex other2);
void Display()
{
cout << real << " + j" << imag << "\n";
}
friend istream &operator>>(istream &, Complex &);
friend ostream &operator<<(ostream &, Complex &);
};
Complex operator*(Complex other1, Complex other2)
{
Complex result;
result.real = (other1.real * other2.real) - (other1.imag *
other2.imag);
result.imag = (other1.real * other2.imag) + (other1.imag *
other2.real);
return result;
}
istream &operator>>(istream &in, Complex &obj)
{
cout << "Enter real Number: ";
in >> obj.real;
cout << "Enter imag Number: ";
in >> obj.imag;
return in;
}
ostream &operator<<(ostream &out, Complex &obj)
{
out << obj.real << "+";
out << obj.imag << "i";
return out;
}
int main()
{
Complex C1, C2, C3, C4;
cout << "Enter Real and Imaginary Part of 1st Complex Number \n";
cin >> C1;
cout << "Enter Real and Imaginary Part of 2nd Complex Number \n";
cin >> C2;
C3 = C1 + C2;
C4 = C1 * C2;
cout << "Sum: " << C3 << endl;
cout << "Product: " << C4 << endl;
return 0;
}
