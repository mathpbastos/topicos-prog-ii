#include <iostream>
#include <cmath>

int main(){

    int n = 0;
    std::cin >> n;

    int horas = floor(n/3600);
    n -= horas*3600;
    int minutos = floor(n/60);
    n -= minutos*60;
    int segundos = n;

    std::cout << horas << ":" << minutos << ":" << segundos << std::endl; 

    return 0;
}