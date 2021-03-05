#include <iostream>
#include<stdio.h> 
using namespace std;
 
int main() {
        long long int fat1 = 1, fat2=0, n1=0, n2=0;;

        while(scanf("%d %d", &n1, &n2) != EOF){
                if(n1>n2){
                    for(int i = 1; i <=n1; ++i){
                        fat1 *= i;
                        if(n2==i) fat2 = fat1;
                    }
                    if(n2==0) fat2 = 1;
                    cout << fat1+fat2 << endl;
                    fat1 = 1, fat2=0;
                }else{
                    for(int i = 1; i <=n2; ++i){
                        fat1 *= i;
                        if(n1==i) fat2 = fat1;
                    }
                    if(n1==0) fat2 = 1;
                    cout << fat1+fat2 << endl;
                    fat1 = 1, fat2=0;
                }
        }
 
    return 0;
}