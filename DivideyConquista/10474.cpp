#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10474 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int numbers[10005];

int main(){
    int test = 1;
    int marbles, queries;

    while(cin >> marbles >> queries, marbles || queries){
        for(int i = 0; i < marbles; i++){
            scanf("%d",&numbers[i]);
        }
        sort(numbers, numbers + marbles);
        printf("CASE# %d:\n",test++);
        while(queries--){
            int n;
            scanf("%d",&n);

            int *iter = lower_bound(numbers, numbers + marbles, n);
            if(iter == numbers + marbles || *iter != n){
                printf("%d not found\n",n);
            }
            else{
                printf("%d found at %d\n",n,(iter - numbers) + 1);
            }
        }
    }
}
