#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, tam;
    string str;

    cin >> N;
    while(N--){
        cin >> str >> tam;
        for(int i=0; i<str.size(); i++){
            if(str[i]-tam < 65)
                str[i] = 91 - (65 -( str[i] -tam));
            else
                str[i] -= tam;
        }
        cout << str << endl;
    }
    return 0;
}
