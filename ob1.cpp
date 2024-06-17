#include <iostream>
using namespace std;
class Retangulo {
int x, y;
public:
// Função construtora
Retangulo () {x = 1; y = 1;}
// Função destrutora
~Retangulo (){
cout << "Objeto destruido" << endl;
}
int area () {return x*y;}
};
int main () {
for (int i =1; i < 10; i++){
Retangulo Ret;
cout << "Area = " << Ret.area() << endl;
}
return 0;
}
