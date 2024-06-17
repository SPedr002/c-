#include <iostream>
#include <fstream>
#include <limits>
using namespace std; 
int main (void){
int p; // guarda o período
float cra; // guarda o CRA
char nome[80]; // guarda a string lida
std::ifstream entrada("teste.txt"); // abre um arquivo para leitura
if(!entrada){
cout << "O arquivo não pode ser aberto!";
return 1;
}
// Ler do arquivo
while(!entrada.eof()){
entrada.getline(nome,80);
entrada >> p;
entrada >> cra;
// Imprimir na tela

if (nome[0] != '\0') {
cout << "Nome: " << nome << endl;
cout << "Período: " << p << endl;
cout << "CRA: " << cra << endl << endl;
}
// Fechar o arquivo

entrada.ignore();
} 
entrada.close();
return 0;
}
