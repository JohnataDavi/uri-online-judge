#include <iostream>
#include <map>

using namespace std;

int main(){
    map <string, int> palavras;

    int m, n, i, j;
    string descricao;
    int ganho;
    
    while(cin >> m >> n){
        palavras.clear();
        for(i=0;i<m;i++){
            cin >> descricao >> ganho;
            palavras[descricao] = ganho;
        }
        
        cin.get();
        for(j=0;j<n;j++){
            ganho = 0;
            while(cin >> descricao){
                if(descricao == ".") break;
			    ganho += palavras[descricao];
            }
            cout << ganho << endl;
        }
    }
    return 0;
}
