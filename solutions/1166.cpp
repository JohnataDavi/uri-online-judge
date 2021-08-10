#include <iostream>
#include <vector>
#include <stack>
#include<cmath>

using namespace std;

int main() {
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        vector <stack<int>> v;
        for (int j = 0; j < N; j++) {
            stack<int> a;
            v.emplace_back(a);
        }
        bool flag = true;
        unsigned int contador = 0;
        for (int j = 1; flag; j++) {

            if (v[0].empty()) {
                v[0].push(j);
                ++contador;
            } else {
                bool achou = false;
                for (int k = 0; k < v.size(); k++) { // procurando posicao
                    if (v[k].empty()) {
                        v[k].push(j);
                        ++contador;
                        achou = true;
                        break; // ja achou, n precisa mais procurar
                    } else {
                        double aux = sqrt(v[k].top() + j);
                        if (aux == (int) aux) // Eh quadrado perfeito
                        {
                            v[k].push(j);
                            ++contador;
                            achou = true;
                            break; // ja achou, n precisa mais procurar
                        }
                    }
                }
                if (!achou) {
                    flag = false;
                }
            }
        }

        cout << contador << endl;
    }
}