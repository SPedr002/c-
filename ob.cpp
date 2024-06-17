#include <iostream>
using namespace std;
class Retangulo {
int x, y;
public:
Retangulo (int a, int b) {
x = a;
y = b;
}
Retangulo (double a) {
x = a;
y = a;
}
Retangulo(int a){
x=y=a;
}
Retangulo(){
x=y=3;
}
void setar_valores (int, int);
int area () {return (x*y);}
void mostrar () {cout << "x = " << x << " y = " << y <<endl;}
};
void Retangulo :: setar_valores (int a, int b) {
x = a;
y = b;

}

int main () {
int a,b,c;
double d;
cout<< "digite os valores de a, b, c e d para os vertices dos retangulos 1 e 2"<< endl;
cin>> a>>b>>c>>d;
Retangulo Ret1(d);
Retangulo Ret2(a,b);
Retangulo Ret3(c);
Retangulo Ret;
cout << "Area = " << Ret.area()<< endl;
cout << "Area = " << Ret3.area()<< endl;
cout << "Area = " << Ret1.area()<< endl;
cout << "Area = " << Ret2.area()<< endl;
Ret3.mostrar();
Ret1.mostrar();
Ret.mostrar();
Ret2.mostrar();
return 0;
}
