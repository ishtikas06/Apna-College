#include <iostream>
#include <cstring> // Required to use strlen()
using namespace std;

int main() {
    char work[] = "code";
    char str2[5] = "code";
    char str3[] = {'c','o','d','e','\0'};
    char str4[50] = {'c','o','d','e','\0'};
    cout<<strlen(work);
return 0;
}