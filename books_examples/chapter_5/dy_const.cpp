#include <cstring>
#include <iostream>
using namespace std;

class testdycons {
private:
  char *str;

public:
  testdycons() {
    str = new char[1];
    str[0] = '\0';
  }

  testdycons(const char *string) {
    str = new char[strlen(string) + 1];
    strcpy(str, string);
  }

  void showstring() { cout << "You entered: " << str << endl; }

  ~testdycons() { delete[] str; }
};

int main() {
  testdycons dc("Nepal");
  dc.showstring();

  return 0;
}
