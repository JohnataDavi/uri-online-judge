#include <iostream>
#include <stdlib.h>
using namespace std;

int fat(int a){
    return (a>1)? fat(a-1)*a : 1;
}

int main(){
    int a;
    cin >> a;
    cout << fat(a) << endl;
    return 0;
}

