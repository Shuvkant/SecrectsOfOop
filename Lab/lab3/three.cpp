#include <iostream>
using namespace std;

class Carpark {
private:
    int carId;
    int chargePerHour;
    float parkedTime;
public:
    void setCarId(int id) {
        carId = id;
    }
    void setChargePerHour(int charge) {
        chargePerHour = charge;
    }
    void setParkedTime(float time) {
        parkedTime = time;
    }
    void showCharges() {
        std::cout << "Car ID: " << carId << endl;
        std::cout << "Parked Hours: " << parkedTime << "\n";
        std::cout << "Charges: " << parkedTime * chargePerHour << "\n";
    }
    void showDataMembers() {
        std::cout << "Car ID: " << carId << "\n";
        std::cout << "Charge Per Hour: " << chargePerHour << "\n";
        std::cout << "Parked Time: " << parkedTime << " hours\n";
    }
};

int main() {
    Carpark car1;
    car1.setCarId(7);
    car1.setChargePerHour(10);
    car1.setParkedTime(3);
    car1.showDataMembers();
    car1.showCharges();

    return 0;
}