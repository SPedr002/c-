#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>


using namespace std;

int main (){

int n=1;

string nome;

ofstream saida;
saida.open("saida2.txt");
if(!saida){cout<<"Error!"<<endl; return 1;}

while(1){

cout<<"Entr ecom o primeiro nome do aluno (digite 0 para sair):"<<endl;
getline(cin, nome);
if (nome=="0") break;
nome.resize(50,' ');
saida<<left<<setw(10)<< n++<<setw(50)<<nome<<endl;


}

return 0;
}