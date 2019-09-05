#include <iostream>
using namespace std;
int main(){
    int p=0;
    float media, v;
    for(int i=0; i<6; i++) {
        cin >> v;
        if(v>0){
           p++;
           media+=v;
        }
    }
        cout << p << " valores positivos\n";
        cout << media/p << endl;

    return 0;
}
