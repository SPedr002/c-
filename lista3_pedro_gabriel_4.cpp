#include <iostream>

using namespace std;

int main() {
    double x;

    cout << "Digite um valor para x: ";
    cin >> x;

    double resultado = x * x + x + 2.2;

    cout << "Para x = " << x << ", o valor de f(x) é: " << resultado << endl;

    return 0;
}
