#pragma once
#include<iostream>

class Figure{
    friend std::istream& operator>>(std::istream& is, Figure& figure);
    friend std::ostream& operator<<(std::ostream& os, const Figure& figure);

    public:
        Figure();
        Figure(double coord[8]);
        Figure(const Figure& other);
        //Figure(Figure&& other);  //?
        
        virtual ~Figure();

        virtual operator double() = 0;
        virtual double get_area() = 0;
        virtual double get_x() = 0;
        virtual double get_y() = 0;

    protected:
        double coord[8];
        double area;
        double point_x;
        double point_y;
};

inline std::istream& operator>>(std::istream& is, Figure& figure){  /* ??inline??*/
    double coord[8];
    std::cout << "input coor ..." << '\n';

    for(int i = 0; i < 8; i++){
        is >> coord[i];
        figure.coord[i] = coord[i];
    }

    std::cout << "tnx" << '\n';
    return is; //?
}   

inline std::ostream& operator<<(std::ostream& os, const Figure& figure){  /* ??inline??*/
    std::cout << "output coord ..." << '\n';

    for(int i = 0; i < 8; i++){
        os << i << " = " << figure.coord[i] << '\n';
    }

    std::cout << "end" << '\n';
    return os; //?
}   