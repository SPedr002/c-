#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void inicializarPseudoAleatorios(float [], int );
void inicializarSeno(float [], int );
void inicializarConstante(float [], int , float );
void inicializarVetor(float [], int );
void calcularMedia(float [], int );
void calcularMediaQuadratica(float [], int );
void calcularVariancia(float [], int );

int main() {
    int n;
    float *vetor;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    vetor = new float[n];
    cout << "Escolha uma opção:" << endl;
    cout << "1. Inicializar os elementos do vetor com valores pseudo-aleatórios" << endl;
    cout << "2. Inicializar os elementos do vetor com o seno do seu índice" << endl;
    cout << "3. Inicializar os elementos do vetor com um valor constante dado pelo usuário" << endl;
    cout << "4. Computar e imprimir o valor médio dos valores do vetor e desalocar a memória alocada" << endl;
    cout << "5. Computar e imprimir o valor médio quadrático dos valores do vetor e desalocar a memória alocada" << endl;
    cout << "6. Computar e imprimir o valor da variância dos valores do vetor e desalocar a memória alocada" << endl;

    int opcao;
    cin >> opcao;

    switch (opcao) {
        case 1:
            inicializarPseudoAleatorios(vetor, n);
            break;
        case 2:
            inicializarSeno(vetor, n);
            break;
        case 3:
            float valor;
            cout << "Digite o valor constante para inicializar o vetor: ";
            cin >> valor;
            inicializarConstante(vetor, n, valor);
            break;
        case 4:
            inicializarVetor(vetor, n);
	    calcularMedia(vetor, n);
            delete[] vetor;
            break;
        case 5:
            inicializarVetor(vetor, n);
            calcularMediaQuadratica(vetor, n);
	    delete[] vetor;
            break;
        case 6:
            inicializarPseudoAleatorios(vetor, n);
            calcularVariancia(vetor, n);
            delete[] vetor;
            break;
        default:
            cout << "Opção inválida." << endl;
    }

    return 0;
}

void inicializarPseudoAleatorios(float vetor[], int tamanho) {
    srand(time(nullptr)); 
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = rand() / (RAND_MAX + 1.0);
	cout<< vetor[i]<< endl;
    }
}

void inicializarSeno(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = sin(i);
	cout<< vetor[i]<<endl;
    }
}

void inicializarConstante(float vetor[], int tamanho, float valor) {
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = valor;
	cout<< vetor[i]<<endl;
    }
}

void calcularMedia(float vetor[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += vetor[i];
    }
    cout << "Valor médio dos elementos do vetor: " << soma/tamanho << endl;
}

void calcularMediaQuadratica(float vetor[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += (vetor[i] * vetor[i]);
    }
    cout << "Valor médio quadrático dos elementos do vetor: " << sqrt(soma / tamanho) << endl;
}

void calcularVariancia(float vetor[], int tamanho) {
    float media, soma=0, somaDiferencasQuadradas = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += vetor[i];
    }
    media=soma/tamanho;
    for (int i = 0; i < tamanho; ++i) {
        somaDiferencasQuadradas += (vetor[i] - media) * (vetor[i] - media);
    }
    cout << "Variância dos elementos do vetor: " << somaDiferencasQuadradas / tamanho << endl;
}

void inicializarVetor(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = i + 1;
    }
}
