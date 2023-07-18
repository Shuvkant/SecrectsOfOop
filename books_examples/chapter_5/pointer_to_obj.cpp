// ponter_to_obj.cpp
// an example pointer to object
#include <iostream>
using namespace std;
class employee {
private:
  char name[25];
  float salary;

public:
  void getdata() {
    cout << "\nEnter Name: ";
    cin >> name;
    cout << "Enter salary";
    cin >> salary;
  }
  void showdata() {
    cout << "\nName: " << name << endl;
    cout << "Salary: " << salary;
  }
};
int main() {
  employee *eptr;
  employee e;
  eptr = &e;
  eptr->getdata();
  cout << "\nAscending data through pointer variable:";
  eptr->showdata();
  return 0;
}
