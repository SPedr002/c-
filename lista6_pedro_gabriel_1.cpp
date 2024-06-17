#include <iostream>
#include <cstdlib>

#define PI 3.14159

void calcularP(float r);

using namespace std;

int main() {
	int opcao=0;

	cout << "Escolha uma das opções abaixo:" << endl;
	cout << "1. Encontrar o maior valor entre dois inteiros" << endl;
	cout << "2. Realizar operações matemáticas com dois floats" << endl;
	cout << "3. Encontrar o maior valor e seu endereço entre 10 inteiros" << endl;
	cout << "4. Preencher vetor com 100 valores double pseudo-aleatórios" << endl;
	cout << "5. Calcular o perímetro de um círculo" << endl;
	cout << "6. Sair" << endl;

	cin >> opcao;
	do{
	switch (opcao) {

	case 1:{
		int a, b;
    		int *pa = &a;
    		int *pb = &b;


  		cout << "Digite dois valores inteiros: "<< endl;
  		cin >> *pa >> *pb;

		if(*pa>*pb)

    		cout << "O maior valor entre " << *pa << " e " << *pb << " é: " << *pa << endl;

    		else
    		cout << "O maior valor entre " << *pa << " e " << *pb << " é: " << *pb << endl;
                break;
		}
        case 2:{
		float c, d;
		float *pc = &c;
		float *pd = &d;

		cout << "Digite dois valores float: ";
		cin >> c >> d;

		cout << "A Soma dos dois valores é: " << *pc + *pd << endl;
		cout << "A Subação dos dois valores é: " << *pc - *pd << endl;
		cout << "A Multiplicação dos dois valores é: " << *pc * *pd << endl;
		cout << "A Divisão dos dois valores é: " << *pc / *pd << endl;

                break;
        	}
	case 3:{
   		int str[10];
    		int *p = str;
    		int *maior = str ;

    		cout << "Digite 10 números inteiros: ";
    		for (int i = 0; i < 10; ++i) {
        	cin >> *(p+i);
        	if (*(p+i) > *maior) 
	        maior = (p+i);
	        }


		cout << "O maior valor é: " << *maior << " e seu endereço é: " << maior << endl;

                break;
		}
        case 4:{
    		double vetor[100];
    		double *ptr = vetor;

    		for (int i = 0; i < 100; ++i) {
        	*ptr = (rand() % 200 -100) / 100.0000; 
        	cout << "Endereço: " << ptr << "\t Conteúdo: " << *ptr << endl;
	        ++ptr;
    		}

                break;
		}

        case 5:{
		float r;
		void (*f)(float) = &calcularP;
		cout << "Digite o raio do círculo: ";
		cin >> r;
		(*f)(r);
                break;
		}
        case 6:{
                cout << "Saindo do programa..." << endl;
                break;
        	}
	default:{
                cout << "Opção inválida. Escolha uma opção válida." << endl;
                break;
        	}
	}
	cout<<"Se desejar sair digite 6"<< endl;
	cin >> opcao;
    }while (opcao!=6);


 
    return 0;
}

void calcularP(float r) {
cout << "O perímetro do círculo é: " << 2 * PI * r  << endl;
}
