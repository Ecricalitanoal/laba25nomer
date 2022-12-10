#include <iostream>
#include <iomanip>
#include "Header.h"

int main()
{
    setlocale(0, "");
    double x, E;
    int N, choice;
    write();
    error_input(choice);
    std::cout << "Введите x: ";
    error_input(x); 
    switch (choice)
    {
    case 1:
    {
        std::cout << "Введите количество слагаемых: ";
        error_input(N);
        std::cout << "Сумма с заданным количеством слагаемых: ";
        std::cout << std::setprecision(26) << ln(x, N) << '\n';
        break;
    }
    case 2:
    {
        std::cout << "Введите точность вычислений: ";
        error_input_E(E);
        ln(x, E);
        break;
    }
    case 3:
    {
        std::cout << "Введите точность вычислений: ";
        error_input_E(E);
        ln_double_E(x, E);
        break;
    }
    default: break;
    }
    std::cout << "\nТочное значение: " << std::setprecision(26) << std::log(1 - x);
}