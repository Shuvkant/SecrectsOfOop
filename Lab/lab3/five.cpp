#include <iostream>
using namespace std;
class EmployeeReport {
private:
  int empId;
  double bonus;
  int overtime;
  int year;

public:
  void setPara(int id, float bn, int ot, int y) {
    empId = id;
    bonus = bn;
    overtime = ot;
    year = y;
  }
  void printData() {
    cout << "An employee with ID " << empId << " has received Rs " << bonus
         << " as a bonus" << endl;
    cout << " and had worked " << overtime << " hours as overtime in the year "
         << year << endl;
  }
};
int main() {
  const int n = 3;
  EmployeeReport employees[n];
  employees[0].setPara(304, 3000.0, 200, 2023);
  employees[1].setPara(102, 7000.0, 150, 2023);
  employees[2].setPara(103, 9000.0, 200, 2023);

  for (int i = 0; i < n; i++) {
    employees[i].printData();
    cout << endl;
  }

  return 0;
}
