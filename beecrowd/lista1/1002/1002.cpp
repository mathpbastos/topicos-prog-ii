#include <iostream>
#include <iomanip>

#define PI 3.14159

int main(){
    
    double r = 0;
    std::cin >> r;
    double result = PI*(r*r);
    std::cout << "A=" << std::fixed << std::setprecision(4) << result << std::endl;
}