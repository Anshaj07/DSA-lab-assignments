/* Space required to store any two-dimensional array is:
rows × columns
When matrices have special structures, we can store only the non-zero elements to save
space.
(a) Diagonal Matrix:
A diagonal matrix has non-zero elements only on its main diagonal.
Instead of storing all elements, we store only the n diagonal elements in a
one-dimensional array.
Space required: n
(b) Tri-diagonal Matrix:
A tri-diagonal matrix has non-zero elements only on the main diagonal, and the diagonals
just above and below it.
We store these 3n - 2 elements in a one-dimensional array.
Space required: 3n - 2
(c) Lower Triangular Matrix:
A lower triangular matrix has non-zero elements on and below the main diagonal.
We store only n(n+1)/2 elements in a one-dimensional array.
Space required: n(n+1)/2
(d) Upper Triangular Matrix:
An upper triangular matrix has non-zero elements on and above the main diagonal.
We store only n(n+1)/2 elements in a one-dimensional array.
Space required: n(n+1)/2
(e) Symmetric Matrix:
A symmetric matrix has the property that element at (i,j) is equal to element at (j,i).
We store only the lower (or upper) triangular part, including the diagonal.
Space required: n(n+1)/2  */
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter order of matrix";
    cin>>n;
    int arr[n][n];
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int size=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                size++;
            }
        }
    }
    int sparse[size][3];
    int row=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
            sparse[row][0]=i;
            sparse[row][1]=j;
            sparse[row][2]=arr[i][j];
            row++;
        }
        
        }
    }
}