


#include <iostream>
#include <cmath>
int main() {
    char y;
    double a;
    double b;
    double c;
std::cout << "\n\n\n\n WELCCOM TO THIS CALCULATER:)\n\n\n";

std::cout << "choose the operator(+,-,*,/)";
std::cin >> y;
std::cout << " Enter THE FIRST NUMBER ";
std::cin >> a;
std::cout << " Enter THE SECOND NUMBER ";
std::cin >> b;



switch (y) {
    case '+' : c = a + b;
    std::cout << c;
    break;
    case '-' : c = a - b;
    std::cout << c;
    break;
    case '*' : c = a * b;
    std::cout << c;
    break;
    case '/' : c = a / b;
    std::cout << c;
    break;
    default : std::cout << "sorry operstor is not defind:( ";
    
}

std::cout << "\n\nThank you for using this calculater:))";

    return 0;
}