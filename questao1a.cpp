#include <iostream>
#include <vector>
#include <string>

int buscaLinear(const std::vector<std::string> &livros, const std::string &titulo, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        if (livros[i] == titulo) {
            return i;
        }
    }
    return -1;
}

int main() {
    int qtde;
    std::cout << "Quantos livros serão cadastrados? ";
    std::cin >> qtde;
    std::cin.ignore();

    std::vector<std::string> listaLivros(qtde);
    for (int i = 0; i < qtde; ++i) {
        std::cout << "Título do livro " << i << ": ";
        std::getline(std::cin, listaLivros[i]);
    }

    std::string titulo;
    std::cout << "\nQual título de livro voce procura?: ";
    std::getline(std::cin, titulo);

    int posicao = buscaLinear(listaLivros, titulo, qtde);

    if (posicao != -1) {
        std::cout << "Livro encontrado na posição vetor[" << posicao << "]" << std::endl;
    } else {
        std::cout << "Livro não encontrado." << std::endl;
    }

    return 0;
}
