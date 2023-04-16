#include<bits/stdc++.h>
#include "Planes.h"
#include "Airports.h"
using namespace std;

class Airports::Airports {
public:
    string name;
    string city;
    float latitude;
    float longitude;
    bool status; // 0 - close, 1 - open
    Airports::Airports() {
        name = "NO_NAME";
        city = "NO_CITY";
        latitude = 0;
        longitude = 0;
        status = 1;
    }
    Airports::Airports(string arg_name, string arg_city, float arg_latitude, float arg_longitude, bool arg_status) {
        name = arg_name;
        city = arg_city;
        latitude = arg_latitude;
        longitude = arg_longitude;
        status = arg_status;
    }
    void Airports::print() {
        cout << "name: " << name << '\n' << "city: " << city << '\n' << "latitude: " << latitude << '\n' << "longitude: " << longitude << '\n';
        if (status) cout << "status: " << "open" << '\n';
        else cout << "status: " << "close" << '\n';
    }
    Airports Airports::where_we_go(float currently_lat, float currently_lon, Planes plane) {
        // время в часах
        float time_left = plane.fuel_left / plane.fuel_consumption;
        float range = plane.speed * time_left; // сколько км осталось в запасе у самолета
        vector<Airports> airports_where_we_can_go;
        vector<Airports> data_base_airports; // из бд все аэропорты
        Airports aaa("AAaa", "anapa", 112.00, 212.000, 1);
        Airports bbb("Bbb", "barnaul", 1120.00, 2012.000, 1);
        data_base_airports.push_back(aaa);
        data_base_airports.push_back(bbb);
        for (int i = 0; i < data_base_airports.size(); i++) {//добавляем токо те в которых хорошая погода и по пкти к которым есть запасные
            if (pow(currently_lat - data_base_airports[i].latitude, 2) + pow(currently_lon - data_base_airports[i].longitude, 2) < pow(range - 1000, 2)) {
                airports_where_we_can_go.push_back(data_base_airports[i]);
            }
        }
        //список аэропортов куда можно лететь пополнен осталось выбрать куда хотим лететь
        /*
        for (int i = 0; i < airports_where_we_can_go.size(); i++) {
            cout << i << " = " << airports_where_we_can_go[i].city << '\n';
        }
        int number;
        cin >> number;
        return airports_where_we_can_go[number];
        */
        return airports_where_we_can_go[0];
    }
};
int main() {}
