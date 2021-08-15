#include <iostream>
#include <vector>
#include <utility>
#include <map>

using std::pair;
using std::vector;
using std::map;
using std::string;
using std::make_pair;
using std::cin;
using std::cout;
using std::endl;

typedef vector<int> vi;

void dfs(int u, vector<vi> &adj, vi &dfs_num) {
    dfs_num[u] = 1;
    for(auto const &v :adj[u])
        if (dfs_num[v] == -1)
            dfs(v, adj, dfs_num);
}

int main() {
    int m, n, count_id = 0, numCC = 0;
    string s1, s2, s3;
    map<string, int> id;

    cin >> m >> n;

    vi dfs_num(m, -1);
    vector<vi> adj(m);

    for (int i = 0; i < n; i++) {
        cin >> s1 >> s2 >> s3;
        if (id.find(s1) == id.end()) id[s1] = count_id++;
        if (id.find(s3) == id.end()) id[s3] = count_id++;

        adj[id[s1]].push_back(id[s3]);
        adj[id[s3]].push_back(id[s1]);
    }

    for (int i = 0; i < m; i++)
        if (dfs_num[i] == -1)
            ++numCC, dfs(i, adj, dfs_num);
    cout << numCC << endl;
    return 0;
}