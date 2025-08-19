#include <iostream>
using namespace std;
int main() {
unsigned int value = 0;
do{
if (value%2) {
cout << "world"  << endl;
} else {
cout << "hello ";
}
value++;
}while(value/2 < 10);
return 0;
}
