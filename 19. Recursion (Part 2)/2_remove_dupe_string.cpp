#include <iostream>
#include <string>
using namespace std;

//with i
// void removeDupe(string str, string ans, int i, int map[26])
// {
//     if( i == str.size()){
//         cout<<"ans: "<<ans<<endl;
//         return;
//     }
//     char ch = str[i];
//     int mapIdx = (int)(ch - 'a'); // a -> 0, b -> 1...

//     if(map[mapIdx])
//     {
//         removeDupe(str, ans, i+1, map);
//     }
//     else{
//         map[mapIdx] = true;
//         removeDupe(str, ans+str[i], i+1, map);
//     }
// }

//without i
void removeDupe(string str, string ans, int map[26])
{
    if(str.size() == 0){
        cout<<"ans: "<<ans<<endl;
        return;
    }
    int n = str.size();
    char ch = str[n-1];
    int mapIdx = (int)(str[n-1] - 'a'); // a -> 0, b -> 1...
    str = str.substr(0, n-1);

    if(map[mapIdx])
    {
        removeDupe(str, ans, map);
    }
    else{
        map[mapIdx] = true;
        removeDupe(str, ans+ch, map);
    }
}

int main() {
string str = "appnnacollege";
string ans = "";
int map[26] = {false};
// removeDupe(str, ans, 0, map);
removeDupe(str, ans, map);
cout<<ans<<endl;
return 0;
}