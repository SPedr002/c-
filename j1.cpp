#include<iostream>
#include<cstring>
#include <clocale>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

void entrasenha(char []);
void imprimirArray(const char [], const int);
void teste( char []);
void posicaoCaractere();
void nomesOrdemAlfabetica();
void menorMaiorValor();
void multiplicarMatriz(float matriz[3][3], float multiplicador);
float determinanteMatriz(float matriz[3][3]);
void transpostaMatriz(float matriz[3][3]);

int main() {
    int x;
    char  senha[8];
    float matriz[3][3];
    do {
        cout << "Digite o número da opção que deseja" << endl;
        cout << "1 - Testar caracteres de uma senha de 8 dígitos" << endl;
        cout << "2 - Encontrar posição de um caractere em uma string" << endl;
        cout << "3 - Ordenar nomes em ordem alfabética" << endl;
        cout << "4 - Encontrar menor e maior valor em uma matriz 3x3" << endl;
        cout << "5 - Multiplicar matriz por um número e calcular determinante" << endl;
        cout << "6 - Sair" << endl;
    
        cin >> x;
        switch (x) {
            case 1:
                cout << "Digite uma senha de 8 dígitos com pelo menos uma letra maiúscula, uma letra minúscula e um algarismo" << endl;
                entrasenha(senha);
                imprimirArray(senha, 8);
                teste(senha);
                break;
            case 2:
                posicaoCaractere();
                break;
            case 3:
                nomesOrdemAlfabetica();
                break;
            case 4:
                menorMaiorValor();
                break;
            case 5:
                cout << "Digite os elementos da matriz 3x3:\n";
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        cout << "Elemento [" << i << "][" << j << "]: ";
                        cin >> matriz[i][j];
                    }
                }
                char opcao;
                cout << "Escolha uma opção:\n";
                cout << "a) Multiplicar todos os elementos da matriz por um dado número e imprimir a matriz resultante.\n";
                cout << "b) Calcular e imprimir o determinante da matriz.\n";
                cout << "c) Calcular e imprimir a transposta da matriz.\n";
                cin >> opcao;
                switch (opcao) {
                    case 'a': {
                        float multiplicador;
                        cout << "Digite o valor pelo qual multiplicar os elementos da matriz: ";
                        cin >> multiplicador;
                        multiplicarMatriz(matriz, multiplicador);
                        break;
                    }
                    case 'b': {
                        float det = determinanteMatriz(matriz);
                        cout << "Determinante da matriz: " << det << endl;
                        break;
                    }
                    case 'c': {
                        transpostaMatriz(matriz);
                        break;
                    }
                    default:
                        cout << "Opção inválida." << endl;
                }
                break;
            case 6:
                cout << "Saindo do programa" << endl;
                break;
            default:
                cout << "Opção inválida" << endl;
        }
    } while (x != 6);
    return 0;
}

void entrasenha(char senha[]) {
    for (int n = 0; n < 8; n++) {
        cout << n << ": ";
        cin >> senha[n];
    }
}

void teste(char senha[]) {
    bool temMinuscula = false;
    bool temMaiuscula = false;
    bool temAlgarismo = false;

    for (int i = 0; i < 8; i++) {
        if (islower(senha[i])) 
            temMinuscula = true;
        else if (isupper(senha[i])) 
            temMaiuscula = true;
        else if (isdigit(senha[i])) 
            temAlgarismo = true;
    }

    if (!temMinuscula) 
        cout << "A senha deve conter pelo menos uma letra minúscula." << endl;
    if (!temMaiuscula) 
        cout << "A senha deve conter pelo menos uma letra maiúscula." << endl;
    if (!temAlgarismo) 
        cout << "A senha deve conter pelo menos um algarismo." << endl;
    if (temMinuscula && temMaiuscula && temAlgarismo)
        cout << "Senha OK" << endl; 
}

void imprimirArray(const char array[], const int n) {
    for (int i = 0; i < n; i++)
        cout << i << ":\t" << array[i] << endl;
}

void posicaoCaractere() {
    string str;
    char caractere;
    cout << "Digite uma string: ";
    cin >> str;
    cout << "Digite o caractere a ser encontrado: ";
    cin >> caractere;

    size_t pos = str.find(caractere);
    if (pos != string::npos) {
        cout << "O caractere '" << caractere << "' foi encontrado na posição " << pos << " da string.\n";
    } else {
        cout << "O caractere '" << caractere << "' não foi encontrado na string.\n";
    }
}

void nomesOrdemAlfabetica() {
    string nomes[3];
    cout << "Digite 3 nomes:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Nome " << i + 1 << ": ";
        cin >> nomes[i];
    }
    sort(nomes, nomes + 3);
    cout << "Nomes em ordem alfabética:\n";
    for (int i = 0; i < 3; i++) {
        cout << nomes[i] << endl;
    }
}

void menorMaiorValor() {
    int matriz[3][3];
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int menor = matriz[0][0];
    int maior = matriz[0][0];
    int menorLinha, menorColuna, maiorLinha, maiorColuna;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                menorLinha = i;
                menorColuna = j;
            }
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                maiorLinha = i;
                maiorColuna = j;
            }
        }
    }

    cout << "Menor valor: " << menor << ", Linha: " << menorLinha << ", Coluna: " << menorColuna << endl;
    cout << "Maior valor: " << maior << ", Linha: " << maiorLinha << ", Coluna: " << maiorColuna << endl;
}

void multiplicarMatriz(float matriz[3][3], float multiplicador) {
    cout << "Matriz resultante:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] *= multiplicador;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

float determinanteMatriz(float matriz[3][3]) {
    float det = 0;
    det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[2][1] * matriz[1][2]) -
          matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[2][0] * matriz[1][2]) +
          matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[2][0] * matriz[1][1]);
    return det;
}

void transpostaMatriz(float matriz[3][3]) {
    float transposta[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    cout << "Transposta da matriz:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }
}

