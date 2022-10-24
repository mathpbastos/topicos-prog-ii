#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main(){

    double valor = 0.0;
    int qtd = 0;
    std::cin >> valor;

    std::vector<double> notas = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0};
    std::vector<double> moedas = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    std::cout << "NOTAS:" << std::endl;
    for(double nota : notas){
        qtd = floor(valor / nota);
        valor = fmod(valor, nota);
        std::cout << qtd << " nota(s) de R$ ";
        switch (int(nota)){
            case 100:
                std::cout << "100.00" << std::endl;
                break;
            case 50:
                std::cout << "50.00" << std::endl;
                break;
            case 20:
                std::cout << "20.00" << std::endl;
                break;
            case 10:
                std::cout << "10.00" << std::endl;
                break;
            case 5:
                std::cout << "5.00" << std::endl;
                break;
            case 2:
                std::cout << "2.00" << std::endl;
                break;
            default:
                break;
            }
    }
    std::cout << "MOEDAS:" << std::endl;
    for(size_t i = 0; i < moedas.size(); i++){
        if (i == 0){
            qtd = valor / moedas[i];
            std::cout << qtd << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << moedas[i] << std::endl;
            valor *= 100;
            valor = fmod(valor, 100);
        }
        else{   
            qtd = floor(valor/(moedas[i]*100));
            std::cout << qtd << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << moedas[i] << std::endl;
            valor = fmod(valor, (moedas[i]*100));
        }
    }

    return 0;
}