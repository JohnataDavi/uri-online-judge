#include<iostream>
#include <stdio.h>
using namespace std;
int main(){
    float n, m=0, c=0;
    bool cond = true;
    while(cond){
        cin >> n;
        if(n<0 || n>10) cout << "nota invalida\n";
        else{
            m+=n;
            c++;
        }
        if(c==2) cond = false;
    }
    printf("media = %.2f \n", m/c);
    return 0;
}


