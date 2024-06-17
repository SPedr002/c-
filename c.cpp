#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

struct aluno{
char nome_completo[100];
char curso[50];
int matricula;
float CRE;
};

int main(){

aluno s[3];
aluno joao = {"Joao de Jesus", "Engenharia", 10020, 7.4};
aluno maria, jose;
aluno* jp=&joao;

strcpy(maria.nome_completo, "Maria do Nascimento");
strcpy(maria.curso, "Matematica");
maria.matricula = 10021;
maria.CRE = 5.0;
jp->CRE=9.5;

cout << maria.nome_completo << endl;
cout << maria.curso << endl;
cout << maria.matricula << endl;
cout << maria.CRE << endl; 
cout << jp->CRE<< endl;

return 0;
}
