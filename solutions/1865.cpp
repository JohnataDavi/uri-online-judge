#include <iostream>
using namespace std;

int main(){
    int c, n;
    string nm;
    cin >> c;
    for(int i=0; i<c; i++){
        cin >> nm >> n;
        if(nm == "Thor") cout << "Y\n";
        else cout << "N\n";
    }

    return 0;
}
