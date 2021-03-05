#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int n, l, r, diamond;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        l = r = diamond = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '<')
            {
                l++;
            }
            else if (s[i] == '>')
            {
                r++;
                if (l > 0)
                {
                    l--;
                    r--;
                    diamond++;
                }
            }
        }
        cout << diamond << endl;
    }
    return 0;
}