#include<bits/stdc++.h>
#include "Main_algo.h"
#include "Airports.h"
#include "where_we_go.h"
#include "dis_between_two_points.h"
using namespace std;

int main() {
    bool currently_weather_in_destination = 1;
//выбран самолет
    Planes first("Su-57", 10000, 5000);
    Planes second("Mig-29", 9000, 4500);
    vector<Planes> vec_planes;
    vec_planes.push_back(first);
    vec_planes.push_back(second);
//выбиран аэропорт
    Airports vnukovo("Vnukovo", "Moscow", 1.00, 2.000, 1);
    float currently_lat = vnukovo.latitude, currently_lon = vnukovo.longitude;
// запускается функция рассчета куда можно полететь туда и полетим
    Airports destination_airport;
    //Airports tmp_airport;
    destination_airport = destination_airport.where_we_go(vnukovo.latitude, vnukovo.longitude, first);
    vector<Airports> reserve_airports;  // запасные аэропорты
    reserve_airports = algo_reserve_airports(vnukovo.latitude, vnukovo.longitude, destination_airport.latitude, destination_airport.longitude);
    float distance = haversine(currently_lat, currently_lon, destination_airport.latitude, destination_airport.longitude);
//запускается процедура полета в каждый момент времени известны координаты
    while (currently_lat != destination_airport.latitude && currently_lon != destination_airport.longitude) {
        if (currently_weather_in_destination != 0) {
            fly(currently_lat, currently_lon, first, destination_airport);
        } else {
            reserve_airports = algo_reserve_airports(currently_lat, currently_lon, destination_airport.latitude, destination_airport.longitude); // это перерасчет
            if (reserve_airports.size() == 3)
                destination_airport = reserve_airports[2];
            else if (reserve_airports.size() == 2)
                destination_airport = reserve_airports[1];
            else if (reserve_airports.size() == 1)
                destination_airport = reserve_airports[0];
        }
    }
//если погода плоха, то запускается перерасчет
//после перерасчета процедура полета продолжается до тех пор пока саолет не долетит
    return 0;
}
