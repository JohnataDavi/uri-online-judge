#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	string txt;
    int n;
    bool flag = false;
    vector<string> conjunto;
    cin>>n;

    while(n){
        while(n--){
            cin >> txt;
            conjunto.push_back(txt);
        }
        sort(conjunto.begin(), conjunto.end());
        for(int i = 0; i < conjunto.size() - 1; i++)
        {
            if(conjunto[i] == conjunto[i+1].substr(0, conjunto[i].size()))
            {
                cout << "Conjunto Ruim" << endl;
                flag = true;
                break;
            }
        }
        if(!flag)
            cout << "Conjunto Bom" << endl;
        flag = false;
        conjunto.clear();
        cin>>n;
    }
	return 0;
}
