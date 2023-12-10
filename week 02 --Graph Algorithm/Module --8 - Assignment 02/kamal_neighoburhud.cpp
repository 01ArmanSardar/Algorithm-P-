#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX_N = 20;
vector<int> adjList[MAX_N];

int countDirectlyConnected(int n, int e, int k) {
    vector<bool> visited(n, false);
    queue<int> q;
    int directlyConnected = 0;

    q.push(k);
    visited[k] = true;

    while (!q.empty()) {
        int currentHouse = q.front();
        q.pop();
        directlyConnected++;

        for (int neighbor : adjList[currentHouse]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    return directlyConnected ; // Excluding Kamal's house
}

int main() {
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; ++i) {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int k;
    cin >> k;

    int result = countDirectlyConnected(n, e, k);
    cout << result << endl;

    return 0;
}
