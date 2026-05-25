#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class Produto {
private:
    std::string nome;
    int id;
    int quantidade;
    double preco;

public:
    Produto(std::string nome, int id, int quantidade, double preco);
    std::string getNome() const;
    int getId() const;
    int getQuantidade() const;
    double getPreco() const;
};
#endif