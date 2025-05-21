#include <iostream>
#include<cstring>
using namespace std;

void uppercase(char *word, int n)
{
    for(int i = 0; i < n; i++)
    {
        char ch = word[i];
        if(ch >= 'A' && ch <= 'Z'){
            continue;
        }
        else{
            word[i] = ch - 'a' + 'A';
        }
    }
}

int main() {
    char word[] = "aPpLe";
    int n = strlen(word);
    uppercase(word, n);
    cout<<word;
return 0;
}