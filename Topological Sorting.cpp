#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> adj[100001];  // adjacency list to store graph
bool visited[100001];     // array to mark visited nodes
stack<int> st;            // stack to store topological order

void dfs(int node) {
    visited[node] = true;
    for (auto adjNode : adj[node]) {
        if (!visited[adjNode]) {
            dfs(adjNode);
        }
    }
    st.push(node);
}



void topologicalSort(int n) {
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    int n, m;  // n - number of nodes, m - number of edges
    cout<<"Enter the number of nodes and edges : "<<endl;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;  // u -> v edge
        cout<<"Enter the values of u and v in an edge (u->v) : "<<endl;
        cin >> u >> v;
        adj[u].push_back(v);

    }

    cout<<endl;

    topologicalSort(n);  // calling topological sort function
    return 0;
}
