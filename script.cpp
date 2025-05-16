#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>

// Função para gerar um número aleatório dentro de um intervalo
int gerarNumeroAleatorio(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    return distrib();
}

// Função para simular o lançamento de um dado
int lancarDado() {
    return gerarNumeroAleatorio(1, 6);
}

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual
    std::srand(std::time(nullptr));

    int numDados;
    std::cout << "Quantos dados você quer lançar? ";
    std::cin >> numDados;

    if (numDados <= 0) {
        std::cout << "Por favor, insira um número positivo de dados." << std::endl;
        return 1;
    }

    std::vector<int> resultados(numDados);

    std::cout << "\nLançando os dados..." << std::endl;
    for (int i = 0; i < numDados; ++i) {
        resultados[i] = lancarDado();
        std::cout << "Dado " << i + 1 << ": " << resultados[i] << std::endl;
    }

    std::cout << "\nResultados Finais: ";
    for (int i = 0; i < numDados; ++i) {
        std::cout << resultados[i] << (i == numDados - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    // Opcional: Analisar os resultados (por exemplo, contar ocorrências)
    std::cout << "\nAnálise dos Resultados:" << std::endl;
    std::vector<int> contagem(7, 0); // Índices de 1 a 6 para os valores dos dados
    for (int resultado : resultados) {
        contagem[resultado]++;
    }
    for (int i = 1; i <= 6; ++i) {
        if (contagem[i] > 0) {
            std::cout << "O número " << i << " apareceu " << contagem[i] << " vez(es)." << std::endl;
        }
    }

    return 0;
}
