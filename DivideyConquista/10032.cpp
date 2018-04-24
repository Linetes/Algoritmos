#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10032 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

#include <stdio.h>

int main(){
    int test, number;
    int A[100];
    scanf("%d", &test);
    while(test--) {
        scanf("%d", &number);
        int sum = 0;
        for(int i = 0; i<number; i++){
            scanf("%d", &A[i]);
            sum += A[i];
        }
        int halfs = sum/2;
        int halfn = number/2;
        long long res[halfs+1];

        for(int i = 0; i <= halfs; i++){
            res[i] = 0;
        }
        res[0] = 1;
        for(int i = 0; i<number; i++){
            for(int j = halfs; j>=A[i]; j--){
                res[j] |= res[j-A[i]]<<1LL;
            }
        }
        if(number%2){
           while(!(res[halfs]&(1LL<<halfn)) && !(res[halfs]&(1LL<<(halfn+1)))){
                halfs--;
            }
        }
        else{
            while(!(res[halfs]&(1LL<<halfn))){
                halfs--;
            }
        }
        printf("%d %d\n", halfs, sum-halfs);
        if(test){
           puts("");
        }
    }
    return 0;
}
