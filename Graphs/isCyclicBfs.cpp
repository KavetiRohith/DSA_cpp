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

	bool isCyclic(T node){
		queue<T> q;
		map<T,T> parent;
		map<T,bool> visited;

		q.push(node);
		parent[node] = node;
		visited[node] = true;
		while(!q.empty()){
			T curr = q.front();
			q.pop();

			for(auto i:l[curr]){
				if(visited[i] && parent[curr] != i) return true;

				else if(!visited[i]){
					visited[i] = true;
					parent[i] = curr;
					q.push(i);
				}
			}
		}

		return false;
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

	cout<<g.isCyclic(0);
	return 0;
}