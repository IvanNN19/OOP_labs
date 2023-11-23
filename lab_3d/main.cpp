//11_var

#include <iostream>
#include "Figure.h"
#include "Rectangle.h"

int main(){
    Rectangle sq1;
    //double c_s[8]{2.0, 4.0, 4.0, 4.0, 4.0, 2.0, 2.0, 2.0};
    std::cin >> sq1;
    std::cout << sq1;
    std::cout << sq1.a << ' ' << sq1.b << '\n';
    std::cout << sq1.get_area() << '\n';
}