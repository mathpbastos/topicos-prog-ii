#include <iostream>
#include <iomanip>

int main(){

    double A = 0, B = 0, C = 0;
    do {
        std::cin >> A;
    } while (A > 10);
    
    do {
        std::cin >> B;
    } while (B > 10);

    do {
        std::cin >> C;
    } while (C > 10);

    // media = N1*P1 + N2*P2 ... Ni*Pi / P1 + P2 ... Pi
    double media = (A*2 + B*3 + C*5) / 10;

    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << media << std::endl;

    return 0;
}