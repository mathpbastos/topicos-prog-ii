#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double A = 0, B = 0, C = 0;
    std::cin >> A >> B >> C;
    double r1 = 0, r2 = 0;
    double delta = pow(B, 2)-4*A*C;
    if(delta < 0 || A == 0){
        std::cout << "Impossivel calcular" << std::endl;
    }
    else{
        r1 = (-B + sqrt(delta)) / (2*A);
        r2 = (-B - sqrt(delta)) / (2*A);

        std::cout << "R1 = " << std::fixed << std::setprecision(5) << r1 << std::endl;
        std::cout << "R2 = " << std::fixed << std::setprecision(5) << r2 << std::endl;
    }
    return 0;
}