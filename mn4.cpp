#include<iostream>
#include<fstream>
using namespace std;

int main (){

fstream arquivo;
arquivo.open("alfabeto.txt", ios::out|ios::trunc|ios::in|ios::binary);
if(!arquivo){cout<<"ERROR!"<<endl;return 1;}

char c='a';
while(c<='z')
arquivo<<c++;
arquivo<<'\n';
arquivo.seekg(10);
arquivo>>c;
cout<<"c = "<<c<<endl;

arquivo.seekp(5);
arquivo.put('x');

arquivo.seekp(-10, arquivo.end);
arquivo.put('Y');

arquivo.seekg(0);
while(!arquivo.eof()){
arquivo.get(c);
cout<<c<<endl;
}
return 0;
}