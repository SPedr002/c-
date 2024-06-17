#include <iostream>
using namespace std;
int exemplo(int i, int j);
int main () { 
int i = 3, j = 4, (*p)(int,int);
p = &exemplo;
cout << (*p)(12,45) << endl;
cout << (*p)(i,j) << endl; 
}
int exemplo(int i, int j){
return i * i * j;
}