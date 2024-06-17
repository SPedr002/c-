#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int x;

	do{
		cout<<"digite um numero para a opção desejada"<< endl;
		cout<<"questão (a) =1, questão (b)=2, questão (c)=3, questão (d)=4, questão(e)=5"<<endl;
		cin>>x;
		if(x==1)
		{
			int a , b;
			cout<<"digite dois valores em sequência"<<endl;
			cin>>a>>b;
			cout<<"soma = "<<a+b<<" subtração = "<<a-b<<" multiplicação = "<<a*b<<" divisão = "<<a/b<<endl;
			cout<<"menor valor="<<endl;
			if(a > b)
			{
				cout<<b<<endl;
			}
			else
				cout<<a<<endl;
		}
		else if(x==2)
                {
                        float ad, op, hip;
                        cout<<"digite os catetos"<<endl;
                        cin>>ad>>op;
                        cout<<"hipotenusa ="<<hypot(ad,op);
                        cout<<"perimetro ="<<ad+op+hypot(ad,op);
                }
		else if(x==3)
		{
		float fa, fb, fm;
		cout<<"digite os valores de a,  b e x_maximo"<<endl;
		cin>>fa>>fb>>fm;
		for(int i=0;i<=fm;i++)
		{
		cout<<"fx="<<fa*i+fb<<endl;
		}
		}
		else if(x==4)
		{
		float fx, fy, fz,fp, fo;
                cout<<"digite os valores de a, b, c, x_minimo e x_maximo"<<endl;
                cin>>fx>>fy>>fz>>fp>>fo;
                for(int i=fo;i<=fp;i++)
                {
                cout<<"fx="<<fx*i*i+fy*i+fz<<endl;
                }
		}
		else if(x==5)
		{
		float va, so=0;
		do{
		cout<<"digite um valor"<<endl;
		cin>>va;
		so=so+va;
		cout<<so;
		}while(va != 0);
		}
		else
			cout<<"opção invalida";
		cout<<"digite 0 para parar"<<endl;
		cin >> x;

	}while(x != 0);
	return 0;
	}
