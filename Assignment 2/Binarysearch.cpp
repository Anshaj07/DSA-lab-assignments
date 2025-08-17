#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter size of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search";
    int key;
    cin>>key;
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    while(start <= end){
        if(arr[mid]==key){
            cout<<"Found";
            return 0;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        mid=start +(end-start)/2;
    }
    cout<<"not found";
    return 0;
}