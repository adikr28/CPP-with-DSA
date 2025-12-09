#include<iostream>
using namespace std;
int main(){
 int n;
    int arr[n];
    cin>>n;
    //5int n = sizeof(arr)/sizeof(int);
    int max=arr[0];
  

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];

        }

    }
    cout<<max;
}