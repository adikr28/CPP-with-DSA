#include<iostream>
using namespace std;
void printarr(int num[],int n)//int num[]=staring pointer,int n= size of arr
{
   for(int i=0;i<n;i++){
    cout<<num[i]<<",";
   } cout<<endl;

}
int main(){
    int arr[]={1,2,3,4,5,0};
    int n=sizeof(arr)/sizeof(int);
cout<<n<<endl;
printarr(arr,n); //calling function
}