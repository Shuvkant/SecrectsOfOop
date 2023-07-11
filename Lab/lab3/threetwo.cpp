
#include <iostream>

class CarPark {
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
        int charges = chargePerHour * parkedTime;
        std::cout << "Car ID: " << carId << std::endl;
        std::cout << "Charges: $" << charges << std::endl;
    }

    void showParkedHours() {
        std::cout << "Car ID: " << carId << std::endl;
        std::cout << "Parked Hours: " << parkedTime << " hours" << std::endl;
    }
};

int main() {
    CarPark car1;
    car1.setCarId(1);
    car1.setChargePerHour(10);
    car1.setParkedTime(2.5);
    car1.showCharges();
    car1.showParkedHours();

    return 0;
}
