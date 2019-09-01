#include<iostream>
using namespace std;
int main(){
    int i, f;
    cin >> i >> f;
    if(i>f) cout << "O JOGO DUROU " << 24-i+f << " HORA(S)\n";
    else if(f>i) cout << "O JOGO DUROU " << f-i << " HORA(S)\n";
    else cout << "O JOGO DUROU 24 HORA(S)\n";

    return 0;
}

