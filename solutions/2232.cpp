#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;


int main(){
    int n;
    long long int v, r;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> v;
        r = pow(2, v) - 1;
        printf("%d\n", r);
    }
    return 0;
}
