#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    string a, b;
    cin >>  n;
    for(int i=0; i<n; i++){
        cin >> a >> b;

        if(a.size() < b.size())
            cout << "nao encaixa" << endl;
        else {
            if(a == b){
                cout << "encaixa" << endl;
            }else{
                if(a.substr((a.size() - b.size()), a.size()) == b)
                    cout << "encaixa" << endl;
                else
                    cout << "nao encaixa" << endl;
            }
        }
    }
    return 0;
}
