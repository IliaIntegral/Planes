#include<bits/stdc++.h>
#include "test2.cpp"
using namespace std;
class Airports {
public:
    string name;
    string city;
    float latitude;
    float longitude;
    bool status; // 0 - close, 1 - open
    vector<Planes> empty_planes();
    Airports();
    Airports(string arg_name, string arg_city, float arg_latitude, float arg_longitude, bool arg_status, vector<Planes> &arg_empty_planes) {
        name = arg_name;
        city = arg_city;
        latitude = arg_latitude;
        longitude = arg_longitude;
        status = arg_status;
        for (int i = 0; i < arg_empty_planes.size(); i++) empty_planes.push_back(arg_empty_planes[i])
    }
    void print() {
        cout << "name: " << name << '\n' << "city: " << city << '\n' << "latitude: " << latitude << '\n' << "longitude: " << longitude << '\n';
        if (status) cout << "status: " << "open" << '\n';
        else cout << "status: " << "close" << '\n';
        int num = empty_planes.size();
        for (int i = 0; i < num; i++) cout << empty_planes[i].print;
    }
};
int main() {
    Planes first("Su-57");
    Planes second("Mig-29");
    vector<Planes> vec_planes (0);
    vec_planes.push_back(first);
    vec_planes.push_back(second);
    Airports vnukovo("Vnukovo", "Moscow", 1.00, 2.000, 1, vec_planes);
    vnukovo.print;
    return 0;
}
