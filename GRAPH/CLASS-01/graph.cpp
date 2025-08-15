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
    g.addEdge(0, 1, 2, 1);
    g.addEdge(1, 2, 4, 1);
    g.addEdge(2, 3, 5, 1);
    g.addEdge(0, 3, 16, 1);
    g.addEdge(2, 0, 17, 1);

    int n = 4;
    g.printGraph(n);
    
    return 0;
}