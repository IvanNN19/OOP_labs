#include<iostream>
#include<cmath>
#include"Rombus.h"

Rombus::Rombus(): Figure()
{
    a = 0;
}

Rombus::Rombus(double coord[8], double& a): Figure(coord)
{
    this->a = a;
}

Rombus::Rombus(const Rombus& other): Figure(other)
{
    this->a = other.a;
}

Rombus::Rombus(Rombus&& other): Figure(std::move(other))
{
    this->a = other.a;
    other.a = 0;
}

Rombus::~Rombus()
{
    a = 0;
}

///////////////////////////////////////////////////
Rombus::operator double()
{   
    area = a * b;
    return area;
} 

double Rombus:: get_area()
{
    area = a * b;
    return area;
}

double Rombus::get_centre_x()
{
    centre_x = (coord[0]+coord[2]+coord[4]+coord[6]) / 4;
    return centre_x;
}

double Rombus::get_centre_y()
{
    centre_y = (coord[1]+coord[3]+coord[5]+coord[7]) / 4;
    return centre_y;
}

Rombus& Rombus::operator=(const Rombus& other)
{
    if (this != &other){
        for (int q = 0; q < 8; q++){
            this->coord[q] = other.coord[q];
        }
        this->a = other.a;
    }
    return *this;
}

Rombus& Rombus::operator=(Rombus&& other)
{
    if (this != &other){
        for (int q = 0; q < 8; q++){
            this->coord[q] = other.coord[q];
            other.coord[q] = 0;
        }
        this->a = other.a;
        other.a = 0;
    }
    return *this;
}

bool Rombus::operator==(const Rombus& other) const
{
    if (this->a != other.a){
        return false;
    }
    return true;
}