#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    // directed graph
    // map ki need hai 
    // jo store krega ki particular node se aur kitni nodes connected hai
    // node to list ki mapping hogi, aur list ke andr wo saari nodes hongi jo key node se conected hongi
    // unordered_map<int, list<int>> adjList;

    // // function to connect two nodes
    // // jo do nodes aapas mai connected hongi unki key value(node, list of node) ka pair bnega
    // void addEdge(int u, int v, bool direction){
    //     // direction == 0, undirected graph
    //     // direction == 1, directed graph
    //     if(direction == 0){
    //         adjList[u].push_back(v);
    //         adjList[v].push_back(u);
    //     }
    //     else{
    //         adjList[u].push_back(v);
    //     }
    // }

    // void printGraph(int n){
    //     for(int i = 0; i < n; i++){

    //         list<int> temp = adjList[i];
    //         cout << i << " = ";
    //         cout << "{";
    //         for(auto j : temp){
    //             cout << j << ",";
    //         }
    //         cout << "}" << endl;

    //     }
    // }



    // weighted directed graph


    // map ki need hai 
    // jo store krega ki particular node se aur kitni nodes connected hai
    // node to list ki mapping hogi, aur list ke andr wo saari nodes hongi jo key node se conected hongi
    unordered_map<int, list<pair<int, int>>> adjList;

    // function to connect two nodes
    // jo do nodes aapas mai connected hongi unki key value(node, list of node) ka pair bnega
    void addEdge(int u, int v, int weight, bool direction){
        // direction == 0, undirected graph
        // direction == 1, directed graph
        if(direction == 0){
            adjList[u].push_back({v, weight});
            adjList[v].push_back({u, weight});
        }
        else{
            adjList[u].push_back({v, weight});
        }
    }

    void printGraph(int n){
        for(int i = 0; i < n; i++){

            list<pair<int, int>> temp = adjList[i];
            cout << i << " = ";
            cout << "{";
            for(auto j : temp){
                cout << "(" << j.first << " " << j.second << ")";
            }
            cout << "}" << endl;

        }
    }

    void bfsTraversal(int src){
        queue<int> q;
        unordered_map<int, bool> visited;

        // maintain initial state
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int front = q.front();
            q.pop();
            cout << front << " ";

            // current node ko process kro
            for(auto connectedNodes : adjList[front]){
                int nodeVal = connectedNodes.first;
                if(!visited[nodeVal]){
                    q.push(nodeVal);
                    visited[nodeVal] = true;
                }
            }
        }
    }

        
    void dfsHelper(int src, unordered_map<int, bool> &visited){
        visited[src] = true;
        cout << src << " ";

         for(auto connectedNodes : adjList[src]){
                int nodeVal = connectedNodes.first;
                if(!visited[nodeVal]){
                    dfsHelper(nodeVal, visited);
                }
            }
    }

    void dfsTraversal(int n){
        unordered_map<int, bool> visited;

        for(int src = 0; src < n; src++){
            if(!visited[src]){
                dfsHelper(src, visited);
            }
        }
        

    }
};

int main(){
    // directed graph
    Graph g;

    // g.addEdge(0, 1, 1);
    // g.addEdge(1, 2, 1);
    // g.addEdge(2, 3, 1);
    // g.addEdge(0, 3, 1);
    // g.addEdge(2, 0, 1);

    // // number of nodes
    // int n = 4;
    // g.printGraph(n);

    // weighted directed graph

    g.addEdge(0,3,3,1);
    g.addEdge(0,5,3,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,5,3,1);
    g.addEdge(3,5,3,1);
    g.addEdge(5,4,3,1);
    g.addEdge(5,6,3,1);
    g.addEdge(4,1,3,1);
    g.addEdge(6,1,3,1);

    int n = 6;
    g.printGraph(n);
    cout << "BFS tarversal: ";
    g.bfsTraversal(0);

    cout << endl << "DFS traversal: ";
    g.dfsTraversal(n);
    
    return 0;
}