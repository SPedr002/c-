#include <iostream>
#include <cmath>

using namespace std;

void questaoI() {
    char letra1, letra2;
    cout << "Digite duas letras (maiúsculas ou minúsculas): ";
    cin >> letra1 >> letra2;
    if (letra1 > letra2) {
        char temp = letra1;
        letra1 = letra2;
        letra2 = temp;
    }
    cout << "Sequência de letras entre " << letra1 << " e " << letra2 << ": ";
    for (char letra = letra1; letra <= letra2; ++letra) {
        cout << letra << " ";
    }
    cout << endl;
}

void questaoII() {
    int  a, b, ;
    double y, x, soma ;

    cout << "Digite o valor de x real: ";
    cin >> x;

    cout << "Digite o valor de a inteiro: ";
    cin >> a;

    cout << "Digite o valor de b inteiro: ";
    cin >> b;

    for (int i = x; i <= b; ++i) {
        y = a * (i + 3.00); 
	soma += y;
    }

    cout << "O somatorio dos valores de y para x de " << x << " a " << b << " é: " << soma << endl;

void questaoIII() {
    int a, b;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Raiz quadrada de todos os números inteiros no intervalo [" << a << ", " << b << "]: ";
    for (int i = a; i <= b; ++i) {
        cout << sqrt(i) << " ";
    }
    cout << endl;
}

void questaoIV() {
    int n;
    cout <<"digite o valor de n"<< endl;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j <= n - i + 1) {
                cout << j;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void questaoV() {
    double xmin, xmax, a, b, c;
    int p;
    cout << "Digite o valor de Xmin: ";
    cin >> xmin;
    cout << "Digite o valor de Xmax: ";
    cin >> xmax;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    cout << "Digite o valor do passo: ";
    cin >> p;
    for (double x = xmin; x <= xmax; x += p) {
        double fx = a * x * x + b * x + c;
        cout << "f(" << x << ") = " << fx << endl;
    }
}

void questaoVI() {
    double a, b, c;
    double delta, raizDelta, x1, x2;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    delta = b * b - 4 * a * c;
    raizDelta = sqrt(abs(delta));
    if (delta > 0) {
        x1 = (-b + raizDelta) / (2 * a);
        x2 = (-b - raizDelta) / (2 * a);
        cout << "raises reais: " << x1 << " e " << x2 << endl;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "raiz real: " << x1 << endl;
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = raizDelta / (2 * a);
        cout << "raises imaginárias: " << parteReal << " + " << parteImaginaria<< "i e " << parteReal << " - " << parteImaginaria<< "i" << endl;
    }
}

int main() {
    int opcao;
    do {
        cout << "Escolha uma opção:" << endl;
        cout << "I. Mostrar sequência alfabetica entre duas letras" << endl;
        cout << "II. Calcular valor de y" << endl;
        cout << "III. Mostrar a raiz quadrada de todos os números inteiros no intervalo" << endl;
        cout << "IV. Mostrar o padrão desejado" << endl;
        cout << "V. Mostrar valores de f(x) no intervalo" << endl;
        cout << "VI. Mostrar as raises de uma equação de segundo grau" << endl;
        cout << "0. Sair do programa" << endl;
        cout << "Digite a opção desejada: ";
        cin >> opcao;
        switch (opcao) {
            case 1:
                questaoI();
                break;
            case 2:
                questaoII();
                break;
            case 3:
                questaoIII();
                break;
            case 4:
                questaoIV();
                break;
            case 5:
                questaoV();
                break;
            case 6:
                questaoVI();
                break;
            case 0:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 0);
    return 0;
}

