#include <vector>
#include <iostream>

typedef struct{
    std::string nome;
    std::string sobrenome;
    int altura;
    double peso;
}Dancarino;

void selectionSort(std::vector<Dancarino>& dancarinos, int qtd){
    for(int i = 0; i< qtd; i++){
        int menor_idx = i;
        for(int j = i + 1; j < qtd; j++){
            // Por altura
            if(abs(dancarinos[j].altura - 180) < abs(dancarinos[menor_idx].altura - 180)){
                menor_idx = j;
            }
            // Por peso
            else if(abs(dancarinos[j].altura - 180) == abs(dancarinos[menor_idx].altura - 180) && abs(dancarinos[j].peso - 75) < abs(dancarinos[menor_idx].peso - 75)){
                if(dancarinos[j].peso - 75 < 0)
                    menor_idx = j;
            }
            // Pelo sobrenome
            else if(abs(dancarinos[j].altura - 180) == abs(dancarinos[menor_idx].altura - 180) && abs(dancarinos[j].peso - 75) == abs(dancarinos[menor_idx].peso - 75) && dancarinos[j].sobrenome < dancarinos[menor_idx].sobrenome){
                menor_idx = j;
            }
        }
        Dancarino aux = dancarinos[i];
        dancarinos[i] = dancarinos[menor_idx];
        dancarinos[menor_idx] = aux;
    }
}

int main(){
    int qtd = 0;
    std::cin >> qtd;
    std::vector<Dancarino> dancarinos;
    std::vector<int> alterado(qtd, -1);
    int i;

    // Preenchimento do vetor.
    for(i = 0; i<qtd; i++){
        Dancarino d;
        std::cin >> d.nome >> d.sobrenome >> d.altura >> d.peso;
        dancarinos.push_back(d);
    }

    // Impressão da lista.
    std::cout << "Lista de Dançarinos (Desordenada):" << std::endl;
    for(i=0; i < qtd; i++) {
        std::cout << "Nome: " << dancarinos[i].nome << std::endl;
        std::cout << "Sobrenome: " << dancarinos[i].sobrenome << std::endl;
        std::cout << "Altura: " << dancarinos[i].altura << std::endl;
        std::cout << "Peso: " << dancarinos[i].peso << "\n" << std::endl;
    }

    // Ordenação
    selectionSort(dancarinos, qtd);

    // Impressão da lista.
    std::cout << "Lista de Dançarinos (Ordenada):" << std::endl;
    for(i=0; i < qtd; i++) {
        std::cout << "Nome: " << dancarinos[i].sobrenome << "," << dancarinos[i].nome << std::endl;
    }

    return 0;
}