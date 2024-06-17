#include <iostream>
#include <locale>

int main() {
    // Define o local para português
    std::setlocale(LC_ALL, "pt_BR.UTF-8"); // Português do Brasil UTF-8

    // Exemplo de uso: imprime um número formatado de acordo com o local
    double valor = 1234.56;
    std::cout.imbue(std::locale("")); // Define o local para cout
    std::cout << "Valor: " << valor << std::endl;

    return 0;
}