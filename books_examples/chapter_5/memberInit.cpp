// member initializer list
#include <iostream>
#include <ostream>
using namespace std;
class Shuvkant {
private:
  int num1;
  int num2;

public:
  Shuvkant(int x, int y) : num1(x), num2(y) {}
  void display() {
    cout << "\nThe Value entered: " << endl;
    cout << "Num1= " << num1 << endl;
    cout << "NUm2= " << num2 << endl;
  }
};
int main() {
  Shuvkant s1(2, 5);
  s1.display();
}
