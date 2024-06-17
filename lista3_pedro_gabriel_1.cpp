#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    if (x > y) {
        cout << "x é maior que y." << endl;
    } else if (x < y) {
        cout << "x é menor que y." << endl;
    } else {
        cout << "x é igual a y." << endl;
    }

    return 0;
}

