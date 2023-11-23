#include <iostream>
#include <cmath>
#include "Square.h"

Square::Square() : Figure(){
    a = 0;
}

Square::Square(double coord[8], double& a) : Figure(coord){
    this->a = a;
}

Square::Square(const Square& other) : Figure(other){
    this->a = other.a;
}

Square::~Square(){
    a = 0;
}

Square::operator double(){
    area = pow(a, 2);
    return area;
}

double Square:: get_area(){
    area = pow(a, 2);
    return area;
}

double Square:: get_x(){
    point_x = (coord[0]+coord[2]+coord[4]+coord[6])/4;
    return point_x;
}
double Square:: get_y(){
    point_y = (coord[1]+coord[3]+coord[5]+coord[7])/4;
    return point_y;
}

Square& Square::operator=(const Square& other){ //blat & otkuda ebn@!!!
    if(this != &other){
        for(int i = 0; i < 8; i++){
            this->coord[i] = other.coord[i];
        }
        this->a = other.a;
    }
    return *this; //????*???
}

bool Square::operator==(const Square& other) const{
    if(this->a != other.a){
        return false;
    }
    return true;
}









