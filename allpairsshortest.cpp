#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"enter number of vertices : ";
    cin >> n;
    int dist[n][n];
    cout<<"enter the distance matrix "<<endl;
    for(int i =0; i < n; i++){
        for(int j =0; j < n; j++){
            cin >> dist[i] [j];
            if(i != j && dist[i][j] == 0){
                dist[i][j] = 1e9;
            }
        }
    }
    for(int k = 0; k<n; k++){
        for(int i = 0; i<n; i++){
            for(int j =0; j < n; j++){
                dist[i] [j] = min(dist[i][j] , dist[i][k]+ dist[k][j]);
            }
        }
    }
cout <<"The shortest distance matrix is : "<<endl;
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(dist[i][j]== 1e9){
            cout<<"INF";
        }
            else{
            cout<<dist[i][j]<<" ";
        }
    }
        cout<<endl;
    }
    return 0;
}