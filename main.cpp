#include <iostream>
#include <cmath>  // for pow()

double sum_recursion(int n)
{
    if (n == 0) {
        return 0;
    } else {
        return pow(-1, n + 1) / n + sum_recursion(n - 1);
    }
}

int main()
{
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    double result = sum_recursion(n);
    std::cout << "The sum of the equation is " << result << std::endl;

    return 0;
}
