#include<iostream>
#include<ctime>

using namespace std;

int main(){


time_t agora = time(NULL);
tm* dataatual = localtime(&agora);
int anoatual = dataatual->tm_year;
int mesatual = dataatual->tm_mon ;
int diaatual = dataatual->tm_mday;
cout<<endl<<anoatual<<endl<<dataatual<<endl<<&dataatual<<endl<<agora<<endl<<mesatual<<endl<<diaatual<<endl<<agora<<endl<<dataatual->tm_hour<<endl;


return 0;
}