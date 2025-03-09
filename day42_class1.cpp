
//  this code give error answer . please help to fix it . 

#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int> *l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // DFS Helper Function
    void dfsHelper(int u, vector<bool>& vis) {
        cout << u << " ";
        vis[u] = true;

        vector<int> neighbors(l[u].begin(), l[u].end());
        sort(neighbors.begin(), neighbors.end());

        for (int v : neighbors) {
            if (!vis[v]) {
                dfsHelper(v, vis);
            }
        }
    }

    // DFS for all components
    void dfs() {
        vector<bool> vis(V, false);

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfsHelper(i, vis);
                cout << endl;  // Ensure components are separated in output
            }
        }
    }

    // BFS Helper Function
    void bfsHelper(int st, vector<bool>& vis) {
        queue<int> q;
        q.push(st);
        vis[st] = true;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            cout << curr << " ";

            vector<int> sorted_neighbors(l[curr].begin(), l[curr].end());
            sort(sorted_neighbors.begin(), sorted_neighbors.end());

            for (int neigh : sorted_neighbors) {
                if (!vis[neigh]) {
                    vis[neigh] = true;
                    q.push(neigh);
                }
            }
        }
    }

    // BFS for all components
    void bfs() {
        vector<bool> vis(V, false);

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                bfsHelper(i, vis);
                cout << endl;  // Ensure components are separated in output
            }
        }
    }
};

int main() {
    Graph graph(10);

    graph.addEdge(0, 2);
    graph.addEdge(2, 5);

    graph.addEdge(1, 6);
    graph.addEdge(4, 3);
    graph.addEdge(4, 9);
    graph.addEdge(3, 7);
    graph.addEdge(3, 8);

    cout << "DFS Traversal:\n";
    graph.dfs();

    cout << "BFS Traversal:\n";
    graph.bfs();

    return 0;
}
