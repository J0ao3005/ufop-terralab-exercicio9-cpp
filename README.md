# 🧮 Projeto Calculadora Matemática (Lista 9 - TerraLAB)

Este repositório foi desenvolvido como parte da Lista de Exercícios 9 da disciplina, seguindo as diretrizes do **TerraLAB** (UFOP). O objetivo principal é demonstrar o domínio sobre o sistema de versionamento **Git**, o fluxo de trabalho **GitFlow** e a prática de **TDD (Test-Driven Development)** em C++.

## 📋 Funcionalidades Implementadas

Até ao momento, as seguintes operações matemáticas foram implementadas utilizando a metodologia TDD:
- [x] **Cálculo de Fatorial**
- [x] **Cálculo da Sequência de Fibonacci**

## 📂 Estrutura de Diretórios

O projeto segue a estrutura padrão exigida:
- `\src`: Contém o código-fonte principal (`main.cpp`, `bib.cpp`).
- `\include`: Destinado a ficheiros de cabeçalho (atualmente a usar a raiz do `src` para `bib.hpp`).
- `\bin`: Diretório onde os binários e executáveis compilados são gerados.
- `\test`: Contém as rotinas de testes automatizados (`main.cpp`).
- `\doc`: Reservado para documentação futura.

## 🚀 Como Compilar e Executar

Este projeto utiliza um `Makefile` simples para gerir a compilação. Para compilar e correr os testes de regressão, certifique-se de que tem o compilador `g++` (ou `mingw32-make` no Windows) instalado e execute os seguintes comandos na raiz do projeto:

### 1. Compilar os Testes
```bash
make test