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
 * Actividad de programación: Problema 10656 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int main(){
	int N, A[1000],i;
	while(cin >> N && N){
		int auxA[1000], aux = 0;

		for(i=0; i<N; i++){
			scanf("%d", &A[i]);
			if(A[i] > 0)
				auxA[aux++] = A[i];
		}
		if(aux == 0){
            puts("0");
		}
		else{
			for(i=0; i<aux-1; i++){
                printf("%d ", auxA[i]);
			}
			printf("%d\n", auxA[i]);
		}
	}
    return 0;
}
