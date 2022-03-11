#include <iostream>
#include <list>
using namespace std;


// template<typename T>
// class Node{}


template<typename T>
class Graph{
	int V;
	list<T> *l;
public:
	 Graph(size_t V){
		this->V = V;
		l = new list<T>[V];
	}

	void addEdge(T x, T y){
		l[x].push_back(y);
		l[y].push_back(x);
		//bidirectional
	}

	void show(){
		for (size_t i = 0; i < V; ++i)
		{
			cout << "Vertex " <<  i << " => ";

			for (T x:l[i])
			{
				cout << x << " ";
			}
			cout << "\n";
		}
	}
	
};


int main(int argc, char const *argv[])
{
	Graph<int> g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,3);
	g.addEdge(1,2);
	g.show();


	
	return 0;
}

/*
Vertex 0 => 1 2 
Vertex 1 => 0 3 2 
Vertex 2 => 0 1 
Vertex 3 => 1 
[Finished in 345ms]*/
