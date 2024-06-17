#include <iostream>
#include <cstring>
using namespace std;

int main (){
string nome= "Helena Uva";
string sobrenome("Fernande");
nome+= " Maria ";
nome+= sobrenome;
nome+= 'z';

cout<< nome<<endl;

string mudar ="Uva";

if(nome.find(mudar)!=-1)
nome.replace(nome.find(mudar),mudar.length(),"Banana");

cout<<nome<< endl;

mudar ="Maria";
if(nome.find(mudar)!=-1)
nome.replace(nome.find(mudar), mudar.length(),"Mariana");
cout<< nome<<endl;

nome= "Maria Aparecida";
cout<< nome <<endl;

return 0;
}