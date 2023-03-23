#include<bits/stdc++.h>
#include "dis_between_two_points.cpp"
using namespace std;

Airports where_we_go(float currently_lat, float currently_lon, Planes plane) {
    // время в часах
    float time_left = plane.fuel_left / plane.fuel_consumption;
    float range = plane.speed * time_left; // сколько км осталось в запасе у самолета
    vector<Airports> airports_where_we_can_go;
    for (int i = 0; i < spisok_airports; i++) {
        if (pow(currently_lat - spisok_airports[i].latitude, 2) + pow(currently_lat - spisok_airports[i].latitude, 2) < pow(range - 1000, 2)) {
            airports_where_we_can_go.push_back(spisok_airports[i]);
        }
    }
    //список аэропортов куда можно лететь пополнен осталось выбрать куда хотим лететь
    for (int i = 0; i < airports_where_we_can_go.size(); i++) {
        cout << airports_where_we_can_go[i].city << '\n';
    }
    Airports destination_airport();
    cin >> destination_airport;
    return destination_airport;
}

/*
double lat1 = 51.5007; double lon1 = 0.1246;
    double lat2 = 40.6892; double lon2 = 74.0445;
    cout << haversine(lat1, lon1, lat2, lon2) << " K.M.";
*/
