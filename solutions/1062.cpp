#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    bool finish;
    while (1)
    {
        finish = false;
        cin >> n;
        if (n == 0)
            break;
        while (!finish)
        {
            int count = 0;

            vector<int> aux;
            int v;
            for (int i = 0; i < n; i++)
            {
                cin >> v;
                if (v == 0)
                {
                    finish = true;
                    break;
                }
                aux.push_back(v);
            }
            if (finish)
                break;

            stack<int> sta;
            int i = 0;
            for (int j = 1; j <= n; j++)
            {
                sta.push(j);
                while (sta.size() && sta.top() == aux[i])
                {
                    count++;
                    i++;
                    sta.pop();
                }
            }
            cout << ((count == aux.size()) ? "Yes" : "No") << endl;
        }
        cout << endl;
    }

    return 0;
}
