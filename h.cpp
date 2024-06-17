#include <iostream>
using namespace std;
class quadrado {
 public:
int largura;
int comprimento;
void set_largura(int x) {largura = x;};
void set_comprimento(int y) {comprimento = y;};
};
class cubo : public quadrado {
 public:
int altura;
void set_altura(int z) {altura = z;};
};
int main () { 
cubo C;
C.set_altura(3);
C.set_largura(2); // herdada
C.set_comprimento(5); // herdada
cout << C.altura << " " << C.largura << " " << C.comprimento << endl; 
return 0;
}
