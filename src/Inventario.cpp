#include "../include/Inventario.h"
#include <iostream>
#include <fstream>
#include <sstream>

Inventario::Inventario() {}

void Inventario::adicionarProduto(Produto p) {
    produtos.push_back(p);
}

void Inventario::listarProdutos() {
    for (const auto& p : produtos) {
        std::cout << "ID: " << p.getId() << " | Nome: " << p.getNome() 
                  << " | Qtd: " << p.getQuantidade() << " | Preco: R$" << p.getPreco() << std::endl;
    }
}

void Inventario::salvarEmArquivo(std::string nomeArquivo) {
    std::ofstream arquivo(nomeArquivo);
    for (const auto& p : produtos) {
        arquivo << p.getNome() << "," << p.getId() << "," << p.getQuantidade() << "," << p.getPreco() << "\n";
    }
    arquivo.close();
}

void Inventario::carregarDeArquivo(std::string nomeArquivo) {
    std::ifstream arquivo(nomeArquivo);
    std::string linha;
    while (std::getline(arquivo, linha)) {
        std::stringstream ss(linha);
        std::string nome, idStr, qtdStr, precoStr;
        
        if (std::getline(ss, nome, ',') && std::getline(ss, idStr, ',') && 
            std::getline(ss, qtdStr, ',') && std::getline(ss, precoStr, ',')) {
            adicionarProduto(Produto(nome, std::stoi(idStr), std::stoi(qtdStr), std::stod(precoStr)));
        }
    }
    arquivo.close();
}