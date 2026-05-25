#include "../include/Produto.h"

Produto::Produto(std::string nome, int id, int quantidade, double preco) {
    this->nome = nome;
    this->id = id;
    this->quantidade = quantidade;
    this->preco = preco;
}

std::string Produto::getNome() const { return nome; }
int Produto::getId() const { return id; }
int Produto::getQuantidade() const { return quantidade; }
double Produto::getPreco() const { return preco; }