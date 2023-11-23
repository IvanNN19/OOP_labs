#include "Figure.h"
#include <iostream>


Figure::Figure(){
    for(int i = 0; i < 8; i++){
        coord[i] = 0;
    }
}

Figure::Figure(double coord[8]){
    for(int i = 0; i < 8; i++){
        this -> coord[i] = coord[i];
    }
}

Figure::Figure(const Figure& other){
    for(int i = 0; i < 8; i++){
        this -> coord[i] = other.coord[i];
    }
}

//&&_?

Figure::~Figure(){
    for(int i = 0; i < 8; i++){
        coord[i] = 0;
    }
}