#include <iostream>

using namespace std;

int main() {
    double resistencia1, resistencia2, resistenciaParalelo, tensao = 10.0, corrente;

    cout << "Digite o valor da primeira resistência em Ohms: ";
    cin >> resistencia1;

    cout << "Digite o valor da segunda resistência em Ohms: ";
    cin >> resistencia2;

    resistenciaParalelo = 1 / (1 / resistencia1 + 1 / resistencia2);
    corrente = tensao / resistenciaParalelo;

    cout << "Resistência equivalente em paralelo: " << resistenciaParalelo << " Ohms" << endl;
    cout << "Corrente elétrica na associação paralela: " << corrente << " Amperes" << endl;

    return 0;
}

