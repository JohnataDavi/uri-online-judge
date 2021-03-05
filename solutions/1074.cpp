#include <iostream>
using namespace std;
int main(){
    int c, n;
    cin >> c;
    for(int i=0; i<c; i++){
            cin >> n;
        if(n>0){
            if(n%2==0) cout << "EVEN POSITIVE\n";
            else cout << "ODD POSITIVE\n";
        }else if(n<0){
            if(n%2==0) cout << "EVEN NEGATIVE\n";
            else cout << "ODD NEGATIVE\n";
        }else cout << "NULL\n";
    }
    return 0;
}

