#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int D=arr[0];
    int start=0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]-mid==D){
            start=mid+1;
        }
        if(arr[mid]-mid>mid==D+1){
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    cout<<"missing element is => "<<arr[mid]-1;
    return 0;
}