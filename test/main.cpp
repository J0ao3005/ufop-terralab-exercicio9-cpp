#include <iostream>
#include "bib.hpp"

void testar(bool condicao, const std::string& nomeTeste){
    if(condicao){
        std::cout << "[PASSOU] " << nomeTeste << std::endl;
    } else {
        std::cout << "[FALHOU] " << nomeTeste << std::endl;
    }
}

int main() {
    std::cout << "--- Iniciando Testes ---" << std::endl;

    testar(fatorial(0) == 1, "Fatorial de 0");
    testar(fatorial(5) == 120, "Fatorial de 5");

    std::cout << "--- Fim dos Testes ---" << std::endl;
    return 0;
}