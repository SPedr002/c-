#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main() {
int n;
string nome;
ifstream Entrada("saida2.txt");
if (!Entrada) {cout << "Erro!" << endl; return 1; }
cout << "Digite o numero do registro: " << endl;
cin >> n;
// 10 de numero, 30 de nome e 2 <CR><LF> {1 para Linux e 2 para Windows}
Entrada.seekg((n-1)*(10 + 50 + 1) + 10);
getline (Entrada, nome, '\n');
cout << nome<<endl;
return 0;
}