#include<bits/stdc++.h>
#include "Airports.h"
#include "dis_between_two_points.h"
#include "where_we_go.h"
using namespace std;

/*
Airports where_we_go(float currently_lat, float currently_lon, Planes plane) {
    // ����� � �����
    float time_left = plane.fuel_left / plane.fuel_consumption;
    float range = plane.speed * time_left; // ������� �� �������� � ������ � ��������
    vector<Airports> airports_where_we_can_go;
    vector<Airports> data_base_airports; // �� �� ��� ���������
    Airports aaa("AAaa", "anapa", 112.00, 212.000, 1);
    Airports bbb("Bbb", "barnaul", 1120.00, 2012.000, 1);
    data_base_airports.push_back(aaa);
    data_base_airports.push_back(bbb);
    for (int i = 0; i < data_base_airports.size(); i++) {//��������� ���� �� � ������� ������� ������ � �� ���� � ������� ���� ��������
        if (pow(currently_lat - data_base_airports[i].latitude, 2) + pow(currently_lon - data_base_airports[i].longitude, 2) < pow(range - 1000, 2)) {
            airports_where_we_can_go.push_back(data_base_airports[i]);
        }
    }
    //������ ���������� ���� ����� ������ �������� �������� ������� ���� ����� ������
    for (int i = 0; i < airports_where_we_can_go.size(); i++) {
        cout << i << " = " << airports_where_we_can_go[i].city << '\n';
    }
    int number;
    cin >> number;
    return airports_where_we_can_go[number];
}
*/
vector<Airports> algo_reserve_airports(float x1, float y1, float x2, float y2) {
    vector<Airports> reserve_airports;
    vector<Airports> data_base_airports; // �� �� ��� ���������
    Airports aaa("AAaa", "anapa", 1.00, 2.000, 1);
    Airports bbb("Bbb", "barnaul", 10.00, 20.000, 1);
    data_base_airports.push_back(aaa);
    data_base_airports.push_back(bbb);
    /*
    int i = 0;
    bool f1 = 0, f2 = 0, f3 = 0;
    while(i < data_base_airports.size() && reserve_airports.size() < 3) {
        float x = data_base_airports[i].latitude;
        float y = data_base_airports[i].longitude;
        if ((!f1) && (x1 < x) && (x < ((x2 - x1)/3)) && (((x - x1)*(y2 - y1)/(x2 - x1) + y1 - 500) < y) && (y < ((x - x1)*(y2 - y1)/(x2 - x1) + y1 + 500))) {
        //if ((!f1) && (x1 < x) && (x < ((x2 - x1)/3)) && (y <  500)) {

            reserve_airports.push_back(data_base_airports[i]);
            f1 = 1;
            i++;
        } else if (!f2 && (x2 - x1)/3 < x && x < 2*(x2 - x2)/3 && (x - x1)*(y2 - y1)/(x2 - x1) + y1 - 500 < y && y < (x - x1)*(y2 - y1)/(x2 - x1) + y1 + 500) {
            reserve_airports.push_back(data_base_airports[i]);
            f2 = 1;
            i++;
        } else if (!f3 && 2*(x2 - x1)/3 < x && x < x2 && (x - x1)*(y2 - y1)/(x2 - x1) + y1 - 500 < y && y < (x - x1)*(y2 - y1)/(x2 - x1) + y1 + 500) {
            reserve_airports.push_back(data_base_airports[i]);
            f3 = 1;
            i++;
        } else
            i++;
    }
    return reserve_airports;*/
    return data_base_airports;
}
int main() {}
/*
double lat1 = 51.5007; double lon1 = 0.1246;
    double lat2 = 40.6892; double lon2 = 74.0445;
    cout << haversine(lat1, lon1, lat2, lon2) << " K.M.";
*/
