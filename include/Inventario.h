#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <vector>
#include <string>
#include "Produto.h"

class Inventario {
private:
    std::vector<Produto> produtos;

public:
    Inventario();
    void adicionarProduto(Produto p);
    void listarProdutos();
    void salvarEmArquivo(std::string nomeArquivo);
    void carregarDeArquivo(std::string nomeArquivo);
};
#endif