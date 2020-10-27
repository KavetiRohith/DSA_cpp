// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{   
	   // sort(arr,arr+n);
	   // //1  2 3 5
	   // int target,curr,count=0;
	   // for(int i=size-1;i>1;i--){
	   //     target=arr[i];
	   //     int l=0;
	   //     int  r=i-1;
	   //     while(l<r&&l>=0&&r<n){
	   //         curr=arr[l]+arr[r];
	   //         if(curr>target){
	   //             r--;
	   //             curr=arr[l]+arr[r];
	   //         }
	   //         if(curr<target){
	   //             l++;
	   //             curr=arr[l]+arr[r];
	   //         }
	   //         if(curr==target){
	   //             count++;
	   //             break;
	   //         }
	   //     }
	   // }
	    sort(arr,arr+n);
	    int count=0,current;
	    
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            current=arr[i]+arr[j];
	            for(int k=j+1;j<n;k++){
	                if(arr[k]=current){
	                    count++;
	                }
	            }
	        }
	        
	    }
	    return count;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends