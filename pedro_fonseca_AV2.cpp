#include<iostream>
#include<cmath>
#include<fstream>
#include<cstring>

using namespace std;
class equacao{
private:
float a,b,c; 
public:
float raiz1, raiz2;

void seta(float x){a=x;}
void setb(float x){b=x;}
void setc(float x){c=x;}
float geta(){return a;}
float getb(){return b;}
float getc(){return c;}
equacao(){
a=0;b=0;c=0;
cout<<"Objeto criado"<<endl;
};
~equacao(){
cout<<"Objeto destruido"<<endl;
};
void computarRaiz(){
if(((b*b)-4*a*c)>0){
raiz1=(-b/(2*a))+sqrt((b*b)-4*a*c)/2*a;
raiz2=(-b/(2*a))-sqrt((b*b)-4*a*c)/2*a;
}
if(((b*b)-4*a*c)<0){
raiz1=(-b/(2*a))+(sqrt(-1)*sqrt((b*b)-4*a*c)/2*a);
raiz2=(-b/(2*a))-(sqrt(-1)*sqrt((b*b)-4*a*c)/2*a);
}
if((b*b)-4*a*c==0)
raiz1=-b/(2*a);
};
void mostrarRaiz(){
if(((b*b)-4*a*c)==0)
cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<", raiz1 = "<<raiz1<<endl;
else
cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<", raiz1 = "<<raiz1<<", raiz 2 = "<<raiz2<<endl;

};

};
 

int main(){
equacao* p;
string nome;
float a=0,b=0,c=0;
int opcao, n=0;
	do{
cout << "Escolha uma das opções abaixo:" << endl;
	cout << "1. Abrir um arquivo de texto com o nome dado pelo usuario;" << endl;
	cout << "2. Receber do usuario o numero N objetos de classe;" << endl;
	cout << "3. Por meio de um loop usando a array criada, receber do usuário os valores dos coeficientes de \n cada objeto criado e mostrar na tela os coeficientes e os respectivos zeros reais e imaginarios;" << endl;
	cout << "4. Por meio de um loop armazenar no arquivo os coeficientes e os zeros dos objetos criados;" << endl;
	cout << "5. Retornar ao menu inicial;" << endl;
	cout << "6. Sair do programa" << endl;

	cin >> opcao;

	switch (opcao) {

	case 1:{
            if(opcao==5||opcao==6){
        if(opcao==5)
            cout << "5. Retornando ao menu inicial;" << endl;
    break;
    }
    cout<<"Digite o nome do arquivo a ser criado(sem espaços)"<<endl;
    cin>>nome;
    nome+=".txt";

    ofstream saida(nome, ios::app);
    if ( !saida ){
    cout << "O arquivo não pôde ser aberto!" << endl;
    return 1;
    }
    break;
    }
    case 2:{
    if(opcao==5||opcao==6){
        if(opcao==5)
            cout << "5. Retornando ao menu inicial;" << endl;
    break;
    }
    cout<<"digite o número de equações:"<<endl;
    cin>>n;
    p = new equacao[n];

    break;
    }
    case 3:{
    if(opcao==5||opcao==6){
        if(opcao==5)
            cout << "5. Retornando ao menu inicial;" << endl;
    break;
    }
    for(int i=0;i<n;i++){
        cout<<"digite os coeficientes da equação "<<i+1<<endl;
        cout<<"a :"<<endl;
        cin>>a;
        p[i].seta(a);
        cout<<"b :"<<endl;
        cin>>b;
        p[i].setb(b);
        cout<<"c :"<<endl;
        cin>>c;
        p[i].setc(c);
        p[i].computarRaiz();
        p[i].mostrarRaiz();
    }

    break;
    }
    case 4:{
    if(opcao==5||opcao==6){
        if(opcao==5)
            cout << "5. Retornando ao menu inicial;" << endl;
    break;
    }
    ofstream saida(nome, ios::app);
    for(int i=0;i<n;i++){

    saida<<p[i].geta()<<" "<< p[i].getb()<<" "<<p[i].getc()<<" "<<p[i].raiz1<<" "<<p[i].raiz2<<endl;

    }

    
    break;
    }
    case 5:{
    cout << "5. Retornando ao menu inicial;" << endl;
    break;	
    }
    case 6:{
    cout << "6. Saindo do programa" << endl;
    }


    if(opcao==5||opcao==6){
        if(opcao==5)
            cout << "5. Retornando ao menu inicial;" << endl;
    break;
    }
    break;
    default:
    cout<<"opção inválida!"<<endl;
    }
    }while(opcao!=6);

    delete[] p;
    return 0;
}

