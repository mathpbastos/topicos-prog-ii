#include <iostream>
#include <iomanip>

#define COMMISSION 0.15

int main(){

    char name[30];

    std::cin.getline(name, 30);

    double salary = 0, sold = 0;
    std::cin >> salary >> sold;

    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << salary + (sold * COMMISSION) << std::endl;
    
    return 0;
}