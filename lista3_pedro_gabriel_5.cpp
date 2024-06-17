#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char caracteres[5];

    cout << "Digite 5 caracteres quaisquer: ";
    for (int i = 0; i < 5; ++i) {
        cin >> caracteres[i];
    }

    bool todosNumericos = true;
    for (int i = 0; i < 5; ++i) {
        if (!isdigit(caracteres[i])) {
            todosNumericos = false;
            break;
        }
    }

    if (todosNumericos) {
        cout << "Todos os caracteres são numéricos." << endl;
    } else {
        cout << "Pelo menos um dos caracteres não é numérico." << endl;
    }

    return 0;
}

