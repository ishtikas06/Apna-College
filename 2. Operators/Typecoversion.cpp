#include <iostream>
using namespace std;

int main() {
// Implicit Type Conversion
char aa = 'A';
char a = aa +1;  // A is stored in memory as 65, so it automatically promoted A -> 65 then added 1
cout<<a<<endl;   // B

//Explicit Type Coversion
cout<<(int)('A');
return 0;
}