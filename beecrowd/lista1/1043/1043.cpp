#include <iostream>
#include <iomanip>

int main(){
    double a = 0, b = 0, c = 0;

    std::cin >> a >> b >> c;

    if (((a + b) > c) && ((b+c) > a) && ((a + c) > b)){
        std::cout << "Perimetro = " << std::fixed << std::setprecision(1) << a+b+c << std::endl;
    }
    else{
        std::cout << "Area = " << std::fixed << std::setprecision(1) << ((a+b)*c)/2 << std::endl; 
    }

    return 0;
}