#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>

using namespace std;

int main (){
int n=1;
string nome;
ofstream saida;
saida.open("saida2.txt");
if (!saida){cout<<"error!"<<endl;return 1;}

while(1){
cout<<"entre com o primeiro nome do aluno (digite 0 para sair): "<< endl;
getline(cin, nome);
if (nome =="0") break;
nome.resize(30,' ');
saida<< left<<setw(10)<<n++ << setw(30)<<nome<< endl;


}
return 0;
}