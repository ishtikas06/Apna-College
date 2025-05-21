#include <iostream>
#include <vector> // to use vetor we need this library.
using namespace std;

int main() {
    vector<int> vec1;
    vector<int> vec2 = {1,2,3,4,5};
    vector<int> vec3 (5, -1);

    // cout<<vec1.size()<<"\n";
    // cout<<vec2.size()<<"\n";
    // cout<<vec3.size()<<"\n";

    cout<<vec3[2]; // just like array
return 0;
}