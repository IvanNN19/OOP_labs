#include <iostream>
#include <string>
#include "Thirteen.h"

using namespace std;

int main(){
    cout << "Hello!" << endl;

     string s_a;
     cout << "Enter the first number: \n a = ";
     cin >> s_a;

     string s_b;
     cout << "Enter the second number: \n b = ";
     cin >> s_b;

    Thirteen a(s_a);
    Thirteen b(s_b);

    cout << '\n' << "Number of digits in a : " << a.GetSize() << '\n';
    cout << "Number of digits in b : " << b.GetSize() << '\n' << '\n';

    cout << "Number a in 10 system = " << a.translate_to_10() << '\n';
    cout << "Number b in 10 system = " << b.translate_to_10() << '\n' << '\n';

    cout << "a + b = " << a.plus(b) << '\n';
    cout << "a - b = " << a.minus(b) << '\n';
    cout << "b - a = " << b.minus(a) << '\n' << '\n';

    cout << "a > b : " << a.big(b) << '\n';
    cout << "a < b : " << a.small(b) << '\n';
    cout << "a = b : " << a.equally(b) << '\n' << '\n';

    return 0;
}