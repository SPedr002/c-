#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int main (){
vector<int> meuvetor (10);
for (unsigned i=0; i<meuvetor.size(); i++) meuvetor.at(i)=i;
cout << "size: " << meuvetor.size() << endl;
meuvetor.push_back(33);
cout << "size: " << meuvetor.size() << endl;
cout << "Meu vetor:";
for (unsigned i=0; i<meuvetor.size(); i++) cout << ' ' << meuvetor.at(i);
cout << endl;
cout << "Primeiro elemento: " << meuvetor.front() << endl;
cout << "Último elemento: " << meuvetor.back() << endl;

meuvetor.pop_back();
cout << "Meu vetor:";
for (unsigned i=0; i<meuvetor.size(); i++) cout << ' ' << meuvetor.at(i);
cout << endl;
cout << "Primeiro elemento: " << meuvetor.front() << endl;
cout << "Último elemento: " << meuvetor.back() << endl;

return 0;

}