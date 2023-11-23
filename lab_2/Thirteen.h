#pragma once

#include <iostream>
#include <string>

using namespace std;

class Thirteen{
public:

// конструкторы класса
    Thirteen();
    Thirteen(const size_t & n);
    Thirteen(const initializer_list<unsigned char> &t);
    Thirteen(const string &t);
    Thirteen(const Thirteen& other);
    Thirteen(Thirteen&& other) noexcept;

//деконструктор класса
    virtual ~Thirteen() noexcept;

// методы класса
    int GetSize();
    unsigned char* GetNums();
    int translate_to_10();
    string plus(const Thirteen& other);
    string minus(const Thirteen& other);
    string big(const Thirteen& other);
    string small(const Thirteen& other);
    string equally(const Thirteen& other);

private:

    size_t _size;
    unsigned char* _nums;
    int _to_10;
};


