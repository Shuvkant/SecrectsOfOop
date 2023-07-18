#include<iostream>
using namespace std;
class Car{
    private:
    string name;
    string model;
    int price;
    int year;
    public:
    void showdata(string nam, string mo, int p, int y){
        name=nam;
        model=mo;
        price=p;
        year=y;
        cout<<"Car Details:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Model"<<model<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Year: "<<year<<endl<<endl;
    }
};
int main(){
    Car c1, c2;
    c1.showdata("BMW", "X2", 120000, 1993);
    c2.showdata("Ferrari", "F1", 150000, 1998);
}