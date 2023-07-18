// objasdatamem.cpp
// example of local class
#include<iostream>
using namespace std;
class A{
    private:
    int data;
    public:
    void purwanchal(){
        cout<<"Enter data:";
        cin>>data;
    }
    void showdata(){
        cout<<"Data is "<<data;
    }
};
class B{
    private:
    A a; //containership
    int b;
    public:
    void putdata(){
        a.purwanchal();
        cin>>b;
    }
    void display(){
        a.showdata();
        cout<<b;
    }
};
int main(){
    B beg;
    beg.putdata();
    beg.display();
    return 0;
}