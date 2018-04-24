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
 * Actividad de programación: Problema 10340 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int main(){
    int x, y, i, j, aux, count;
    char s[100000], t[100000];
    while(cin >> s >> t){
        x = strlen(s);
        y = strlen(t);
        count = 0;
        aux = 0;
        for(i=0; i<x; i++){
            for(j=aux; j<y; j++){
                if(s[i]==t[j]){
                    count++;
                    aux = j+1;
                    break;
                }
            }
        }
        if(count==x)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
