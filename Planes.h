#ifndef PLANES_H
#define PLANES_H

#include <string>
using namespace std;
class Planes {
public:
    string name;
    float amount_of_petrol; // � �����������
    float fuel_consumption; // � ����/ ���
    float fuel_left; // � ��
    float speed; // � ��/���
    Planes();
    Planes(string arg_name, int arg_amount_of_petrol, int arg_fuel_consumption) {}
    void print(){}
};
#endif
