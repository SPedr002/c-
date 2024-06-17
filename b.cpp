#include<iostream>
#include <cstdlib>
#include <ctime> 
#include<cmath>


using namespace std;

struct pessoa {
void gerarnascimento();
void listarpessoas(int);
char nome[100];
int idade, dia, mes, ano;
float peso, altura;
};

int main(){
int x, m=0;
float mais,menos;
srand(time(NULL));

pessoa pessoas[10];

do{
mais=0,menos=100000;
cout << "Digite o número da opção que deseja" << endl;
cout << "1 - Cadastrar as pessoas(datas de nascimento definidas aleatoriamente)"<<endl;
cout << "2 - Listar todos os dados das pessoas cadastradas"<<endl;
cout << "3 - Imprimir a média das alturas e peso"<<endl;
cout << "4 - Imprimir o nome da pessoa de maior altura"<<endl;
cout << "5 - Imprimir o nome da pessoa de menor altura"<<endl;
cout << "6 - Imprimir o nome da pessoa de maior peso"<<endl;
cout << "7 - Imprimir o nome da pessoa de menor peso"<<endl;
cout << "8 - Imprimir o nome da pessoa de maior idade"<<endl;
cout << "9 - Imprimir o nome da pessoa de menor idade"<<endl;
cout << "10 - Listar os nomes das pessoas que nasceram antes de uma certa data"<<endl;
cout << "11 - Retornar ao menu inicial"<<endl;
cout<< "12 - Sair do programa"<< endl;

cin >> x;
switch (x) {
case 1:
for(int i=0;i<10;i++){
pessoas[i].gerarnascimento();
cin.ignore();
cout << "Pessoa " << i + 1 << ":" << endl;
cout << "Nome: "<<endl;
cin.getline( pessoas[i].nome,100);
cout << "Altura (metros): "<<endl;
cin >> pessoas[i].altura;
cout << "Peso (quilogramas): "<<endl;
cin >> pessoas[i].peso;
cout << endl;
}
break;
case 2:
for(int i=0;i<10;i++){
pessoas[i].listarpessoas(i);
}
break;
case 3:{
float alturas , pesos;
for(int i = 0; i < 10; ++i) {
alturas+=pessoas[i].altura;
pesos+=pessoas[i].peso;
}
cout<<"a média das alturas é:   "<< alturas/10 <<" metros"<<endl;
cout<<"a média dos pesos é:     "<< pesos/10 <<" quilogramas"<<endl;
}
break;
case 4:{
for(int i = 0; i < 10; ++i) {
if(mais<pessoas[i].altura){
mais=pessoas[i].altura;
m=i;
}
}

cout<<pessoas[m].nome<<" é a pessoa mais alta"<<endl<<endl;
}
break;
case 5:{
for(int i = 0; i < 10; ++i) {
if(menos>pessoas[i].altura){
menos=pessoas[i].altura;
m=i;
}
}
cout<<pessoas[m].nome<<" é a pessoa mais baixa"<<endl<<endl;

}
break;
case 6:{
for(int i = 0; i < 10; ++i) {
if(mais<pessoas[i].peso){
mais=pessoas[i].peso;
m=i;
}
}
cout<<pessoas[m].nome<<" é a pessoa mais pesada"<<endl<<endl;
}
break;
case 7:{
for(int i = 0; i < 10; ++i) {
if(menos>pessoas[i].peso){
menos=pessoas[i].peso;
m=i;
}
}
cout<<pessoas[m].nome<<" é a pessoa mais leve"<<endl<<endl;
}
break;
case 8:{
for(int i = 0; i < 10; ++i) {
if(mais<pessoas[i].idade){
mais=pessoas[i].idade;
m=i;
}
}
cout<<pessoas[m].nome<<" é a pessoa mais velha"<<endl<<endl;
}
break;
case 9:{
for(int i = 0; i < 10; ++i) {
if(menos<pessoas[i].idade){
menos=pessoas[i].idade;
m=i;
}
}
cout<<pessoas[m].nome<<" é a pessoa mais nova"<<endl<<endl;
}
break;
case 10:{
int dia, mes,ano;
cout<<"digite o dia, o mês e o ano para a comparação(dd/mm/aaaa)"<<endl;
cin>>dia>>mes>>ano;
cout<<"pessoas que nasceram antes da data digitada "<<endl;
for(int i = 0; i < 10; ++i) {
if(ano < pessoas[i].ano)
cout<<pessoas[i].nome<<endl;
else if(ano == pessoas[i].ano && mes<pessoas[i].mes)
cout<<pessoas[i].nome<<endl;
else if(ano == pessoas[i].ano && mes==pessoas[i].mes && dia<pessoas[i].dia)
cout<<pessoas[i].nome<<endl;
}
cout<<endl;
}
break;
case 11:
cout << "11 - Retornando ao menu inicial"<<endl<<endl;

break;
case 12:
cout<<"saindo do programa"<<endl<<endl;
break;
default:
cout << "Opção inválida. Por favor, escolha uma opção válida." << endl;

}

}while(x!=12);
return 0;
}


void pessoa::listarpessoas(int i){
cout << "Pessoa " << i + 1 << ":" << endl;
cout << "Nome: " << nome << endl;
cout << "Data de Nascimento: " << dia << "/" << mes << "/" <<ano << endl;
cout << "Idade: " << idade << endl;
cout << "Altura: " <<altura << " metros" << endl;
cout << "Peso: " << peso << " quilogramas" << endl;
cout << endl;
}


void pessoa::gerarnascimento(){
time_t agora = time(NULL);
tm* dataatual = localtime(&agora);
int anoatual = dataatual->tm_year + 1900;
int mesatual = dataatual->tm_mon ;
int diaatual = dataatual->tm_mday;

ano = rand() % (anoatual - 1980 + 1) + 1980;
if(ano==anoatual)
mes = rand() % (mesatual+1) + 1;
else
mes = rand() % 12 + 1;
if (mes==mesatual&&ano==anoatual)
dia = rand() % diaatual +1;
else
dia = rand() % 31 + 1;
if (mes<mesatual||(mes==mesatual&&dia<=diaatual))
idade=anoatual-ano;
else
idade=anoatual-ano-1;
}

