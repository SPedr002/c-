#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
int main() {
int n, posicao;
string nome;
fstream Entrada("saida2.txt", ios::in|ios::out);
if (! Entrada) { cout << "Erro!" << endl; return 1; }
cout << "Digite o numero do registro: " << endl;
cin >> n;
posicao = (n-1)*(10 + 50 + 1) + 10;
// 10 de numero, 50 de nome, 2 <CR><LF> e 10 de numero
Entrada.seekg(posicao);
getline (Entrada, nome, '\n');
cout << nome;
cout << endl << "Digite o novo nome:" << endl;
cin.ignore(); // Ignora o <Enter>
nome.clear();
nome.resize(50);
getline (cin, nome, '\n');
Entrada.seekp(posicao);
Entrada << left << setw(50) << nome << endl;
return 0;
}
