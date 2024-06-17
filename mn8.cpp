#include <fstream>
#include <iostream>
using namespace std;
class RET {
 int x, y;
 public:
 void set(int a, int b){ x = a; y = b;}
 int getX(){return x;}
 int getY(){return y;}
};
int main () {
 fstream TESTE("test.txt", ios::in|ios::trunc|ios::out);
 if(!TESTE) { cerr << "Erro!" << endl; return 1; }
 RET a,b;
 a.set(2,3);
 cout << a.getX() << " " << a.getY() << endl;
 // Salvar objeto a em "test1.txt"
 TESTE.write((const char*)&a, sizeof(a));
 // Ajustando para início do arquivo
 TESTE.seekg(0,ios::beg);
 // Ler objeto RET de "test1.tex" e salvar no objeto b
 TESTE.read((char*)&b, sizeof(b));
 cout << b.getX() << " " << b.getY() << endl;
 TESTE.close();
 return 0;
}