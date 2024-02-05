// This program repeats the array.
#include <iostream>
#include <iomanip>
int main()
{
    int n;
    std::cout << "Enter the number of arrays:";
    std::cin >> n;
    int num[n];
    int ans[n];

    // Asking for the elements of the array
    std::cout << "Enter the array:\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << "num[" << i << "]=";
        std::cin >> num[i];
    }

    // the size of the array exactly becomes double
    for (int i = 0; i < n; i++)
    {
        ans[i] = num[i];
        ans[i + n] = num[i];
    }

    // displaying the content of the array
    for (int i = 0; i < 2 * n; i++)
    {
        std::cout << ans[i];
    }
}