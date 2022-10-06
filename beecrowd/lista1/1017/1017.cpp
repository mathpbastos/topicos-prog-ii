#include <iostream>
#include <iomanip>

int main(){
    int speed = 0, time = 0;

    std::cin >> time >> speed;

    std::cout << std::fixed << std::setprecision(3) << (speed*time) / 12.0 << std::endl;
}