#include <iostream>
#include <iomanip>
#include "Header.h"

double ln(double x, int N)
{
    double y, xn;
    xn = x;
    y = -x;
    for (int i = 2; i <= N; ++i)
    {
        xn *= x * (i - 1) / i;
        y -= xn;
    }
    return y;
}

void ln(double x, double E)
{
    int i = 2;
    double y = -x, xn = x;
    while (abs(xn) >= E)
    {
        xn *= x * (i - 1) / i;
        y -= xn;
        ++i;
    }
    std::cout << "\n����� � �������� ���������: " << std::setprecision(26) << y << '\n';
    std::cout << "���-�� ��������� = " << i << '\n';
}

void ln_double_E(double x, double E)
{
    int i = 2;
    double y = -x, xn = x;
    while (abs(xn) >= E)
    {
        xn *= x * (i - 1) / i;
        y -= xn;
        ++i;
    }
    std::cout << "\n1-�� ����� � �������� ���������: " << std::setprecision(26) << y << '\n';
    std::cout << "���-�� ��������� = " << i << '\n';
    i = 2;
    y = -x;
    xn = x;
    while (abs(xn) >= E / 10)
    {
        xn *= x * (i - 1) / i;
        y -= xn;
        ++i;
    }
    std::cout << "\n2-�� ����� � �������� ���������: " << std::setprecision(26) << y << '\n';
    std::cout << "���-�� ��������� = " << i << '\n';
}

void write()
{
    std::cout << "1. ����� � �������� ����������� ���������\n";
    std::cout << "2. ����� � �������� ���������\n";
    std::cout << "3. ����� � ������� ���������\n";
}

void error_input(int& x)
{
    while (!(std::cin >> x))
    {
        std::cout << "������ �����\n";
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
}

void error_input(double& x)
{
    while (!(std::cin >> x) || abs(x) >= 1)
    {
        std::cout << "������ ����� (|x| < 1!)\n";
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
}

void error_input_E(double& x)
{
    while (!(std::cin >> x))
    {
        std::cout << "������ �����\n";
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
}
