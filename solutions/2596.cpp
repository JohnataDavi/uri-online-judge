#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, esferas;
    cin >> n;
    while(n--){
        cin >> esferas;
        cout << ceil(esferas - sqrt(esferas)) << endl;
    }
    return 0;
}
