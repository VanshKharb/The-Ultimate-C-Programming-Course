#include <iostream>

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    double a {};
    std::cin >> a;

    const double G = 9.8;
    int i {0};

    double h = a - (G * i * i / 2);

    while (h != 0)
    {
        std::cout << "At " << i << " seconds, the ball is at height: " << h << " meters\n";
        i++;
    }

    while (h == 0)
    {
        std::cout << "At " << i << " seconds, the ball is on the ground.\n";
        break;
    }

    return 0;
}