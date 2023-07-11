#include <iostream>

class EmployeeReport {
private:
    int employeeId;
    float totalBonus;
    float totalOvertime;
    int year;
public:
    void setPara(int id, float bonus, float overtime, int y) {
        employeeId = id;
        totalBonus = bonus;
        totalOvertime = overtime;
        year = y;
    }
    void displayReport() {
        std::cout << "An employee with ID " << employeeId << " has received Rs " << totalBonus << " as a bonus\n";
        std::cout << "and had worked " << totalOvertime << " hours as overtime in the year " << year << "\n";
    }
};

int main() {
    EmployeeReport reports[3] = {
        {1001, 5000.0, 50.0, 2022},
        {1002, 7500.0, 75.0, 2022},
        {1003, 10000.0, 100.0, 2022}
    };

    for (int i = 0; i < 3; ++i) {
        reports[i].displayReport();
        std::cout << "\n";
    }

    return 0;
}