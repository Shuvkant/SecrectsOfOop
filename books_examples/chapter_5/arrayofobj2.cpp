// arrayofobj2.cpp
// array of objects
#include <iostream>
using namespace std;
class Test {
private:
  int data;

public:
  Test() : data(0) {}
  Test(int n) : data(n) {}
  void getdata() {
    cout << "Enter data: ";
    cin >> data;
  }
  void showdata() { cout << "\t" << data; }
};
int main() {
  Test t1[3] = {9, 8, 7};
  cout << "\nThe initialized data are: ";
  for (int i = 0; i < 3; i++) {
    t1[i].showdata();
  }
}
/*The initialization in the form
Test t1[3]={9,8,7};
is equivalent to
Test t1[3]={test(9), test(8), test(7)};*/
