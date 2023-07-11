#include <iomanip>
#include <iostream>
using namespace std;
struct calendar_date {
  int mm;
  int dd;
  int yy;
};

void printData(calendar_date &man) {
  cout << endl;
  cout << setw(2) << setfill('0') << man.mm << "/" << setw(2) << setfill('0')
       << man.dd << "/" << setw(4) << setfill('0') << man.yy << endl;
}
int main() {
  calendar_date date;
  cout << "Enter the  birthday month: ";
  cin >> date.mm;
  cout << "Enter the birthday: ";
  cin >> date.dd;
  cout << "Enter the birth year: ";
  cin >> date.yy;
  for (int i = 0; i <= 20; i++) {
    cout << "-";
  }
  printData(date);
  cout << "Hello World!" << endl;
  cout << "My name is Shuvkant Chaudhary Phanait" << endl;

  return 0;
}
