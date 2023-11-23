#include <iostream>
#include <cmath>
#include "Rectangle.h"

Rectangle::Rectangle() : Figure(){
    a = 0;
    b = 0;
}

Rectangle::Rectangle(double coord[8]/*, double& a, double& b*/) : Figure(coord){
    this->a = sqrt(pow(coord[3] - coord[1], 2) + pow(coord[2]-coord[0], 2));
    this->b = sqrt(pow(coord[5] - coord[3], 2) + pow(coord[4]-coord[2], 2));
}

Rectangle::Rectangle(const Rectangle& other) : Figure(other){
    this->a = other.a;
    this->b = other.b;
}

Rectangle::~Rectangle(){
    a = 0;
    b = 0;
}

Rectangle::operator double(){
    area = a * b;
    return area;
}

double Rectangle:: get_area(){
    double a = sqrt(pow(coord[3] - coord[1], 2) + pow(coord[2]-coord[0], 2));
    double b = sqrt(pow(coord[5] - coord[3], 2) + pow(coord[4]-coord[2], 2));
    area = a*b;
    return area;
}

double Rectangle:: get_x(){
    point_x = (coord[0]+coord[2]+coord[4]+coord[6])/4;
    return point_x;
}
double Rectangle:: get_y(){
    point_y = (coord[1]+coord[3]+coord[5]+coord[7])/4;
    return point_y;
}

Rectangle& Rectangle::operator=(const Rectangle& other){ //blat & otkuda ebn@!!!
    if(this != &other){
        for(int i = 0; i < 8; i++){
            this->coord[i] = other.coord[i];
        }
        this->a = other.a;
        this->b = other.b;
    }
    return *this;
}

bool Rectangle::operator==(const Rectangle& other) const{
    if(this->a != other.a or this->b != other.b){
        return false;
    }
    return true;
}









