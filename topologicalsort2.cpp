#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
using namespace std;
class Graph{
    int v;
    list<int> *l;
public:
    Graph(int v){
        this->v = v;
        l = new list<int> [v];
    }
    void addedge(int u , int v){
        l[u].push_back(v);
    }
    void dfs(int curr , vector<bool>& vis , stack<int>& s){
        vis[curr] = true;
        for(int v : l[curr]){
            if(!vis[v]){
                dfs(v , vis , s) ;  // recursive call
        
            }

        }
        s.push(curr);// push after exploring all neighbours
    }
    void toposort(){
        vector<bool> vis(v , false);
        stack<int> s;
        for(int i =0; i<v; i++){
            if(!vis[i]){
                dfs(i , vis , s);
            }
        }
        while(s.size() > 0){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }

};
int main(){
    Graph g(6);
    g.addedge(5,2);
    g.addedge(5,0);
    g.addedge(4,0);
    g.addedge(4,1);
    g.addedge(2,3);
    g.toposort();
    return 0;
}