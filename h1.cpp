#include<iostream>
#include<cstring>
using namespace std;
class Pessoa
{
string nome;
public:
Pessoa (){nome="None None None";}
void setNome(string X ){nome=X;
}
string getNome(){return nome;}
void compare(Pessoa Y ){
if(nome == Y.nome){
cout << "Nomes iguais" << endl;
}else
{
cout << "Nomes diferentes" << endl;
}
}
};
int main () {
Pessoa A, B;
A.setNome("Guilherme");
B.setNome("Leticia");
cout <<A.getNome() << endl;
cout <<B.getNome() << endl;
A.compare(B);
B.setNome("Guilherme");B.compare(A);
return 0;
}