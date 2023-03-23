#include<bits/stdc++.h>
#include "Planes.cpp"
using namespace std;

class Airports {
public:
    string name;
    string city;
    float latitude;
    float longitude;
    bool status; // 0 - close, 1 - open
    Airports();
    Airports(string arg_name, string arg_city, float arg_latitude, float arg_longitude, bool arg_status) {
        name = arg_name;
        city = arg_city;
        latitude = arg_latitude;
        longitude = arg_longitude;
        status = arg_status;
    }
    void print() {
        cout << "name: " << name << '\n' << "city: " << city << '\n' << "latitude: " << latitude << '\n' << "longitude: " << longitude << '\n';
        if (status) cout << "status: " << "open" << '\n';
        else cout << "status: " << "close" << '\n';
    }
};
