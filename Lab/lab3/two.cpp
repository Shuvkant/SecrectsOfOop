#include <iostream>
#include <math.h>
using namespace std;
class Primechecker
{
private:
    int num;

public:
    int flag;
    // flag=0;
    void setdata()
    {
        cout << "Enter any number: ";
        cin >> num;
    }
    void checkPrime()
    {
        if (num <= 1)
        {
            flag = 0;
            //   break;
        }
        else
        {
            for (int i = 2; i <= sqrt(num); i++)
            {
                if (num % i == 0)
                {
                    flag = 0;
                    break;
                }
                else
                    flag = 1;
            }
        }
    }

    void result()
    {
        if (flag == 0)
        {
            cout << num << " is not Prime Number" << endl;
        }
        else
        {
            cout << num << " is prime number:" << endl;
        }
    }
};
int main()
{
    char choice;
    Primechecker ram;
    do
    {
        ram.setdata();
        ram.checkPrime();
        ram.result();
        cout << "Do you want to continue?(y/n)";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
