#include<bits/stdc++.h>
using namespace std;

class Graph{
     
    public:
    unordered_map<int, vector<int>> adjList;

    void addEdge(int u, int v, bool direction){
        if(direction == 0){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        else{
            adjList[u].push_back(v);
        }
    }

    void printNodes(int n){

        for(int i = 0; i <= n; i++){
            vector<int> temp = adjList[i];
            cout << i << "=" << " " << "{";
            for(auto j : temp){
                cout << j << " ";
            }
            cout << "}" << endl;
        }
    }

    void detectCycle(int src, bool &ans,  unordered_map<int, bool> &visited){
        queue<int> q;
       
        unordered_map<int, int> parent;

        // maintain initial state
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while(!q.empty()){
            int front = q.front();
            q.pop();

            for(auto neighbourNode : adjList[front]){

                if(!visited[neighbourNode]){
                    q.push(neighbourNode);
                    visited[neighbourNode] = true;
                    parent[neighbourNode] = front;
                }
                else if(visited[neighbourNode] == true && neighbourNode != parent[front]){
                    ans = true;
                    break;
                }
            }
        }
    }
};



int main(){
    Graph g;
    
    g.addEdge(0, 1, 0);
    g.addEdge(0, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(3, 5, 0);
    g.addEdge(4, 2, 0);
    // g.addEdge(5, 1, 0);
    g.addEdge(6, 7, 0);
    g.addEdge(7, 0, 0);
    // g.addEdge(8, 9, 0);
    // g.addEdge(9, 10, 0);
    // g.addEdge(10, 8, 0);




    int n = 7;
    g.printNodes(n);
    bool ans = false;
    unordered_map<int, bool> visited;

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            g.detectCycle(i, ans, visited);
        }
    }
    if(ans == true){
        cout << "Cycle is detected" << endl;
    }
    else{
        cout << "Cycle is not detected" << endl;
    }

}