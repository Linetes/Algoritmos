#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 957 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int main(){
    int Y;
    while(cin >> Y){
        Y--;
        int P;
        scanf("%d", &P);
        int s[P];
        for(int i = 0; i<P; i++)
        scanf("%d", &s[i]);

        int c = 0;
        int j;
        int first;
        int last;
        int max = 0;

        for(int i = 0; i<P; i++){
            j = i;
            c = 0;
            while(s[j]<= s[i]+Y){
                j++;
                c++;
            }
            if(c>max){
                max = c;
                first = s[i];
                last = s[j-1];
            }
        }
        printf ("%d %d %d\n", max, first, last);
    }
    return 0;
}
