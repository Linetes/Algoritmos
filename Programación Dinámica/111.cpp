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
 * Actividad de programación: Problema 111 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int main(){
    int n, flag, aux;
    int x[20], y[20];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &aux);
        aux--;
        x[aux] = i;
    }

    while(1){
        flag = 0;
        for(int i=0; i<n; i++){
            if(scanf("%d", &aux) != 1){
                flag = 1;
                break;
            }
            aux--;
            y[aux] = i;
        }
        if(flag){
            break;
        }
        int dp[25][25] = {};

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(x[i-1] == y[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else{
                     if(dp[i-1][j] > dp[i][j-1]){
                        dp[i][j] = dp[i-1][j];
                     }
                     else{
                        dp[i][j] = dp[i][j-1];
                     }
                }
            }
        }
        printf("%d\n", dp[n][n]);
    }
    return 0;
}
