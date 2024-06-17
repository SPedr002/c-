#include <iostream>
using namespace std;
int main(){
    int n=9;
    int *p= &n;

    cout << "Valor da variável n = " << n << endl;
    cout << "Endereço de n = " << dec << p << endl;
    cout << "Endereço de n = " << dec<<&p << endl;

    return 0;
}