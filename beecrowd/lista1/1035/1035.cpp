#include <iostream>

int main(){
    int A = 0, B = 0, C = 0, D = 0;
    std::cin >> A >> B >> C >> D;

    if((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && (A % 2 == 0)){
        std::cout << "Valores aceitos" << std::endl;
    }
    else{
       std::cout << "Valores nao aceitos" << std::endl;
    }

    return 0;
}