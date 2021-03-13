#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void generate(set<string> &comb, string word)
{
    if (comb.find(word) != comb.end())
        return;
    if (word.length() == 1)
    {
        comb.insert(word);
        return;
    }
    comb.insert(word);
    for (int i = 0; i < word.length(); i++)
    {
        string aux = word;
        aux.erase(aux.begin() + i);
        generate(comb, aux);
    }
    return;
}

int main()
{
    string word;
    set<string> comb;
    while (!(cin >> word).eof())
    {
        generate(comb, word);
        for (const auto &c : comb)
            cout << c << endl;
        cout << endl;
        comb.clear();
    }
    return 0;
}
