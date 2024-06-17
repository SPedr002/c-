#include<iostream>
#include<cmath>

using namespace std;

class car{
float tanque=0, odometro=0,disponivel=0 ;

public:

void abastecer(float q){

tanque+=q;

if(tanque>=50)
tanque=50;

if(tanque<=0)
tanque=0;

cout<<"Quantidade de litros no tanque : "<< tanque<<endl;

disponivel=tanque*10;

}

void andar(float d){

tanque-=d/10;

if(tanque<=0){
odometro+=disponivel;
tanque=0;
cout<<"Distância do percorrida : "<<disponivel<<" quilometros"<<endl;

}

else{
odometro+=d;
cout<<"Distância do percorrida : "<<d<<" quilometros"<<endl;
}

disponivel=tanque*10;

}

void mostrar(){

cout<<"Tanque : "<<tanque<<" litros"<<endl;
cout<<"Total percorrido : "<<odometro<<" quilometros"<< endl;

}
};

int main(){

car carro1, carro2;

cout<<"O carro 1 abastece 20 litros" <<endl; 
carro1.abastecer(20);

cout<<"O carro 2 abastece 30 litros" <<endl;
carro2.abastecer(30);

cout<<"O carro 1 vai percorrer 200 km" << endl;
carro1.andar(200);

cout<<"O carro 2 vai percorrer 400 km" << endl;
carro2.andar(400);

cout<<"Carro 1 :"<<endl;
carro1.mostrar();

cout<<"Carro 2 :"<<endl;
carro2.mostrar();

return 0;
}

