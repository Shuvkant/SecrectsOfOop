// Copyconst.cpp
// user-defined copy constructor
#include <iostream>
using namespace std;
class ValueShow
{
private:
    int value;

public:
    ValueShow() {}
    ValueShow(int a)
    {
        value = a;
    }
    ValueShow(ValueShow &x)
    {
        value = x.value;
    }
    int display(){
        return value;
    }
};
int main(){
    ValueShow p1(55);  //Object is created and value is initialized to 55 
    ValueShow p2(p1); //p2 is copy of p1
    ValueShow p3=p1; //p3 is the copy of p1
    cout<<"Value of the data on the object p1="<<p1.display()<<endl;
    cout<<"Value of the data on the object p2="<<p2.display()<<endl;
    cout<<"Value of the data on the object p3="<<p3.display()<<endl;
}