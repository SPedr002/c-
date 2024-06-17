#include <iostream>
#include <bitset>

using namespace std;

int main() {
    char a;
    int n;

    cout << "Digite um valor char (um caractere): ";
    cin >> a;

    cout << "Digite um inteiro entre 1 e 8: ";
    cin >> n;

    if (n < 1 || n > 8) {
        cout << "Número inválido. Deve ser um inteiro entre 1 e 8." << endl;
        return 1;
    }

    bitset<8> binaryValue(a);
    cout << "O valor binário do " << n << "-ésimo bit de '" << a << "' é: " << binaryValue[8 - n] << endl;

    return 0;
}

