#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double x1= 0, x2 = 0, y1 = 0, y2 = 0;

    std::cin >> x1 >> y1 >> x2 >> y2;

    double d = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

    std::cout << std::fixed << std::setprecision(4) << d << std::endl;

    return 0;
}