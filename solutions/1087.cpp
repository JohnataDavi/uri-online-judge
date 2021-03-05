#include<iostream>
#include <stdio.h>
using namespace std;

int main() {
    int tab[8][8], x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    while(x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0) {
        if(x1 == x2 && y1 == y2)
            cout << "0\n";
        else if(x1== x2 || y1==y2)
            cout << "1\n";
        else if((x2-x1 == y2-y1) || (-(x2-x1) == -(y2-y1)) || (x2-x1 == -(y2-y1)) ||  (-(x2-x1) == y2-y1))
            cout << "1\n";
        else
            cout << "2\n";

        cin>>x1>>y1>>x2>>y2;
    }


    return 0;
}
