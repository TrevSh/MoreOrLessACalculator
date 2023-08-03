//This program compares 2 ints
#include <iostream>

double val1;
double val2;

int main()
{
    std::cout << "Enter two ints and we will compare them: ";
    while (std::cin >> val1 >> val2) {
        double product = (val1 / val2);
        double sum = (val1 + val2);
        double diff = (val1 - val2);
        if (val1 > val2) {
            std::cout << val1 << "\n\n is larger than " << val2<<"\n\n";
        }
        else {
            std::cout << val2 << " is larger than " << val1 << "\n\n";
        }
        std::cout << "The sum of " << val1 << " and " << val2 << " is " << sum << "\n\n";
        std::cout << "The product of " << val1 << " and " << val2 << " is " << product << "\n\n";
        std::cout << "The difference of " << val1 << " and " << val2 << " is " << diff << "\n\n";

        std::cout << "Feel free to enter another!\n\n";
    }
    system("pause");
}