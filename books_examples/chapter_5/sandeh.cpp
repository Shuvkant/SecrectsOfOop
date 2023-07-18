#include <iostream>
using namespace std;
class A
{
private:
    int num1=10;
    int num2=20;
    public:
    void sumOfnum();
};
void A::sumOfnum()
{
    int num3;
    num3 = num1 + num2;
    cout << "The sum of" << num1 << " and " << num2 << " is " << num3;
}
int main()
{
    A a1;
    a1.sumOfnum();
}