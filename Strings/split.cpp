#include <bits/stdc++.h>
#include <sstream>
using namespace std;

vector<string> split(string s){
	stringstream ss(s);
	string buf;
	vector<string> tokens;
	
	while(ss>>buf) tokens.push_back(buf);
	return tokens;
}

vector<string> split(string s,char delim){
	stringstream ss(s);
	string buf;
	vector<string> tokens;

	while(getline(ss,buf,delim)) tokens.push_back(buf);
	return tokens;
}