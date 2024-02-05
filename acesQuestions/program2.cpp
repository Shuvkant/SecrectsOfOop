#include <iostream>
#include <iomanip>
int main()
{
    int n, i, j;
    std::cout << "Enter the order of the sqaure matrix: ";
    std::cin >> n;
    int mat[n][n], sum = 0;

    // Asking the user for the content of the matrix
    std::cout << "Enter the matrix\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            std::cout << "mat[" << i << "][" << j << "]=";
            std::cin >> mat[i][j];
        }
    }

    // Adding the primary and secondary diagonals
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j) // adding the primary diagonal elements
            {
                sum += mat[i][j];
            }
            else if (i + j == n - 1) // adding the secondary diagonal elements
            {
                sum += mat[i][j];
            }
        }
    }
    // Displaying the sum
    std::cout << "Sum of the primary and secondary diagonal elements is: " << sum;
}