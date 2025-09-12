#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, vector<pair<int, int>>> adjList;

    void addEdge(int u, int v, int wt, bool direction){
        if(direction == 0){
            adjList[u].push_back({v, wt});
            adjList[v].push_back({u, wt});
        }
        else{
            adjList[u].push_back({v, wt});
        }
    }

    void dijkastrabfs(int n, int src,  vector<int>& distance){
        set<pair<int, int>> st;
        st.insert({0, 0});
        distance[0] = 0;

        while(!st.empty()){
            auto front = *st.begin();
            st.erase(st.begin());
            int u = front.second;
            // cout << "u" << u << " ";
            int wt = front.first;

            for(auto node : adjList[u]){
                int v = node.first;
                int w = node.second;
   
                if(distance[v] > distance[u] + w){
                    // front ko set se nikalna hai aur new updated pair dalna hai
                    auto p = st.find(front);
                    if(p != st.end()){
                        st.erase(p);
                    }
                    distance[v] = distance[u] + w;
                    st.insert({distance[v], v});
                }
            }
        }
    }
};
int main(){
    graph g;

    g.addEdge(0, 3, 6, 0);
    g.addEdge(0, 5, 9, 0);
    g.addEdge(5, 4, 2, 0);
    g.addEdge(4, 3, 11, 0);
    g.addEdge(4, 1, 9, 0);
    g.addEdge(4, 2, 10, 0);
    g.addEdge(1, 2, 7, 0);

    int n = 6;
    vector<int> distance(n, INT_MAX);
    g.dijkastrabfs(n, 0, distance);

    for(int i = 0; i < n; i++){
        cout << "distance of " << i << " -> " << distance[i] << endl;
    }

    return 0;
}