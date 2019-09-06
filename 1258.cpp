#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
E:\Documentos\Projects\Projects C++\URI
int main()
{
    map<pair<string, char>, vector<string>> turma;
    map<pair<string, char>, vector<string>>::iterator itr;
    pair<string, char> camisa;
    vector<string> nomes;
    string nome, cor;
    char tam;
    int n;
    cin>>n;
    while(n)
    {
        while(n--)
        {
            cin >> ws;
            getline(cin, nome);
            cin >> cor >> tam;
            camisa.first = cor;
            if(tam == 'P')
                tam -= 15;
            else if(tam == 'M')
                tam -= 11;
            else
                tam -= 4;
            camisa.second = tam ;
            if(turma[camisa].empty())
            {
                nomes.push_back(nome);
                turma[camisa] = nomes;
            }
            else
            {
                turma[camisa].push_back(nome);
            }
            nomes.clear();
        }
        for (itr = turma.begin(); itr != turma.end(); ++itr)
        {
            sort(itr->second.begin(), itr->second.end());
            tam = itr->first.second;
            if(tam == 'A')
                tam += 15;
            else if(tam == 'B')
                tam += 11;
            else
                tam += 4;
            for(int i=0; i<itr->second.size(); i++){
                cout << itr->first.first << " "
                     << tam << " "
                     << itr->second[i] << endl;
            }
        }
        turma.clear();
        cin>>n;
        if(n != 0)
            cout << endl;
    }
    return 0;
}
