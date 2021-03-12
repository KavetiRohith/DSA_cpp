#include <iostream>
using namespace std;
int maxSubArraySum(int arr[],int size){
    int max_so_far=-10000,max_ending_here=0;
    for(int i=0;i<size;i++){
        max_ending_here+=arr[i];
        if(max_so_far<max_ending_here){
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0){
            max_ending_here=0;
        }
    }
    return max_so_far;
}

int main() {
	//code
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++){
	    int size;
	    cin>>size;
	    int a[size];
	    for(int j=0;j<size;j++){
	        cin>>a[j];
	    }
	    cout<<maxSubArraySum(a,size)<<endl;
	}
	return 0;
}