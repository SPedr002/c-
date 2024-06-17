#include <iostream>

#define PI 3.14

using namespace std;

int main() {
    float raio;

    cout << "Digite o raio do círculo: ";
    cin >> raio;

    float diametro = 2 * raio;
    float perimetro = 2 * PI * raio;
    float area = PI * raio * raio;

    cout << "Diâmetro: " << diametro << endl;
    cout << "Perímetro: " << perimetro << endl;
    cout << "Área: " << area << endl;

    return 0;
}

