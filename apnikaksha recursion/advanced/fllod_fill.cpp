#include <bits/stdc++.h>
using namespace std;
void fill(vector<vector<int>> &arr,int m,int n,int prevFill,int toFill){
    int nRows=arr.size();
    int nCols=arr[0].size();
    if(m<0||n<0||m>=nRows||n>=nCols)
        return;
    if(arr[m][n]!=prevFill)
        return;
    arr[m][n]=toFill;
    fill(arr,m-1,n,prevFill,toFill);
    fill(arr,m,n-1,prevFill,toFill);
    fill(arr,m+1,n,prevFill,toFill);
    fill(arr,m,n+1,prevFill,toFill);
}
int main(){
    vector<vector<int> >a={{0,1,1,1},{1,0,1,1},{1,1,1,0}};
    fill(a,1,2,1,2);
    for (int i=0; i<3; i++) 
    { 
        for (int j=0; j<4; j++) 
           cout << a[i][j] << " "; 
        cout << endl; 
    } 
}