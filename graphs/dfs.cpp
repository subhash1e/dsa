#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
	map<T,list<T> >adjList;
public:
	Graph(){

	}
	void addEdge(T u, T v, bool bidir = true){
		adjList[u].push_back(v);
		if (bidir)
		{
			adjList[v].push_back(u);
		}
	}

	void print(){
		for(auto i:adjList){
			cout << i.first << " ==>  ";
			for(auto xc: i.second){
				cout << xc << " ";
			}
			cout << endl;

		}
	}
	void dfsHelper(T node, map<T,bool> &visited){
		
		cout << node << " ";
		// after visiting mark that node true
		visited[node] = true;

		for (T neighbour:adjList[node])
		{
			if (!visited[neighbour])
			{
				dfsHelper(neighbour,visited);
			}
		}
	}

	void dfs(T src){
		map<T,bool> visited;
		dfsHelper(src,visited);
	}
};


int main(int argc, char const *argv[])
{
	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(0,4);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(3,5);
	g.print();
	cout << endl;
	g.dfs(0);

	
	return 0;
}
/* output:
0 ==>  1 4 
1 ==>  0 2 
2 ==>  1 4 3 
3 ==>  2 4 5 
4 ==>  0 2 3 
5 ==>  3 

0 1 2 4 3 5 [Finished in 1.3s]*/
