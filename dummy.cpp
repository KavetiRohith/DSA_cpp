#include <iostream>
using namespace std;
void fsize(int arr[]){
    cout<<sizeof(arr)/sizeof(arr[0]);
}
int main(){
    int arr[5];
    fsize(arr);
    cout<<sizeof(arr);
    return 0;
}