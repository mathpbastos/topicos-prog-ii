#include <iostream>
#include <vector>
#include <cmath>

int main(){

    double valor = 0.0;
    int qtd = 0;
    std::cin >> valor;

    std::vector<double> notas = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0};

    std::cout << valor << std::endl;
    for(double nota : notas){
        qtd = floor(valor / nota);
        valor -= qtd*nota;
        std::cout << qtd << " nota(s) de R$ ";
        switch (int(nota)){
            case 100:
                std::cout << "100,00" << std::endl;
                break;
            case 50:
                std::cout << "50,00" << std::endl;
                break;
            case 20:
                std::cout << "20,00" << std::endl;
                break;
            case 10:
                std::cout << "10,00" << std::endl;
                break;
            case 5:
                std::cout << "5,00" << std::endl;
                break;
            case 2:
                std::cout << "2,00" << std::endl;
                break;
            case 1:
                std::cout << "1,00" << std::endl;
                break;
            default:
                break;
            }
    }



    return 0;
}