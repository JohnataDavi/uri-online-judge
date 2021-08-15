#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> pares;
    vector<int> impares;
    int n, valor;
    cin >> n;
    while(n--)
    {
        cin >> valor;
        if(valor%2==0)
            pares.push_back(valor);
        else
            impares.push_back(valor);
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end());

    for(int i=0; i<pares.size(); i++)
        cout << pares[i] << endl;

    for(int i=impares.size() -1; i > -1; i--)
        cout << impares[i] << endl;


    return 0;
}