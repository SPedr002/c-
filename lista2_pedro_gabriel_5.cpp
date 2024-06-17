#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

int main() {
    for (int angulo = 0; angulo <= 90; angulo += 5) {
        double radiano = angulo * M_PI / 180.0;
        cout << "Ângulo: " << angulo << " graus" << endl;
        cout << "Seno: " << sin(radiano) << endl;
        cout << "Cosseno: " << cos(radiano) << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}

