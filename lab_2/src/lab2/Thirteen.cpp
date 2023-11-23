#include <iostream>
#include <string>
#include <cmath>
#include "Thirteen.h"


Thirteen::Thirteen() : _size(0), _nums{nullptr} {}
// {
//     std::cout << "Default constructor" << std::endl;
// }

Thirteen::Thirteen(const size_t &n){ //стандартная передча крч
    _size = n;
    _nums = new unsigned char [_size];
    for (size_t q = 0; q < _size ; q++){
        _nums[q] = 0;
    }
}

Thirteen::Thirteen(const initializer_list<unsigned char> &t){ //Initializer list constructor
    _size = t.size();
    _nums = new unsigned char [_size];
    size_t q = _size - 1;

    for (unsigned char num: t){
        if (!((num >= 'A' && num <= 'C') or (num >= '0' && num <= '9')))
            throw std::invalid_argument("input number does not satisfy the conditions");
        _nums[q--] = num;
    }
}

Thirteen::Thirteen(const std::string &t){
    _size = t.size();
    _nums = new unsigned char [_size];
    int q = _size - 1;

    for (size_t w = 0; w < _size; w++){ //Copy string constructor
         if (!((t[w] >= 'A' && t[w] <= 'C') || (t[w] >= '0' && t[w] <= '9')))
            throw std::invalid_argument(" input number does not satisfy the conditions");
        _nums[q] = t[w];
        q--;
    }

}

Thirteen::Thirteen(const Thirteen& other){ //Copy constructor
    _size = other._size;
    _nums = new unsigned char [_size];
    for (size_t i = 0; i < _size; i++){
        _nums[i] = other._nums[i];
    }

}

Thirteen::Thirteen(Thirteen&& other) noexcept { //Move constructor
    _size = other._size;
    _nums = other._nums;
    other._nums = nullptr;
}

// Thirteen::Thirteen(const Thirteen& other){
//     _size = other._size;
//     _nums = new unsigned char [_size];
//     for(size_t i = 0; i < _size; i++){
//         _nums[i] = other._nums[i];
//     }
// }


Thirteen::~Thirteen() noexcept {
    //_size = 0;
    delete[] _nums;  
    //_nums = nullptr;
}

//методы

int Thirteen::GetSize() {
    return this-> _size;
}

unsigned char* Thirteen::GetNums()// Получение указателя на массив _nums
{
    return _nums;
}

int Thirteen::translate_to_10()// перевод из 13 в 10 с.с.
{   
    int dop = 0;
    _to_10 = 0;
    for (int q = (_size-1); q >= 0; q--){
        if (_nums[q] == 'A'){
            dop = 10 * pow(13, q);
        }
        if (_nums[q] == 'B'){
            dop = 11 * pow(13, q);
        }
        if (_nums[q] == 'C'){
            dop = 12 * pow(13, q);
        }
        _to_10 += dop;
        if (_nums[q] != 'A' && _nums[q] != 'B' && _nums[q] != 'C'){
            _to_10 += (_nums[q] - '0') * pow(13, q);
        }
        dop = 0;
    }
    return _to_10;
}

string Thirteen::plus(const Thirteen& other)// сложение 
{
    int res = this -> _to_10 + other._to_10;
    string result;//??
    string rev_result;//????
    int w = res;
    char dop;

    while (w > 0){
        if (w % 13 == 10){
            result.append("A");
        }
        if (w % 13 == 11){
            result.append("B");
        }
        if (w % 13 == 12){
            result.append("C");
        }
        if ((w % 13 != 10) && (w % 13 != 11) && (w % 13 != 12)){
            dop = w % 13;
            result.append(to_string(dop));
        }
        w /= 13;
    }

    for (int q = result.length() - 1; q >= 0; q--){
        rev_result += result[q];
    }

    return rev_result;
}

string Thirteen::minus(const Thirteen& other)// вычитание
{
    string result;
    string rev_result;

    if (this -> _to_10 < other._to_10){
        return "negative number";
    }

    if (this -> _to_10 == other._to_10){
        return "0";
    }

    if (this -> _to_10 > other._to_10){
        int res = this -> _to_10 - other._to_10;
        int w = res;
        char dop;

        while (w > 0){
            if (w % 13 == 10){
                result.append("A");
            }
            if (w % 13 == 11){
                result.append("B");
            }
            if (w % 13 == 12){
                result.append("C");
            }
            if ((w % 13 != 10) && (w % 13 != 11) && (w % 13 != 12)){
                dop = w % 13;
                result.append(std::to_string(dop));
            }
            w /= 13;
        }

        for (int q = result.length() - 1; q >= 0; q--){
            rev_result += result[q];
        }
    }
        return rev_result;
}

// сравнение >
string Thirteen::big(const Thirteen& other)
{
    if (this -> _to_10 > other._to_10){
        return "true";
    }

    else{
        return "false";
    }
}

// сравнение <
string Thirteen::small(const Thirteen& other)
{
    if (this -> _to_10 < other._to_10){
        return "true";
    }

    else{
        return "false";
    }
}

// сравнение =
string Thirteen::equally(const Thirteen& other)
{
    if (this -> _to_10 == other._to_10){
        return "true";
    }

    else{
        return "false";
    }
}
