#include <bits/stdc++.h>
using namespace std;

#define INT_MAX = 9999;

int n=4
int dist[10][10] = {
	{0,20,42,25},
    {20,0,30,34},
    {42,30,0,10},
    {25,34,10,0}
}

int visited_all = 1<<n -1;


int tsp(int mask,int pos){
	if(mask == visited_all) return dist[pos][0]; //base case
	 
}

int main(){
	return 0;
}