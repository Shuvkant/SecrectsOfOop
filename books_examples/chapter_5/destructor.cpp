// Destructor.cpp
// example of Destructor
#include <iostream>
using namespace std;
class Test {
public:
  Test() // constructor
  {
    cout << "\nControl is in constructor" << endl;
    cout << "Initialization operation is done here" << endl;
  }
  ~Test() {
    cout << "\nControl is in Destructor" << endl;
    cout << "Object goes out of scope" << endl;
    cout << "Cleanup operation performed here.";
  }
};
int main() {
  Test t; // constructor is called
  cout << "Function main() is terminating...";
  // object t goes out of scope, descructor is called
}
