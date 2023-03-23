#include<bits/stdc++.h>
#include "Main_algo.cpp"
using namespace std;

int main() {
//выбран самолет
    Planes first("Su-57", 10000, 5000);
    Planes second("Mig-29", 9000, 4500);
    vector<Planes> vec_planes;
    vec_planes.push_back(first);
    vec_planes.push_back(second);
//выбиран аэропорт
    Airports vnukovo("Vnukovo", "Moscow", 1.00, 2.000, 1);
    Airports monaco("Monaco", "Monaco", 12.00, 22.000, 1);
// запускается функция рассчета куда можно полететь туда и полетим
    destination_airport = where_we_go(vnukovo.latitude, vnukovo.longitude, first);
//запускается процедура полета в каждый момент времени известны координаты
    fly(vnukovo, first, destination_airport);
//если погода плоха, то запускается перерасчет
//после перерасчета процедура полета продолжается до тех пор пока саолет не долетит
    return 0;
}
