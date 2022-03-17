#include <bits/stdc++.h>
using namespace std;

#define sz_V  4
int tSP(int graph[][sz_V], int s){
    
    //initialize vertex vector
    std::vector<int> vertex;
    
    for (int t=0;t<sz_V;t++) {
        if(t!=s){
            vertex.push_back(t);
        }
    }
    //finding min path
    int min_path = INT_MAX;
    
    do{
        int current_path = 0,current_city=0;
        for (int i = 0; i < sz_V; i++) {
            current_path += graph[current_city][vertex[i]];
            current_city = vertex[i];
        }
        min_path = min(min_path, current_path);
        
    }while(next_permutation(vertex.begin(),vertex.end()));
    
    return min_path;
}
int main()
{
    // matrix representation of graph
    // graph[i][j] is cost of j from i
    int graph[][sz_V] = { { 0, 10, 15, 20 },
                       { 10, 0, 35, 25 },
                       { 15, 35, 0, 30 },
                       { 20, 25, 30, 0 } };

    int source = 0;
    int ans = tSP(graph,source);
    cout << ans << endl;
    return 0;
}
// output : ans = 80
//
