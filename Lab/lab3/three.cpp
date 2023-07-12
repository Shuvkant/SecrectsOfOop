#include <iostream>
// #include<iomanip>
using namespace std;
class carpark {
private:
  int carID;
  int Charge;
  float time;

public:
  // float totalcharge;
  void setdata() {
    cout << "Enter the car id: ";
    cin >> carID;
    cout << "Enter the charge per hour: ";
    cin >> Charge;
    cout << "Enter the total parked time: ";
    cin >> time;
  }
  void showdata() {
    cout << "Your Report" << endl;
    for (int i = 0; i <= 20; i++) {
      cout << "-";
    }
    cout << "\nCarId= " << carID << endl;
    cout << "Charge Per hour: " << Charge << endl;
    cout << "Parked time= " << time << " hours" << endl;
    cout << "Total Charge= NRS " << time * Charge << endl;
  }
};
int main() {
  carpark c1;
  c1.setdata();
  c1.showdata();
}
