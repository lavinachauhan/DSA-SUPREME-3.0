#include<bits/stdc++.h>
using namespace std;

// graph structure
class graph{
    public:
    // unordered_map<u, vector<pair<v, weight>>>
    unordered_map<int, vector<pair<int, int>>> adjList;

    void addEdge(int u, int v, int weight, bool direction){
        // direction == 0 (undirected graph)
        // direction == 1 (directed graph)
        if(direction == 0){
            adjList[u].push_back({v, weight});
            adjList[v].push_back({u, weight});
        }
        else{
            adjList[u].push_back({v, weight});
        }
    }

    void print(int n){
        for(int i = 0; i < n; i++){
            vector<pair<int, int>> temp = adjList[i];
            cout << i << " ->" << "{ ";
            for(int j = 0; j < temp.size(); j++){
                cout << temp[j].first << ", ";
            }
            cout << "}";
            cout << endl;
        }
    }

    void topologicalSortdfs(int n, int src, vector<int>& ans, unordered_map<int, bool> &visited){
    // topological sort in directed graph with weight 1
    visited[src]  = true;

        for(auto node : adjList[src]){
            int nbr = node.first;
            if(visited[nbr] != true){
                topologicalSortdfs(n, nbr, ans, visited);
            }
        }
        ans.push_back(src);
    }

    void topologicalSortBfs(int n, vector<int>& ans){
        // create indegree map
        unordered_map<int, int> inDegree;
        for(int src = 0; src < n; src++){
            for(auto nbr : adjList[src]){
                inDegree[nbr.first]++;
            }
        }
        queue<int> q;
        // store elements in queue with indegree 0 (maintain initial state of queue)
        for(int i = 0; i< n; i++){
            if(inDegree[i] == 0) q.push(i);
        }
        // main logic
        while(!q.empty()){
            int front = q.front();
            q.pop();
            ans.push_back(front);
            // front element ki list ko process kro
            // aur indegree decrement kro, kyoki imaginary humne graph se front node remove kr di hai
            for(auto nbr : adjList[front]){
                    inDegree[nbr.first]--;
                    if(inDegree[nbr.first] == 0){
                        q.push(nbr.first);
                    }
            }
        }
    }
};




int main(){

    // topological sort
    graph g;
    g.addEdge(2, 3, 1, 1);
    g.addEdge(3, 1, 1, 1);
    g.addEdge(4, 0, 1, 1);
    g.addEdge(4, 1, 1, 1);
    g.addEdge(5, 0, 1, 1);
    g.addEdge(5, 2, 1, 1);
    // directed graph
    // undirected graph
    int n = 6;
    // unordered_map<int, bool> visited;
    vector<int> ans;
    // for(int i = 0; i <= n; i++){
    //     if(visited[i] != true){
    //         g.topologicalSortdfs(n, i, ans, visited);
    //     }
        
    // }

    // cout << "Topological order using dfs" << endl;
    cout << "Tolpological Order using bfs" << endl;
    g.topologicalSortBfs(n, ans);
    // reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    
  
    // g.print(6);
    return 0;
}
