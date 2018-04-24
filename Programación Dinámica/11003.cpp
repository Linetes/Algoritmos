#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string.h>
using namespace std;

/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 11003 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

static const int MAX_WEIGHT = 3000, MAX_LOAD = 3000;

int main(){
    int N;
    while (cin >> N && N){

        vector<int> Weight(N + 1);
        vector<int> Load(N + 1);
        for(int i = 1; i <= N; i++){
            cin >> Weight[i] >> Load[i];
        }

        vector<int> dp(MAX_WEIGHT + MAX_LOAD + 1, 0);

        for(int box = N; box >= 1; box--){
            for(int load = Load[box]; load >= 0; load--){
                if(dp[load]){
                    dp[load + Weight[box]] = max(dp[load + Weight[box]], dp[load]+1);
                }
            }
            if(dp[Weight[box]] == 0){
                dp[Weight[box]] = 1;
            }
        }
        printf("%d\n",*max_element(dp.begin(), dp.end()));
    }
    return 0;
}
