#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
    int n, k, cont=1, pos=0, aux=0;
    cin >> n >> k;
    int v[n];
    for(int i=0; i<n; i++) cin >> v[i];
    qsort (v, n, sizeof(int), compare);
    for (int i=1; i<=n; i++){
            if(cont < k){
                if(v[n-i] == v[n-i-1] || v[n-i] > v[n-i-1]) cont++;
            }else{
                pos = (n-i)+aux;
                if(v[pos] == v[n-i-1]) cont++;
                aux++;
            }
    }
    cout << cont << endl;
    return 0;
}
