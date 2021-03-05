#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;



int main()
{
    // https://www.urionlinejudge.com.br/judge/pt/problems/view/2065
    // n = funcionarios
    // m = clientes

    int n, m, vi, cj, auxn, auxm;
    double time = 0.0;
    vector<double> atendidos;
    map<double, int> time_vi;
    queue<int> qn, qm, qn_espera;

    cin >> n >> m;

    auxn = n;
    while(auxn--)
    {
        cin >> vi;
        qn.push(vi);
    }

    auxm = m;
    while(auxm--)
    {
        cin >> cj;
        qm.push(cj);
    }

    auxm = m;
    while(auxm--)
    {
        auxn = n;
        while(auxn--)
        {
            time += qm.front() * qn.front();
            time_vi.insert({qm.front() * qn.front(), qn.front()});
            atendidos.push_back(qm.front() * qn.front());
            cout << time_vi.find(qm.front() * qn.front())->first << " " << time_vi.find(qm.front() * qn.front())->second << endl;
            qn.pop();
            qm.pop();
            if(qm.empty())
                break;
        }
        if(qm.empty())
            break;

        sort(atendidos.begin(), atendidos.end());
        for(int i=0; i<atendidos.size(); i++)
            cout << atendidos[i] << " ";
        cout << endl;
        for(int i=0; i<n; i++)
            qn.push(time_vi.find(atendidos[i])->second);

        time_vi.clear();
        atendidos.clear();
    }
    cout << time << endl;

    return 0;
}
