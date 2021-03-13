#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void sort(map<int, int> &M)
{
    multimap<int, int> MM;

    for (auto &it : M)
        MM.insert({it.second, it.first});

    vector<pair<int, int>> list;
    int aux = 1;
    for (auto const &it : MM)
    {
        if (aux != it.first)
        {
            for (int i = list.size(); i--;)
                cout << list[i].second << ' ' << list[i].first << endl;
            list.clear();
        }
        list.push_back(make_pair(it.first, it.second));
        aux = it.first;
    }
    for (int i = list.size(); i--;)
        cout << list[i].second << ' ' << list[i].first << endl;
    cout << endl;
}

int main()
{
    map<int, int> table;
    string str;
    while (getline(cin, str) && !str.empty())
    {
        for (auto s : str)
            table[int(s)]++;

        sort(table);
        table.clear();
    }
    return 0;
}
