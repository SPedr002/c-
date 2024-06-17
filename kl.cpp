#include<iostream>

using namespace std;

int main ()
{
    char b;
    int i=0, c=0 ;
    bool ENCONTRADO=false;
    char a[]="universidade federal da paraiba";

    cout<< "digite o valor de busca"<< endl;

    cin>>b;

while (a[i]){
if(a[i] == b){
ENCONTRADO = true;
c++;
cout << "Valor encontrado na posição " << i << endl;
i++;
}
else
    i++;
}


if (ENCONTRADO == false)
cout << "Valor NÃO encontrado!" << endl;
else
cout << "Valor encontrado " << c <<" vezes"<< endl;




    return 0;
}