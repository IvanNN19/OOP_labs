#pragma once
#include <iostream>
#include "Figure.h"

class Square: public Figure{

    friend std::istream& operator>>(std::istream& is, Square& square);
    friend std::ostream& operator<<(std::ostream& os, const Square& square);

    public:
        Square();
        Square(double coord[8], double& diag);
        Square(const Square& other);
        //&&
        ~Square();

        virtual operator double() override;
        virtual double get_area() override;
        virtual double get_x() override;
        virtual double get_y() override;

        Square& operator=(const Square& other);
        bool operator==(const Square& other) const; //????? const posle????
    
    protected:
        double a;
};

inline std::istream& operator>>(std::istream& is, Square& square){  /* ??inline??*/
    double coord[8];
    std::cout << "input coor ..." << '\n';

    for(int i = 0; i < 8; i++){
        is >> coord[i];
        square.coord[i] = coord[i];
    }

    std::cout << "len a" << '\n';
    is >> square.a;
    std::cout << "tnx" << '\n';

    return is; //?
}   

inline std::ostream& operator<<(std::ostream& os, const Square& square){  /* ??inline??*/
    std::cout << "output coord ..." << '\n';

    for(int i = 0; i < 8; i++){
        os << i << " = " << square.coord[i] << '\n';
    }

    std::cout << "len a = " << square.a << '\n';
    return os; //?
}   