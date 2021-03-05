#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n=0, x=0;
    cin >> n;
    for(int i=0 ; i<n; i++){
        cin >> x;
        cout << (long long)(pow(2, x) / 12000) << " kg\n";
    }
    return 0;
}
