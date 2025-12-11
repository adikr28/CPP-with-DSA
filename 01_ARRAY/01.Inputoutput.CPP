#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"numbers of array are";

    cin>>n;
    
    int arr[n];
    //int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cin>>arr[i];// TO TAKE THE INPUT FROM THE TERMINAL
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];//TO PRINT THE ARRAY
    }
 
return 0;
            }