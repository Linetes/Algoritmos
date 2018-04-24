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
 * Actividad de programación: Problema 108 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int main(){
    int numbers[100][100];
    int N,res;
    int sum[100][101];
    int dp[101];

    while(cin >> N && N){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                scanf("%d",&numbers[i][j]);
            }
        }
        for(int i=0;i<N;i++){
            sum[i][0]=0;
            for(int j=1;j<=N;j++){
                sum[i][j]=sum[i][j-1]+numbers[i][j-1];
            }
        }

        res=0;

        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                dp[0]=0;
                for(int k=0;k<N;k++){
                    dp[k+1]=max(sum[k][j+1]-sum[k][i]+dp[k],sum[k][j+1]-sum[k][i]);
                    res=max(res,dp[k+1]);
                }
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
