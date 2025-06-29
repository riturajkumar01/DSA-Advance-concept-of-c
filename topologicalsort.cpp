#include<iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
private:
    void dfs(int node, vector<bool>& visited, stack<int>& st, const vector<int> adj[]) {
        visited[node] = true;
        for(int neighbor : adj[node]) {
            if(!visited[neighbor]) {
                dfs(neighbor, visited, st, adj);
            }
        }
        st.push(node);
    }
    
public:
    vector<int> topoSort(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        stack<int> st;
        
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                dfs(i, visited, st, adj);
            }
        }
        
        vector<int> result;
        while(!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
};