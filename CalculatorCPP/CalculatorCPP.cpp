#include <iostream>
#include <limits>

double Calculate(int operation, double x, double y)
{
    double result;

    switch (operation)
    {
    case 1:
        result = x + y;
        break;
    case 2:
        result = x - y;
        break;
    case 3:
        result = x * y;
        break;
    case 4:
        if (y == 0)
        {
			std::cout << "\nError. Division by zero is not allowed!";
			return 0;
        }
        else
        {
            result = x / y;
        }
        break;
    default:
        std::cout << "\nInvalid operation. Please choose a valid option!";
        return 0;
    }

    return result;
}

int main()
{
    double x, y, result;
    int operation;

    while(true)
    {
        std::cout << "Enter first variable: ";
        
        if (!(std::cin >> x))
        {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nInvalid input. Please enter a number!\n\n";
            continue;
		}

        std::cout << "Enter second variable: ";
        
        if (!(std::cin >> y))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nInvalid input. Please enter a number!\n\n";
            continue;
        }

        std::cout << "\nChoose operation:\n\n 1. Addition\n\n 2. Subtraction\n\n 3. Multiplication\n\n 4. Division\n\n Option: ";
        
        if (!(std::cin >> operation))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nInvalid input. Please enter a number!\n\n";
            continue;
        }

        result = Calculate(operation, x, y);
        std::cout << "\nResult: " << result << "\n";

        std::cout << "\nPress any key to continue...\n";
        std::cin.ignore();
        std::cin.get();

        system("cls");
    }   
}
