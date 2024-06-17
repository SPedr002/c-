#include <iostream>

using namespace std;

namespace Maria {
    int idade = 18;
    float cre = 8.3;
}

namespace Jose {
    int idade = 21;
    float cre = 4.3;
}

namespace Pedro {
    int idade = 22;
    float cre = 7.1;
}

int main() {

    cout << "Valores de Maria:" << endl;
    cout << "Idade: " << Maria::idade << endl;
    cout << "CRE: " << Maria::cre << endl;

    cout << "Valores de Jose:" << endl;
    cout << "Idade: " << Jose::idade << endl;
    cout << "CRE: " << Jose::cre << endl;
   
    cout << "Valores de Pedro:" << endl;
    cout << "Idade: " << Pedro::idade << endl;
    cout << "CRE: " << Pedro::cre << endl;

    float mediaIdades = (Maria::idade + Jose::idade + Pedro::idade) / 3;
    float mediaCREs = (Maria::cre + Jose::cre + Pedro::cre) / 3;

    cout << "Média das Idades: " << mediaIdades << endl;
    cout << "Média dos CREs: " << mediaCREs << endl;

    return 0;
}

