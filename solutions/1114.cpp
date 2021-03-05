#include <iostream>
using namespace std;
int main(){
    int  n;
    cin>> n;
    while(n!=2002){
        cout << "Senha Invalida\n";
        cin >> n;
    }
    cout << "Acesso Permitido\n";

    return 0;
}

