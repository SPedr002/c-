#include <iostream> // std::cout
#include <fstream> // std::ifstream
using namespace std;
int main () {
 ifstream Entrada ("alfabeto.txt");
if (Entrada) {
// Computar o comprimento do arquivo
Entrada.seekg (0, Entrada.end); // Ir para o final do arquivo
int length = Entrada.tellg(); // Ler tamanho do arquivo (posição final)
Entrada.seekg (0, Entrada.beg); // Voltar para o início do arquivo
// Alocar memoria:
char buffer[30];
// Ler dados do arquivo e salvar no buffer
Entrada.read(buffer,length);
// Imprimir o tamanho do arquivo
cout << endl << "Tamanho do arquivo: " << length << "bytes" << endl;
// Imprimir o conteúdo do arquivo
cout.write(buffer, length);
}
return 0;
}