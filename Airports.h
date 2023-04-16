#ifndef AIRPORTS_H
#define AIRPORTS_H
using namespace std;
#include <string.h>
#include "Planes.h"
class Airports {
public:
    string name;
    string city;
    float latitude;
    float longitude;
    bool status; // 0 - close, 1 - open
    Airports(){}
    Airports(string arg_name, string arg_city, float arg_latitude, float arg_longitude, bool arg_status) {}
    void print() {}
    Airports where_we_go(float currently_lat, float currently_lon, Planes plane) {}
};

#endif
