#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 11059 de UVA
 * Fecha: 22-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int main(){
    int Case=1, N;
    while(cin >> N){
        int Si[N];
        for(int i = 0; i < N; i++){
            scanf("%d", &Si[i]);
        }
        long long res = 0;
        for(int i = 0; i < N; i++){
            for(int j = i; j < N; j++){
                long long aux = 1;
                for(int k = i; k <= j; k++){
                    aux *= Si[k];
                }
                res = max(res, aux);
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n",Case,res);
        Case++;
    }
    return 0;
}
