#include <iostream>

int main(){

    int x = 0, y = 0, z = 0;

    std::cin >> x >> y >> z;

    int maior = (x+y+abs(x-y))/2;
    maior = (maior+z+abs(maior-z))/2;

    std::cout << maior << " eh o maior" << std::endl;

    return 0;
}