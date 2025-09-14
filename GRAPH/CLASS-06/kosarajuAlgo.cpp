#include<bits/stdc++.h>
using namespace std;

class graph{
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

    void dfstopo(int src, stack<int> &st, unordered_map<int, bool>& visited){
        visited[src] = true;

        for(auto nbr : adjList[src]){
            if(visited[nbr] != true){
                dfstopo(nbr, st, visited);
            }
        }
        st.push(src);
    }

    void dfsCount(int src, unordered_map<int, bool>& revVisited, unordered_map<int, vector<int>>& revList){

        revVisited[src] = true;

        for(auto nbr : revList[src]){
            if(revVisited[nbr] != true){
                dfsCount(nbr, revVisited, revList);
            } 
        }
    }

    int kosarajuCountSCC(int n){

        // step 01-> find topological sort
        stack<int> st;
        unordered_map<int, bool> visited;
        for(int i = 0; i < n; i++){
            if(visited[i] != true)
            dfstopo(i, st, visited);
        }
        // step 02-> reverse edges
        unordered_map<int, vector<int>> revList;
        for(auto list : adjList){
            int parent = list.first;
            for(auto nbr : adjList[parent]){
                revList[nbr].push_back(parent);
            }
        }

        unordered_map<int, bool> revVisited;
        int ans = 0;
        // step 03-> do dfs according to topo sort and after return count component
        while(!st.empty()){
            int top = st.top();
            st.pop();
            if(revVisited[top] != true){
                dfsCount(top, revVisited, revList);
                ans++;
            }
        }
        return ans;
    }
};

int main(){
    graph g;
    g.addEdge(0, 3, 1);
    g.addEdge(1, 0, 1);
    g.addEdge(2, 1, 1);
    g.addEdge(3, 2, 1);
    g.addEdge(2, 4, 1);
    g.addEdge(4, 5, 1);
    g.addEdge(5, 6, 1);
    g.addEdge(6, 4, 1);
    g.addEdge(6, 7, 1);

    int n = 8;
    cout <<"Number of components: " << g.kosarajuCountSCC(n);



    return 0;
}










