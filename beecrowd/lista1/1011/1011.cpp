#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159

int main(){

    double r = 0;

    std::cin >> r;

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << (4.0/3)*PI*pow(r, 3) << std::endl;

    return 0;
}