#include <iostream>
#include "include/Inventario.h"

int main() {
    Inventario meuEstoque;
    meuEstoque.carregarDeArquivo("data/estoque.txt");
    
    int opcao = 0;
    while (opcao != 4) {
        std::cout << "\n--- MENU GERENCIADOR ---" << std::endl;
        std::cout << "1. Listar Produtos" << std::endl;
        std::cout << "2. Adicionar Produto" << std::endl;
        std::cout << "3. Salvar Inventario" << std::endl;
        std::cout << "4. Sair" << std::endl;
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        if (opcao == 1) {
            meuEstoque.listarProdutos();
        } else if (opcao == 2) {
            std::string nome;
            int id, qtd;
            double preco;
            std::cout << "Nome: "; std::cin >> nome;
            std::cout << "ID: "; std::cin >> id;
            std::cout << "Qtd: "; std::cin >> qtd;
            std::cout << "Preco: "; std::cin >> preco;
            meuEstoque.adicionarProduto(Produto(nome, id, qtd, preco));
        } else if (opcao == 3) {
            meuEstoque.salvarEmArquivo("data/estoque.txt");
        }
    }
    return 0;
}