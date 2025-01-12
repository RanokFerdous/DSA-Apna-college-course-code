
#include<bits/stdc++.h>
using namespace std;

void print( int arr[], int n)
{
     for( int i=0;i<n;i++)
     {
         cout<<arr[i]<<",";
     }cout<<endl;
}

void bubbleSort( int arr[], int n){

    for( int i=0;i<n-1;i++)
    {
        for( int j=0;j<n-i-1;j++)
        {
            if( arr[j]>arr[j+1])  //  if ( arr[j] <arr[j+1] ) then we get descending arrray .
            {
                swap( arr[j], arr[j+1]);
            }
        }
    }

// T C : O ( n^2)


}

int main()
{
    int arr[8]={ 4,7,3,6,8,3,0,4};

    bubbleSort(arr, 8);
    cout<<" the bubble sort array answer: ";
    print( arr,8);
}
