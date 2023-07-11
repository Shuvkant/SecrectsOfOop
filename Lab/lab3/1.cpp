#include <cstdlib>
#include <filesystem>
#include <iomanip>
#include <iostream>
using namespace std;
class Celcius {
private:
  float tempInCel;
  float tempInFah;

public:
  void setdata() {
    cout << "Enter temperature in Celcius: ";
    cin >> tempInFah;
  }
  void toFahrenheit() {
    cout << "Temperature in Fahrenheit is: " << ((9 * tempInFah) / 5) + 32
         << endl;
  }
};
class Fahrenheit {
private:
  float tempInCel;
  float tempInFah;

public:
  void setdata() {
    cout << "Enter temperature in Fahrenheit: ";
    cin >> tempInFah;
  }
  void toCelcius() {
    cout << "Temperature in Celcius Scale is: " << ((tempInFah - 32) / 9) * 5
         << endl;
  }
};
int main() {
  Celcius c1;
  Fahrenheit f1;
  c1.setdata();
  c1.toFahrenheit();
  f1.setdata();
  f1.toCelcius();
}
