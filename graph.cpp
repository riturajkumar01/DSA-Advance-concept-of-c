#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph {
    public:
    unordered_map<int,list<int> >adj;
    void addEdge(int u , int v , bool direction){
        // direction = 0 -> undirected
        // direction = 1 -> directed
        // create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0){
            // create an edge u to v
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j: i.second){
                cout<<j<<" , ";
            }
            cout<<endl;
        }
    }
    
};
int main(){
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    int m;
    cout<<"Enter number of edges: ";
    cin>>m;
    Graph g;
    for(int i = 0 ; i < n ; i++){
        int u , v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    return 0;
}