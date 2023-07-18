//friend_class.cpp
//example of friend class
#include<iostream>
using namespace std;
class B;
class A{
private:
char passA[20];
public:
void getdata(){
    cout<<"\nEnter password of A: ";
    cin>>passA;
}
void showdata(B){
    friend class B;
}
};
class B{
    private:
    char passB[20];
    public:
    void getdata(){
        cout<<"\nEnter password of B:";
        cin>>passB;
    }
    void showdata(A a){
        cout<<"\nA's password is :"<<a.passA;
    }
    friend class A;
};
void A::showdata( B b){
    cout<<"\nB's password is : "<<b.passB;
}
int main(){
    A a;
    B b;
    a.getdata();
    b.getdata();
    a.showdata(b);
    b.showdata();
    return 0;
}