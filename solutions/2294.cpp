#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef pair<int, int> par;
typedef vector<vector<int>> matrix;
typedef vector<par> vecto;

void getInput(matrix &mat, par &startingPos) {
    int x = 0, y = 0, value;
    for (auto &rows: mat) {
        for (auto &elem: rows) {
            cin >> value;
            if (value == 3) {
                startingPos.first = x;
                startingPos.second = y;
            }
            elem = value;
            y++;
        }
        y = 0;
        x++;
    }
}

int solve(matrix mat, par &startingPos, int n, int m) {
    int steps = 0;
    vecto travel;
    vecto matPositions = {{-1, 0}, // Cima
                          {1,  0}, // Baixo
                          {0,  -1}, // Esquerda
                          {0,  1}}; // Direita
    travel.push_back(startingPos);
    while (!travel.empty()) {
        int size = travel.size();
        for (int i = 0; i < size; i++) {
            par pos = travel[i];
            if (mat[pos.first][pos.second] == 0) { // Encontramos a saída
                return steps;
            }

            mat[pos.first][pos.second] = 2;

            // Percorrer todas as posições
            for (auto &p : matPositions) {
                int x = pos.first + p.first;
                int y = pos.second + p.second;
                if (x < n && x >= 0 && y < m && y >= 0)  // Encontramos uma posição valida para percorrer
                    if (mat[x][y] != 2)
                        travel.push_back(make_pair(x, y));
            }
        }
        travel.erase(travel.begin(), travel.begin() + size);
        steps++;
    }
    return 0;
}

int main() {
    int n, m;
    par startingPos;
    cin >> n >> m;
    matrix mat(n, vector<int>(m));

    getInput(mat, startingPos);
    cout << solve(mat, startingPos, n, m) << endl;
    return 0;
}