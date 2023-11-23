#pragma once
#include <iostream>
#include "Figure.h"
#include "Rectangle.h"

class Rectangle: public Figure{

    friend std::istream& operator>>(std::istream& is, Rectangle& rec);
    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rec);

    public:
        Rectangle();
        Rectangle(double coord[8]/*, double& a, double& b*/);
        Rectangle(const Rectangle& other);
        //&&
        ~Rectangle();

        virtual operator double() override;
        virtual double get_area() override;
        virtual double get_x() override;
        virtual double get_y() override;

        Rectangle& operator=(const Rectangle& other);
        bool operator==(const Rectangle& other) const; //????? const posle????
    
    //protected:
        double a;
        double b;
};

inline std::istream& operator>>(std::istream& is, Rectangle& rec){  /* ??inline??*/
    double coord[8];
    std::cout << "input coor ..." << '\n';

    for(int i = 0; i < 8; i++){
        is >> coord[i];
        rec.coord[i] = coord[i];
    }
    // std::cout << "len a" << '\n';
    // is >> rec.a;
    // std::cout << "len b" << '\n';
    // is >> rec.b;
    std::cout << "tnx" << '\n';

    return is; //?
}   

inline std::ostream& operator<<(std::ostream& os, const Rectangle& rec){  /* ??inline??*/
    std::cout << "output coord ..." << '\n';

    for(int i = 0; i < 8; i++){
        os << i << " = " << rec.coord[i] << '\n';
    }

    std::cout << "len a = " << rec.a << '\n';
    std::cout << "len b = " << rec.b << '\n';
    return os; //?
}   