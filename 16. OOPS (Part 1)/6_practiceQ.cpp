#include <iostream>
#include <string>
using namespace std;

class User {
    string id;
    string pass;

public:
    string userName;

    User(string id)
    {
        this -> id = id;
    }

    void setPass(string pass)
    {
        this -> pass = pass;
    }

    string getPass()
    {
        return pass;
    }
};

int main() {
    User u1("Ishtika Sinha");
    u1.userName = "__ishhhtika__";
    u1.setPass("attackontitan");
    cout<<"Username: "<<u1.userName<<endl;
    cout<<"Password: "<<u1.getPass()<<endl;
return 0;
}