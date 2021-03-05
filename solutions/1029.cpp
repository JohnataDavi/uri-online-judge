#include <iostream>
using namespace std;

int fib(int a, int &cont){
    cont++;
    return (a!=0) ? ((a>1) ? fib(a-1, cont)+fib(a-2, cont) : 1) : 0 ;
}

int main(){

    int a, cont=-1, r, n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin >> a;
        r = fib(a, cont);
        cout << "fib(" << a << ")" << " = "<< cont << " calls = " << r << endl;
        cont = -1;

    }
    return 0;
}