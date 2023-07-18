// objasfunarg.cpp
// object as function argument
#include <iostream>
using namespace std;
class complex
{
private:
    float real, imag;

public:
    void getvalue()
    {
        cout << "\nEnter real part:";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void showvalue() { cout << "(" << real << "," << imag << ")"; }
    void add(complex cc1, complex cc2)
    {
        real = cc1.real + cc2.real;
        imag = cc1.imag + cc2.imag;
    }
};
int main()
{
    complex c1;
    complex c2;
    complex c3;
    c1.getvalue();
    c2.getvalue();
    c3.add(c1, c2);
    c1.showvalue();
    cout<<"+";
    c2.showvalue();
    cout<<" = ";
    c3.showvalue();
}
