#include <iostream>
#include <string>
#include "Thirteen.h"

using namespace std;

int main(){
    cout << "Hello!" << endl;

     string s_a;
     cout << "Первое число: \n a = ";
     cin >> s_a;

     string s_b;
     cout << "Второе число: \n b = ";
     cin >> s_b;

    Thirteen a(s_a);
    Thirteen b(s_b);

    cout << '\n' << "Кол-во цифр в a : " << a.GetSize() << '\n';
    cout << "Кол-во цифр в b : " << b.GetSize() << '\n' << '\n';

    cout << "В 10й сс = " << a.translate_to_10() << '\n';
    cout << "В 10й сс = " << b.translate_to_10() << '\n' << '\n';

    cout << "a + b = " << a.plus(b) << '\n';
    cout << "a - b = " << a.minus(b) << '\n';
    cout << "b - a = " << b.minus(a) << '\n' << '\n';

    cout << "a > b : " << a.big(b) << '\n';
    cout << "a < b : " << a.small(b) << '\n';
    cout << "a = b : " << a.equally(b) << '\n' << '\n';

    return 0;
}