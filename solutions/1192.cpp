#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, n1, n2;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        n1 = atoi(&str[0]);
        n2 = atoi(&str[2]);
        if(str[0] == str[2])
            cout << n1 * n2 << endl;
        else if(str[1] < 91)
            cout << n2-n1 << endl;
        else
            cout << n1+n2 << endl;

    }

    return 0;
}

