#include <iostream>
using namespace std;
class Retangulo{
int x, y;
public:
Retangulo (){x =0 ; y = 0;} // Função Construtora
Retangulo operator + (Retangulo); // Função sobrecarregada do operador binário "+"
Retangulo operator - (Retangulo); // Função sobrecarregada do operador binário "+"
float Retangulo::operator * (Retangulo Temp){
this->x = this->x + Temp.x;
this->y = this->y + Temp.y;
return this->x * this->y;
}
void operator ++ ( ) // Função sobrecarregada do operador unário "++"
{ x++; y++; }
void set(int a, int b){x =a; y = b;}
void mostra(){cout << "(x= " << x << ", y= " << y << ")" << endl;};
int area () {return x * y;}
};

Retangulo Retangulo::operator + (Retangulo Temp){
Retangulo Temp2;
Temp2.x = x + Temp.x;
Temp2.y = y + Temp.y;
return Temp2;
}

Retangulo Retangulo::operator - (Retangulo Temp){
Retangulo Temp2;
Temp2.x = x - Temp.x;
Temp2.y = y - Temp.y;
return Temp2;
}
Retangulo Retangulo::operator * (float a){
Retangulo Temp2;
Temp2.x = x * a;
Temp2.y = y * a;
return Temp2;
}
int main () { 
float x=2;
int z=2;
Retangulo A, B, C;
A.set(1,2);
B.set(3,4);
A.mostra();
B.mostra();

C = A + B;
C.mostra();
C = A - B;
C.mostra();
C = A * 8;
C.mostra();
C = B * A;
C.mostra();
++C;
C.mostra();
return 0;
}
