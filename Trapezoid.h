// #pragma once
// #include <iostream>
// #include "Figure.h"

// class Trapezoid: public Figure{

//     friend std::istream& operator>>(std::istream& is, Trapezoid& trap);
//     friend std::ostream& operator<<(std::ostream& os, const Trapezoid& trap);

//     public:
//         Trapezoid();
//         Trapezoid(double coord[8], double& a, double& b);
//         Trapezoid(const Trapezoid& other);
//         //&&
//         ~Trapezoid();

//         virtual operator double() override;
//         virtual double get_area() override;
//         virtual double get_x() override;
//         virtual double get_y() override;

//         Trapezoid& operator=(const Trapezoid& other);
//         bool operator==(const Trapezoid& other) const; //????? const posle????
    
//     protected:
//         double a;
//         double b;
// };

// inline std::istream& operator>>(std::istream& is, Trapezoid& trap){  /* ??inline??*/
//     double coord[8];
//     std::cout << "input coor ..." << '\n';

//     for(int i = 0; i < 8; i++){
//         is >> coord[i];
//         trap.coord[i] = coord[i];
//     }
//     std::cout << "len a" << '\n';
//     is >> trap.a;
//     std::cout << "len b" << '\n';
//     is >> trap.b;
//     std::cout << "tnx" << '\n';

//     return is; //?
// }   

// inline std::ostream& operator<<(std::ostream& os, const Trapezoid& trap){  /* ??inline??*/
//     std::cout << "output coord ..." << '\n';

//     for(int i = 0; i < 8; i++){
//         os << i << " = " << trap.coord[i] << '\n';
//     }

//     std::cout << "len a = " << trap.a << '\n';
//     std::cout << "len b = " << trap.b << '\n';
//     return os; //?
// }   