#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10041 de UVA
 * Fecha: 22-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int main(){
    int n, r, median, streetn[500], res;
	scanf("%d", &n);
	while (n--){
		scanf("%d", &r);
		for(int i = 0; i < r; i++){
			scanf("%d", &streetn[i]);
		}
		sort(streetn, streetn + r);
		median = streetn[r / 2];
		res = 0;
		for (int i = 0; i < r; i++){
			res += abs(median - streetn[i]);
		}
		printf("%d\n",res);
	}
	return 0;
}
