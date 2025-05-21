#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1 = {1,2,3,4};

    cout<<vec1.size()<<" ";
    cout<<vec1.capacity()<<endl;

    vec1.push_back(5);

    cout<<vec1.size()<<" ";
    cout<<vec1.capacity()<<endl;

    vec1.pop_back();

    cout<<vec1.size()<<" ";
    cout<<vec1.capacity()<<endl;
return 0;
}