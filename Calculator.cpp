#include <iostream>


int calculator(double x, double y,char operation) {
        switch (operation) {
        case '+':
            std::cout << x << "+" << y << "=" << x + y;
            break;
        case '-':
            std::cout << x << "-" << y << "=" << x - y;
            break;
        case '*':
            std::cout << x << "*" << y << "=" << x * y;
            break;
        case '/':
            std::cout << x << "/" << y << "=" << x / y;
            break;
        }
        return 0;
            
              
    }



int main(double x, double y, int z)
{
    std::cout << "Welcome the calculator!" << std::endl;
    std::cout << "Please enter two numbers" << std::endl;
    std::cin >> x >> y;
    std::cout << "Please choose an operation" << std::endl;
    std::cout << "1. + " << std::endl;
    std::cout << "2. - " << std::endl;
    std::cout << "3. * " << std::endl;
    std::cout << "4. / " << std::endl;
    std::cin >> z;
    if (z == 1) {
        calculator(x, y, '+');
    }
    else if (z == 2) {
        calculator(x, y, '-');
    }
    else if (z == 3) {
        calculator(x, y, '*');
    }
    else if (z == 4) {
        calculator(x, y, '/');
    }
    else
        std::cout << "Wrong choose";


}




