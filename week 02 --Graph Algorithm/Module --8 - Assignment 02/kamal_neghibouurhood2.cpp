#include <bits/stdc++.h>
using namespace std;

const int N = 20;
vector<int> adjlst[N];
bool visited[N];

vector<int> connectedNodes;

void dfs(int u) {
    visited[u] = true;
    connectedNodes.push_back(u);

    for (int v : adjlst[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adjlst[u].push_back(v);
    }

    int k;
    cin >> k;

    dfs(k);
cout <<connectedNodes.size()-1<<endl;
    return 0;
}
