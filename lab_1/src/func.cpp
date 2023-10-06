#include <iostream>
#include <math.h>

#include "func.h"

int check(int q){
    float b;
    b = sqrt(q);
    if(b == int(b)){
        return 1;
    }
    return 0;
}

pair <int, int> func(int q){ 
    int M, N;
    M = q - 1; N = M - 1;
    pair<int, int> ans(0, 0);
    for(int i = M; i > N; i--){
        for(int j = N; j > 0; j--){
            //cout << i << ' ' << j <<'\n';
            if(check(i + j) == 1 && check(i - j) == 1){
                ans = make_pair(i, j);
                return ans;
                //cout << ans.first << ' ' << ans.second << '\n';
            }
        }
        N--;
    }
    return ans;

}