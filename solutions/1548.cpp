#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n, cont = 0;
    int m, p;
    queue<int> qnotas;
    vector<int> vnotas;
    cin >> n;
    while(n--){
        cin >> m;
        for(int i=0; i<m; i++){
            cin >> p;
            qnotas.push(p);
            vnotas.push_back(p);
        }
        sort(vnotas.begin(), vnotas.end());
        for(int i=m-1; i>=0; i--){
            if(vnotas[i] == qnotas.front())
                cont++; 
            qnotas.pop();
        }
        cout << cont << endl;
        cont = 0;
        vnotas.clear();
    }
}