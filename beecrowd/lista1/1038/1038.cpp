#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    std::vector<double> precos = {4.00, 4.50, 5.00, 2.00, 1.50};
    int qtd = 0, codigo = 0;
    std::cin >> codigo >> qtd;
    double total = precos[codigo-1] * qtd;
    std::cout << "Total: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}