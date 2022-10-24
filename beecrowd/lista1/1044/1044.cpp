#include <iostream>

int main(){
    int a = 0, b = 0;
    std::cin >> a >> b;

    if(a > b) {
        if(a % b == 0)
            std::cout << "Sao Multiplos" << std::endl;
        else
            std::cout << "Nao sao Multiplos" << std::endl;
    }
    else{
        if(b % a == 0)
            std::cout << "Sao Multiplos" << std::endl;
        else
            std::cout << "Nao sao Multiplos" << std::endl;
    }
    return 0;
}