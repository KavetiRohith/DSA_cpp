#include <bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++){
	    int num;
	    cin>>num;
	    float ans;
	    ans = log2(num);
	    if(ans - (int)ans == 0){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}