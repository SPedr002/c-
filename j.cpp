#include <iostream>
#include <cstring>
using namespace std;
int main () { 
char Input[256]; 
cout << "Enter a sentence: "; 
cin.getline (Input,256); 
cout << "The sentence entered is " << strlen(Input) << " characters long"<<endl;
cout<< Input<<endl;
return 0;
}