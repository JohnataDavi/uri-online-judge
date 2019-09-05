#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    int cont = 0;
    while(cin >> input){
        for(auto str: input){
            if(str == '(')
                cont++;
            else if(str == ')')
                cont--;
            if(cont < 0)
                break;
        }
        if(cont == 0)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
        cont = 0;
    }
    return 0;
}
