// consoverloading.cpp
// constructor overloading
#include <iostream>
using namespace std;
class Account {
private:
  int accno;
  float balance;

public:
  Account() // constructor with no argument
  {
    accno = 1024, balance = 5000.55;
  }
  Account(int acc) // constructor with one argument
  {
    accno = acc;
    balance = 2000.0;
  }
  Account(int acc, float bal) // constructor with two argument
  {
    accno = acc;
    balance = bal;
  }
  void display() {
    cout << "\nAccount no= " << accno << endl;
    cout << "Balance= " << balance << endl;
  }
}; // end of class definition
int main() {
  Account acc1;
  Account acc2(100);
  Account acc3(200, 3000.5);
  cout << endl << "Accout Information" << endl;
  acc1.display();
  acc2.display();
  acc3.display();
}
