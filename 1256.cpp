#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, C, valor;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> M >> C;
        vector<vector<int>> resh(M);
        for(int i=0; i<C; i++)
        {
            cin >> valor;
            resh[valor%M].push_back(valor);
        }
        for(int i=0; i<M; i++)
        {
            cout << i;
            for(int j=0; j<resh[i].size(); j++)
                cout << " -> " << resh[i][j];
            cout << " -> \\" << endl;
        }
        if(i!=N-1)
            cout << endl;
    }
    return 0;
}

