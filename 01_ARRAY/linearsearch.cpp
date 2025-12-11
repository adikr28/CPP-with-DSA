#include<iostream>
using namespace std;

  int linear(int *arr,int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
  }
}

int main(){
    int arr[]={2,4,5,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    cout<<linear(arr,n,10)<<endl;
}