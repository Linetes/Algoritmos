#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 11900 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int main(){
    int test = 1,T,n,P,Q,a[30];

    scanf("%d",&T);

    while(T--){
        scanf("%d %d %d",&n,&P,&Q);

        for(int i = 0;i<n;++i){
            scanf("%d",&a[i]);
        }
        int res = 0;
        int sum = 0;

        for(int i=0;i<n;++i){
            if(res+1<=P && sum+a[i]<=Q){
                res++;
                sum += a[i];
            }
            else{
                break;
            }
        }
        printf("Case %d: %d\n",test++,res);
    }
    return 0;
}
