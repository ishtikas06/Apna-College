#include <iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char *word, int n)
{
    int start = 0, end = n-1;
    while(start < end)
    {
        if(word[start] == word[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
        
    
    return true;
}

int main() {
    char word[] = "maaam";
    cout<<isPalindrome(word, strlen(word));
return 0;
}