#include <iostream>
#include<cstring>
using namespace std;

void lowercase(char *word, int n)
{
    for(int i = 0; i < n; i++)
    {
        char ch = word[i];
        if(ch >= 'a' && ch <= 'z'){
            continue;
        }
        else{
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main() {
    char word[] = "aPpLe";
    lowercase(word, strlen(word));
    cout<<word;
return 0;
}