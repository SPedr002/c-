#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    for (int i = 2; i <= 100; i += 2) {
        cout << "Raiz quadrada de " << i << ": " << sqrt(i) << endl;
    }

    
    int valorInt;
    float valorFloat;

    cout << "Digite um  numero inteiro: ";
    cin >> valorInt;

    cout << "Digite um numero float: ";
    cin >> valorFloat;

    cout << "Raiz quadrada de " << valorInt << ": " << sqrt(valorInt) << endl;
    cout << "Raiz quadrada de " << valorFloat << ": " << sqrt(valorFloat) << endl;
    cout << "Raiz quadrada da soma dos quadrados: " << sqrt(valorInt * valorInt + valorFloat * valorFloat) << endl;

    
    float cateto1, cateto2;
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;
    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;

    float hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    cout << "Hipotenusa: " << hipotenusa << endl;

    float seno = cateto1 / hipotenusa;
    float cosseno = cateto2 / hipotenusa;
    float tangente = cateto1 / cateto2;

    cout << "Seno: " << seno << endl;
    cout << "Cosseno: " << cosseno << endl;
    cout << "Tangente: " << tangente << endl;

    return 0;
}

