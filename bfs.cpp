#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfs(vector<vector<int> > &adj) {  // Added space between > >
    int v = adj.size();  // Number of vertices
    int s = 0;           // Starting vertex
    vector<int> ans;     // To store the BFS traversal order
    queue<int> q;        // Queue for BFS
    vector<bool> visited(v, false);  // Track visited vertices
    q.push(s);
    visited[s] = true;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int x : adj[node]) {
            if(!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
    return ans;
}

int main() {
    // Initialize the adjacency list manually
    vector<vector<int> > adj(5);  // Added space between > >
    
    // Node 0 is connected to nodes 1 and 2
    adj[0].push_back(1);
    adj[0].push_back(2);
    
    // Node 1 is connected to nodes 0, 2 and 3
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[1].push_back(3);
    
    // Node 2 is connected to nodes 0 and 4
    adj[2].push_back(0);
    adj[2].push_back(4);
    
    // Node 3 is connected to nodes 1 and 4
    adj[3].push_back(1);
    adj[3].push_back(4);
    
    // Node 4 is connected to nodes 2 and 3
    adj[4].push_back(2);
    adj[4].push_back(3);
    
    vector<int> ans = bfs(adj);
    for(int i : ans) {
        cout << i << " ";
    }
    return 0;
}