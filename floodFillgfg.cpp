#include <iostream>
using namespace std;
#define N 20
void floodfill(int arr[][N],int x,int y,int rows,int columns,int prevFill,int toFill){
    if(x<rows&&y<columns&&x>=0&&y>=0&&arr[x][y] == prevFill){
        arr[x][y] = toFill;
        floodfill(arr,x-1,y,rows,columns,prevFill,toFill);
        floodfill(arr,x+1,y,rows,columns,prevFill,toFill);
        floodfill(arr,x,y-1,rows,columns,prevFill,toFill);
        floodfill(arr,x,y+1,rows,columns,prevFill,toFill);
    }
    return;
}

int main() {
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++){
	    int x,y;
	    cin>>x>>y;
	    int arr[x][N];
	    for(int i=0;i<x;i++){
	        for(int j=0;j<y;j++){
	            cin>>arr[i][j];
	        }
	    }
	    int pos_x,pos_y,toF;
	    cin>>pos_x>>pos_y>>toF;
        int pF=arr[pos_x][pos_y];
	    floodfill(arr,pos_x,pos_y,x,y,pF,toF);
	    for(int i=0;i<x;i++){
	        for(int j=0;j<y;j++){
	            cout<<arr[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}