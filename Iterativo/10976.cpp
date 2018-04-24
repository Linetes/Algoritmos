#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10976 de UVA
 * Fecha: 26-Nov-2017
 * Autor: A01207499 César Buenfil Vázquez
 *
 *------------------------------------------------------*/

int main(){

    int k;
    while(cin >> k)
    {
        vector<pair<int, int> > res;
        for(int i = k + 1; i <= 2 * k; i++){
            if((k * i) % (i - k) == 0)
                res.push_back(make_pair((k * i) / (i - k), i));
        }
        printf("%d\n",res.size());
        for(int i = 0; i < res.size(); i++){
            printf("1/%d = 1/%d + 1/%d\n", k,res[i].first,res[i].second);
        }
    }
    return 0;
}
