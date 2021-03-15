#include <iostream>
 
using namespace std;
 
int calcDias(float c){
    int cont=0;
    if(c<0) return cont;
    else{
        while(c>1){
            c*=0.5;
            cont++;
        }
        return cont;
    }
}

int main(){
    int n;
    float c;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> c;
        cout << calcDias(c) << " dias" << endl;
    }
    return (0);
}