#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& values){
    for(size_t i = 0; i < values.size() - 1; i++){
        for(size_t j = 0; j < values.size() - i - 1   ; j++){
            if(values[j] > values[j+1]){
                int aux = values[j];
                values[j] = values[j+1];
                values[j+1] = aux;
            }
        }
    }
}

int main(){
    std::vector<int> originalValues(3);
    std::vector<int> values(3);

    for(size_t i = 0; i < values.size(); i++){
        std::cin >> values[i];
    }

    originalValues = values;

    bubbleSort(values);

    for(size_t i = 0; i < values.size(); i++){
        std::cout << values[i] << std::endl;
    }

    std::cout << std::endl;

    for(size_t i = 0; i < originalValues.size(); i++){
        std::cout << originalValues[i] << std::endl;
    }

    return 0;
}