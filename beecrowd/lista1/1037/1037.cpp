#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> intervalos = {"[0,25]", "(25,50]", "(50,75]", "(75,100]"};
    double valor = 0;
    std::cin >> valor;

    if((valor < 0) || (valor > 100)){
        std::cout << "Fora de intervalo" << std::endl;
    }
    else if((valor >= 0) && (valor <= 25)){
        std::cout << "Intervalo " << intervalos[0] << std::endl;
    }
    else if((valor > 25) && (valor <= 50)){
        std::cout << "Intervalo " << intervalos[1] << std::endl;
    }
    else if((valor > 50) && (valor <= 75)){
        std::cout << "Intervalo " << intervalos[2] << std::endl;
    }
    else if((valor > 75) && (valor <= 100)){
        std::cout << "Intervalo " << intervalos[3] << std::endl;
    }

    return 0;
}