#include<iostream>
#include <cmath>

using namespace std;

class circle{
float r, a, x, y;
float comparea(){
return 3,14*r*r;
};
float compper(){
return 3,14*2*r;
};

public:
void setr(){
cout<<"digite o raio do circulo"<<endl;
cin>>r;
}
void increser(){
cout<<"Quantos porcento o raio deve aumentar"<<endl;
cin>>a;
r=r*(1+a/100);
}
void setxy(){
cout<<"Qual a posição do centro do circulo em relação a X?"<<endl;
cin>>x;
cout<<"\nQual a posição do centro do circulo em relação a Y?"<<endl;
cin>>y;
}
void getr(){
cout<<"O tamanho do raio é : "<<r<<endl;
}

void getxy(){
cout<<"A posição do centro do circulo em relação a X e Y é : ("<<x<<","<<y<<")"<<endl;
}
void geta(){
a=comparea();
cout<< "A area do circulo é : "<<a<<endl;
}
void getd(){
cout<<"A distancia do centro até a origem é : "<<abs(hypot(x, y)-r)<<endl;
}

};

int main(){
int x;
circle circulo;
do{
cout << "Digite o número da opção que deseja:" << endl;
cout << "1 - Definir o raio do círculo, dado um número real;"<<endl;
cout << "2 - Aumentar o raio do círculo, dado um percentual de aumento;"<<endl;
cout << "3 - Definir o centro do círculo, dada uma posição (X,Y);"<<endl;
cout << "4 - Imprimir o valor do raio;"<<endl;
cout << "5 - Imprimir o centro do círculo;"<<endl;
cout << "6 - Imprimir a área do círculo;"<<endl;
cout << "7 - Imprimir a distância do círculo até o ponto de origem (0,0);"<<endl;
cout<< "8 - Sair do programa."<< endl;
cin>>x;

switch(x){
case 1:

circulo.setr();
break;

case 2:

circulo.increser();
break;

case 3:

circulo.setxy();
break;

case 4:

circulo.getr();
break;

case 5:

circulo.getxy();
break;

case 6:

circulo.geta();
break;

case 7:

circulo.getd();
break;

case 8:

cout<<"Saindo do programa!"<<endl;
break;

default:
cout<<"Opção inválida!"<<endl;
}
}while(x!=8);

return 0;
}
