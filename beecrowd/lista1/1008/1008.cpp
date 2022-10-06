#include <iostream>
#include <iomanip>

int main(){

    int number = 0, hours = 0;
    double salaryHour = 0;

    std::cin >> number >> hours >> salaryHour;

    std::cout << "NUMBER = " << number << std::endl;;

    std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << salaryHour * hours << std::endl;

    return 0;
}