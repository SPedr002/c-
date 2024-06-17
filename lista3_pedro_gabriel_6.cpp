#include <iostream>

using namespace std;

int main() {
    int idade;

    cout << "Digite a sua idade: ";
    cin >> idade;

    if (idade <= 10) {
        cout << "Você é uma criança." << endl;
    } else if (idade <= 15) {
        cout << "Você é um adolescente." << endl;
    } else if (idade <= 25) {
        cout << "Você é um jovem." << endl;
    } else {
        cout << "Você é um adulto." << endl;
    }

    return 0;
}

