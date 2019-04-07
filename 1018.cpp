#include <iostream>
using namespace std;

int main(){

    int n, aux;
    cin >> n;
    cout << n << "\n";
    aux=n/100;
    n%=100;
    cout<<aux<<" nota(s) de R$100,00\n";
    aux=n/50;
    n%=50;
    cout<<aux<<" nota(s) de R$50,00\n";
    aux=n/20;
    n%=20;
    cout<<aux<<" nota(s) de R$20,00\n";
    aux=n/10;
    n%=10;
    cout<<aux<<" nota(s) de R$10,00\n";
    aux=n/5;
    n%=5;
    cout<<aux<<" nota(s) de R$5,00\n";
    aux=n/2;
    n%=2;
    cout<<aux<<" nota(s) de R$2,00\n";
    aux=n/1;
    n%=1;
    cout<<aux<<" nota(s) de R$1,00\n";

    return 0;
}

