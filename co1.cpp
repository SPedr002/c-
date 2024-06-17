#include <iostream>
#include <vector>
using namespace std;
int main (){
vector<int> X;
for (int i=0; i<100; i++) X.push_back(i);
cout << "size: " << (int) X.size() << '\n';
cout << "capacity: " << (int) X.capacity() << '\n';
cout << "max_size: " << (unsigned int) X.max_size() << '\n';
for (int i=0; i<100; i++) X.push_back(i);
cout << "size: " << (int) X.size() << '\n';
cout << "capacity: " << (int) X.capacity() << '\n';
cout << "max_size: " << (int) X.max_size() << '\n';
return 0;
}
