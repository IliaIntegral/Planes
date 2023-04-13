#include<bits/stdc++.h>
#include "Airports.cpp"
#include "where_we_go.cpp"
using namespace std;
void fly(float lat, float lon,Planes plane, Aiports destination) { // возвращает кординаты через время дэтэ
    float dt;
    lat = lat + dt*(destination.latitude - lat);
    lon = lon + dt*(destination.longitude - lon);
    cout << "lat " << lat << '\n';
    cout << "lon " << lon << '\n';
}


