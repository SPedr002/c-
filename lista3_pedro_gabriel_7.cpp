#include <iostream>

using namespace std;

int main() {
    int altura;

    cout << "Digite um valor entre 2 e 10 para a altura da pirâmide: ";
    cin >> altura;

    if (altura < 2 || altura > 10) {
        cout << "Valor inválido. Deve estar entre 2 e 10." << endl;
        return 1;
    }

    for (int i = 1; i <= altura; i++) {
        for (int j = 0; j < altura - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

