#include<iostream>
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

class pessoa{

string nome, cpf, altura, idade;
int i;

public:

void setn(){

do{
i=0;
cout<< "digite o nome da pessoa"<<endl;
getline(cin,nome);

while(nome[i]){

if (!isalpha(nome[i]) && nome[1]!=' '){

cout << "Nome invalido! " << nome[i] << " não é alfabético"<<endl;
i++;
break;

}
else
i++;

}
}while(!isalpha(nome[(i-1)]));
};

void seti(){

do{
i=0;
cout<< "digite a idade de "<< nome<<" :"<<endl;
cin>>idade;

while(idade[i]){

if (!isdigit(idade[i])){

cout << "Idade invalida! " << idade[i] << " não é número"<<endl;
i++;
break;

}
else
i++;
}

}while(!isdigit(idade[i-1]));
};

void seta(){

do{
i=0;
cout<< "digite a altura de "<< nome<<" (metros):"<<endl;
cin>>altura;

while(altura[i]){

if (isalpha(altura[i])){

cout << "Altura invalida! " << altura[i] << " não é número"<<endl;
i++;
break;

}
else
i++;

}
}while(isalpha(altura[i-1]));

};

void setc(){
do{
i=0;
cout<< "digite o CPF de "<<nome<<" (apenas números):"<<endl;
cin>>cpf;

while(cpf[i]){

if (!isdigit(cpf[i])){

cout << "CPF invalido! " << cpf[i] << " não é número"<<endl;
i++;
break;

}
else
i++;

}
}while(!isdigit(cpf[i-1]));

};

void getn(){

cout<<"Nome :"<<endl;
cout<<nome<<endl;

}

void geti(){

cout<<"Idade :"<<endl;
cout<< idade <<endl;

}

void geta(){

cout<<"Altura :"<<endl;
cout<<altura<<endl;

}

void getc(){

cout<<"CPF :"<<endl;
cout<< cpf <<endl;

}
};

int main(){

int x,n;
pessoa *p;

do{
cout << "Digite o número da opção que deseja" << endl;
cout << "1 - Cadastrar as pessoas"<<endl;
cout << "2 - Listar todos os dados de uma  pessoa cadastrada"<<endl;
cout << "3 - Sair do programa"<< endl;

cin >> x;

switch (x){

case 1:{

cout<<"Quantas pessoas seram cadastradas?"<<endl;
cin>>n;
p=new pessoa[n];
cout<<endl;

for(int i=0;i<n;i++){

cin.ignore();

cout << "Pessoa " << i + 1 << ":" << endl;

p[i].setn();
cout<<endl;

p[i].seti();
cout<<endl;

p[i].seta();
cout<<endl;

p[i].setc();
cout << endl;
}
}
break;

case 2:{

cout<<"Número da pessoar para recuperar os dados:"<<endl;

cin>>n;

cout<<endl;

cout << "Pessoa " << n << ":" << endl;

p[n-1].getn();
cout<<endl;

p[n-1].geti();
cout<<endl;

p[n-1].geta();
cout<<endl;

p[n-1].getc();
cout << endl;
}
break;

case 3:

cout << "Saindo do programa"<< endl;

break;

default:

cout<<"Opção inválida"<<endl;
}
}while(x!=3);

delete[] p;

return 0;
}

