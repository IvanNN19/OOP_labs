//11
#include "func.h"

int main(){
    int m, n, a;
    
    pair <int, int> ans (0, 0);
    cin >> a;

    if(a < 6){
        cout << "Такой пары, увы, нет :(" << endl;
    }
    else{
        ans = func(a);
        cout << "closest_pair_tonum(" << a << ") == (" << ans.first << ", " << ans.second << ")" << endl;
    }
    return 0;
}