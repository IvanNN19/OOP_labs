#include<iostream>
#include<utility>
#include<memory>
#include"Figure.h"
#include"Rombus.h"
#include"Rectangle.h"
#include"Trapezoid.h"
#include"Array.h"

int main(){   

    Array<std::shared_ptr<Figure<double>>> array(3);

    std::pair<double, double> coord_romb[4] = {{2.0, 4.0}, {4.0, 4.0}, {4.0, 2.0}, {2.0, 2.0}};
    double d1_romb = 2.0;  
    double d2_romb = 3.0;  
    std::shared_ptr<Rombus<double>> romb = std::make_shared<Rombus<double>>(coord_romb, d1_romb, d2_romb);
    //array.add(romb, 0);

    std::pair<double, double> coord_rec[4] = {{1.0, 4.0}, {3.0, 4.0}, {3.0, 1.0}, {1.0, 1.0}};
    double a_rec = 2.0;
    double b_rec = 3.0;
    std::shared_ptr<Rectangle<double>> rec = std::make_shared<Rectangle<double>>(coord_rec, a_rec, b_rec);
    array.add(rec, 1);
    
    std::pair<double, double> coord_trap[4] = {{2.0, 3.0}, {4.0, 3.0}, {5.0, 1.0}, {1.0, 1.0}};
    double high_trap = 2.0;
    double AB_trap = 2.0;
    double CD_trap = 4.0;
    std::shared_ptr<Trapezoid<double>> trap = std::make_shared<Trapezoid<double>>(coord_trap, AB_trap, CD_trap, high_trap);
    array.add(trap, 2);

    array.all();
    std::cout << "\n" << "Общая площадь фигур в массиве: " << array.all_area() << "\n" << "\n";

    std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| " << "\n";
    std::cout << "Введите номер фигуры, которую вы хотите удалить: " << "\n";
    int a;
    std::cin >> a;
    array.del(a);
    std::cout << "Фигуры в массиве:" << "\n";
    array.all();
    std::cout << "\n" << "Общая площадь фигур в массиве: " << array.all_area() << "\n";

    // ПРЯМОУГОЛЬНИК
    Rectangle<double> rec1;
    std::cin >> rec1;
    std::cout << rec1;
    std::cout << "Площадь прямоугольника: " << rec1.get_area() << "\n";
    std::pair<double, double> centre3 = rec1.get_centre();
    std::cout << "Координаты геометрического центра прямоугольника: " << centre3.first << "; " << centre3.second << "\n";

    Rectangle<double> rec2;
    std::cin >> rec2;
    std::cout << rec2;
    std::cout << "Площадь прямоугольника: " << rec2.get_area() << "\n";
    std::pair<double, double> centre4 = rec2.get_centre();
    std::cout << "Координаты геометрического центра прямоугольника: " << centre4.first << "; " << centre4.second << "\n";

    if (rec1 == rec2){
        std::cout << "Прямоугольники равны." << "\n";
    } 
    else{
        std::cout << "Прямоугольники не равны." << "\n";
    }

}