#include <iostream>
#include "bib.hpp"

void testar(bool condicao, const std::string& nomeTeste) {
    if (condicao) {
        std::cout << "[PASSOU] " << nomeTeste << std::endl;
    } else {
        std::cout << "[FALHOU] " << nomeTeste << std::endl;
    }
}

int main() {
    std::cout << "--- Iniciando Testes ---" << std::endl;

    // Testes do Fatorial
    testar(fatorial(0) == 1, "Fatorial de 0");
    testar(fatorial(5) == 120, "Fatorial de 5");

    // Testes do Fibonacci (NOVOS)
    testar(fibonacci(0) == 0, "Fibonacci de 0");
    testar(fibonacci(1) == 1, "Fibonacci de 1");
    testar(fibonacci(6) == 8, "Fibonacci de 6");

    std::cout << "--- Fim dos Testes ---" << std::endl;
    return 0;
}