#include <iostream>

int main() {

    double weight;
    double earthgrav = 1;
    double mercurygrav = 0.38;
    double venusgrav = 0.91;
    double marsgrav = 0.38;
    double jupitergrav = 2.34;
    double saturngrav = 1.06;
    double uranusgrav = 0.92;
    double neptunegrav = 1.19;
    double weightresult;

    std::cout << "What your Earth weight is?\n";
    std::cin >> weight;
    std::cout << "\n";

    std::cout << "Now, insert the number of the planet you want to measure your relative weight in:\n";
    std::cout << "#   Planet\n1   Mercury\n2   Venus\n3   Mars\n4   Jupiter\n5   Saturn\n6   Uranus\n7   Neptune\n";
    int planetnumber;
    std::cin >> planetnumber;
    std::cout << "\n";

    switch (planetnumber)
    {
    case 1:
        weightresult = weight*mercurygrav;
        std::cout << "Relative weight in Mercury is: " << weightresult << " kg.\n";
        break;
    case 2:
        weightresult = weight*venusgrav;
        std::cout << "Relative weight in Venus is: " << weightresult << " kg.\n";
        break;
    case 3:
        weightresult = weight*marsgrav;
        std::cout << "Relative weight in Mars is: " << weightresult << " kg.\n";
        break;
    case 4:
        weightresult = weight*jupitergrav;
        std::cout << "Relative weight in Jupiter is: " << weightresult << " kg.\n";
        break;
    case 5:
        weightresult = weight*saturngrav;
        std::cout << "Relative weight in Saturn is: " << weightresult << " kg.\n";
        break;
    case 6:
        weightresult = weight*uranusgrav;
        std::cout << "Relative weight in Uranus is: " << weightresult << " kg.\n";
        break;
    case 7:
        weightresult = weight*neptunegrav;
        std::cout << "Relative weight in Neptune is: " << weightresult << " kg.\n";
        break;
    default:
        std::cout << "Incorrect input.\n";
        break;
    }

    return 0;
}