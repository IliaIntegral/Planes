#include<bits/stdc++.h>
#include "dis_between_two_points.cpp"
using namespace std;

Airports where_we_go(float currently_lat, float currently_lon, Planes plane) {
    // время в часах
    float time_left = plane.fuel_left / plane.fuel_consumption;
    float range = plane.speed * time_left; // сколько км осталось в запасе у самолета
    vector<Airports> airports_where_we_can_go;
    data_base_airports // из бд все аэропорты
    for (int i = 0; i < data_base_airports; i++) {//добавляем токо те в которых хорошая погода и по пкти к которым есть запасные
        if (pow(currently_lat - data_base_airports[i].latitude, 2) + pow(currently_lon - data_base_airports[i].longitude, 2) < pow(range - 1000, 2)) {
            airports_where_we_can_go.push_back(data_base_airports[i]);
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
vector<Airports> algo_reserve_airports(float x1, float y1, float x2, float y2) {
    vector<Airports> reserve_airports;
    int i = 0;
    bool f1 = 0, f2 = 0, f3 = 0;
    while(reserve_airports.size() < 3) {
        float x = data_base_airports[i].latitude;
        float y = data_base_airports[i].longitude;
        if (!f1 && x1 < x && x < (x2 - x2)/3 && ) {
            reserve_airports.push_back(data_base_airports[i]);
            f1 = 1;
            i++;
        } else if (!f2 && (x2 - x2)/3 < x && x < 2*(x2 - x2)/3 && ) {
            reserve_airports.push_back(data_base_airports[i]);
            f2 = 1;
            i++;
        } else if (!f3 && 2*(x2 - x2)/3 < x && x < x2 && ) {
            reserve_airports.push_back(data_base_airports[i]);
            f3 = 1;
            i++;
        } else
            i++;
    }
    return reserve_airports;
}
/*
double lat1 = 51.5007; double lon1 = 0.1246;
    double lat2 = 40.6892; double lon2 = 74.0445;
    cout << haversine(lat1, lon1, lat2, lon2) << " K.M.";
*/
