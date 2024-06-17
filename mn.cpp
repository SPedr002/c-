#include <iostream>
#include <fstream>
using namespace std; 
int main (void)
{
// abrir um arquivo para escrita (de saída)
std::ofstream saida("teste.txt");
// Teste se o arquivo foi aberto
if(!saida){
cout << "O arquivo não pode ser aberto!";
return 1;
}
// Salvando no arquivo: NOME, PERÍODO E CRA
saida << "Mateus" << endl;
saida << 5 << " " << 9.2 << endl;
// fechar arquivo
saida.close();
return 0;
}