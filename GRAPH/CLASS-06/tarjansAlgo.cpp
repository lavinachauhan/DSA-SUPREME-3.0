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


    void tarjansAlgo(int src, vector<int> &low, vector<int> &tin, 
        int &timer,  int parent,   vector<vector<int>> &ans, unordered_map<int, bool> &visited){
            
            // step 03> main logic
            // update src low and tin and traverse its nbr
            // there will be three cases
            timer++;
            low[src] = timer;
            tin[src] = timer;
            visited[src] = true;

            for(auto nbr : adjList[src]){
                // case01-> unvisited -> agr unvisited h to dfs call lagao 

                if(visited[nbr] != true){
                    tarjansAlgo(nbr, low, tin, timer, src, ans, visited);
                    
                    // 01-> aur return hone pr src ka low time update krna 
                    // (kyoki ho skta h uske current nbr ka low time aur kmm ho)
                    low[src] = min(low[src], low[nbr]);
                    
                    // 02-> check krna h bridge h ya nhi 
                    // (agr nbr ka low time greater hua src ke tin time se to bridge present h) 
                    if(low[nbr] > tin[src]){
                        vector<int> temp;
                        temp.push_back(src);
                        temp.push_back(nbr);
                        ans.push_back(temp);
                    }
                }
                else if(parent != nbr && visited[src] == true){
                    // case02-> agr already visited h aur nbr src ke parent ke equal nhi h 
                    // iska mtlb nbr pr jane ke liye aur bhi raste h 
                    // to hume ab src ke low time ko update krna chaiye
                    low[src] = min(low[src], low[nbr]);
                }
            }
    } 
};

int main(){

    graph g;
    g.addEdge(0, 2, 0);
    g.addEdge(0, 1, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(3, 4, 0);
    g.addEdge(1, 2, 0);

    int n = 5;
    vector<vector<int>> ans;
    // tarjans algorithm
    // step 01-> create DS for low(minimum time), tin(time of insertion), parent, visited 
    unordered_map<int, bool> visited;
    vector<int> low(n);
    vector<int> tin(n);
    int timer = 0;
    int parent = -1;
    // step 02-> make a dfs call
    for(int i = 0; i < n; i++){
        if(visited[i] != true){
            g.tarjansAlgo(i, low, tin, timer, parent, ans, visited);
        }
    }

    for(auto temp : ans){
        cout << temp[0] << "->" << temp[1] << endl;
    }

   


    return 0;
}