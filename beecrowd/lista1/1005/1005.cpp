#include <iostream>
#include <iomanip>

int main(){

    double A = 0, B = 0;
    std::cin >> A >> B;
    
    // media = N1*P1 + N2*P2 ... Ni*Pi / P1 + P2 ... Pi
    double media = (A*3.5 + B*7.5) / 11;

    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << media << std::endl;

    return 0;
}