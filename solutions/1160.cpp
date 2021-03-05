#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    float p[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int op, q;
    cin >> op >> q;
    printf("Total: R$ %.2f\n", p[op-1]*q);

    return (0);
}
