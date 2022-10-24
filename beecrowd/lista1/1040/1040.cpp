#include <iostream>
#include <iomanip>

int main(){
    double n1 = 0, n2 = 0, n3 = 0, n4 = 0;

    std::cin >> n1 >> n2 >> n3 >> n4;

    n1 *= 2;
    n2 *= 3;
    n3 *= 4;

    double media = (n1+n2+n3+n4)/10;

    std::cout << "Media: " << std::fixed << std::setprecision(1) << media << std::endl;
    if(media >= 7.0){
        std::cout << "Aluno aprovado." << std::endl;
    }
    else if(media >= 5.0 && media <= 6.9){
        std::cout << "Aluno em exame." << std::endl;
        double nota_exame = 0;
        std::cin >> nota_exame;
        std::cout << "Nota do exame: " << std::fixed << std::setprecision(1) << nota_exame << std::endl;
        double media_final = 0;
        media_final = (media + nota_exame) / 2;
        if(media_final >= 5.0){
            std::cout << "Aluno aprovado." << std::endl;
        }
        else{
            std::cout << "Aluno reprovado." << std::endl;
        }
        std::cout << "Media final: " << std::fixed << std::setprecision(1) << media_final << std::endl;
    }
    else{
        std::cout << "Aluno reprovado." << std::endl;
    }

}