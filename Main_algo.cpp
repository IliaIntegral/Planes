#include<bits/stdc++.h>
#include "where_we_go.h"
#include "Airports.h"
#include "Main_algo.h"
using namespace std;
void fly(float lat, float lon, Planes plane, Airports destination) { // возвращает кординаты через время дэтэ
    float dt = 2;
    lat = lat + dt*(destination.latitude - lat);
    lon = lon + dt*(destination.longitude - lon);
    cout << "lat " << lat << '\n';
    cout << "lon " << lon << '\n';
}
int main() {}
