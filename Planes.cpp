#include<bits/stdc++.h>
using namespace std;
class Planes {
public:
    string name;
    Planes();
    Planes(string arg_name) {
        name = arg_name;
    }
    void print(){
        cout << "name: " << name << '\n';
    }
};

