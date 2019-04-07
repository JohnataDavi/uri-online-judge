#include <iostream>
using namespace std;

int main(){
    int v, aux;
    cin >> v;
    aux = v / 365;
    v%=365;
    cout << aux << " ano(s)\n";
    aux = v / 30;
    v%=30;
    cout << aux << " mes(es)\n";
    cout << v << " dia(s)\n";


    return 0;
}

