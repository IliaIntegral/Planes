#ifndef PLANES_H
#define PLANES_H

#include <string>
using namespace std;
class Planes {
public:
    string name;
    float amount_of_petrol; // в килограммах
    float fuel_consumption; // в кило/ час
    float fuel_left; // в кг
    float speed; // в км/час
    Planes();
    Planes(string arg_name, int arg_amount_of_petrol, int arg_fuel_consumption) {}
    void print(){}
};
#endif
