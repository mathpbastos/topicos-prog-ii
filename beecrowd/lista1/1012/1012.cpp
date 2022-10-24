#include <iostream>
#include <iomanip>

#define PI 3.14159

int main(){

    double A = 0, B = 0, C = 0;

    std::cin >> A >> B >> C;

    std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << (A*C)/2 << std::endl;
    std::cout << "CIRCULO: " << std::fixed << std::setprecision(3) << (PI*C*C) << std::endl;
    std::cout << "TRAPEZIO: " << std::fixed << std::setprecision(3) << ((A+B)*C)/2 << std::endl;
    std::cout << "QUADRADO: " << std::fixed << std::setprecision(3) << (B*B) << std::endl;
    std::cout << "RETANGULO: " << std::fixed << std::setprecision(3) << (A*B) << std::endl;

    return 0;
}