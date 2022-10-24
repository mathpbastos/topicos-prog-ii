#include <iostream>

int main(){

    int idade = 0;
    std::cin >> idade;

    int anos = 0, meses = 0, dias = 0;

    anos = idade / 365;
    idade -= anos * 365;
    meses = idade / 30;
    idade -= meses*30;
    dias = idade;

    std::cout << anos << " ano(s)" << std::endl;
    std::cout << meses << " mes(es)" << std::endl;
    std::cout << dias << " dia(s)" << std::endl;

    return 0;
}