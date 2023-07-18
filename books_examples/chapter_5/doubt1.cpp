#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
class Name {
private:
  string name;

public:
  void getName() {
    cout << "Enter your name: ";
    getline(cin, name);
  }
  void showName() { cout << "Your name is: " << name << endl; }
};
class getAddress {
private:
  string address;

public:
  void Askaddress() {
    cout << "\nEnter the address: ";
    cin >> address;
  }
  void showAddress() { cout << "Address: " << address << endl; }
};
int main() {
  Name s1;
  getAddress a1;
  s1.getName();
  s1.showName();
  a1.Askaddress();
  a1.showAddress();
}
