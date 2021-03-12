#include <bits/stdc++.h>

using namespace std;

template<typename T>
class Graph{
	map<T,list<T>> l;

	public:
	void addEdge(T x,T y){
		l[x].push_back(y);
		l[y].push_back(x);
	}

	bool cycle_helper(T node,map<T,bool> &visited,T parent){
		visited[node] = true;

		for(auto nbr: l[node]){
			if(!visited[nbr]){
				bool cycle_found = cycle_helper(nbr,visited,node);

				if(cycle_found) return true;
			}

			else if(nbr != parent) return true;
		}

		return false;
	}

	bool cycle(T src){
		map<T,bool> visited;
		for(auto i: l){
			visited[i.first]=false;
		}
		return cycle_helper(src,visited,src);
	}

	
};

int main(){
	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);
	// g.addEdge(3,0);

	cout<<g.cycle(0);
	return 0;
}