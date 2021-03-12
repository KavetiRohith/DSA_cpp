#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int l[],int lsize,int r[],int rsize){
    int i=0,j=0,k=0;
    while(i<lsize && j<rsize){
        if(l[i]<=r[j]){
            arr[k] = l[i];
            k++;
            i++;
        }
        else{
            arr[k] = r[j];
            j++;
            k++;
        }
    }
    while(i<lsize) {
        arr[k] = l[i];
        i++;
        k++;
    }
    while(j<rsize){
        arr[k] = r[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[],int size){
    if(size<=1) return;
    int mid = size/2;
    int l[mid],r[size-mid];
    for(int i=0;i<mid;i++){
        l[i]=arr[i];
    }
    for(int i=mid;i<size;i++){
       r[i-mid]=arr[i];
    }
    MergeSort(l,mid);
    MergeSort(r,size-mid);
    Merge(arr,l,mid,r,size-mid);
}

int main(){
    int arr[]= {14,11,6,5,6,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,size);
    for(int a=0;a<size;a++){
        cout<<arr[a]<<" ";
    }
    return 0;
}