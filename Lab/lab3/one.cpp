// fahrenheit to celcius and celcius to fahrenheit
#include <iostream>
#include <iomanip>
// #include <string>
using namespace std;
class fahrenheit
{
private:
    float tempInFah;
    float tempInCel;

public:
    void getdata()
    {
        cout << "\nEnter temperature in fahrenheit:(°F) ";
        cin >> tempInFah;
        // tempInFah = temp;
        tempInCel = (((tempInFah - 32) * 5) / 9);
    }
    void showdata()
    {
        cout << "Temperature in celcius is : " << tempInCel << " °C";
    }
};
class celcius
{
private:
    float tempInCel;
    float tempInFah;

public:
    void getdata()
    {
        // float temp;
        cout << "\nEnter the temperature in Celcius (°C)";
        cin >> tempInFah;
        tempInFah = ((9 * tempInFah) / 5) + 32;
    }
    void showdata()
    {
        cout << "Temperature in fahrenheit is: " << tempInFah << " °F";
    }
};
int main()
{
    fahrenheit f1;
    celcius c1;
    f1.getdata();
    f1.showdata();

    c1.getdata();
    c1.showdata();
}