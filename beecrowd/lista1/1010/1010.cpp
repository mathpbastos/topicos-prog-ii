#include <iostream>
#include <iomanip>

int main(){

    double code = 0, qty = 0, unitPrice = 0, total = 0;

    std::cin >> code >> qty >> unitPrice;
    total += qty * unitPrice;
    std::cin >> code >> qty >> unitPrice;
    total += qty * unitPrice;

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}