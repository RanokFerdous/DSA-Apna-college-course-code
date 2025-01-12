//class :8 reverse array using 2 pointer approach where
//tc= 0(n) and space complexity: 0(1)
/*
#include<bits/stdc++.h>
using namespace std;

void printArr( int arr[], int x)
{
    for( int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){

   int arr[]={ 5,4,3,9,2};
   int n= sizeof( arr)/ sizeof( int);

   int start=0, en=n-1;
   while( start<en)
   {


   int temp= arr[start];
   arr[start]= arr[en];
   arr[en]=temp;
   start++;
   en--;
   }

printArr( arr,n);
return 0;




}


*/

//binary search code

#include<bits/stdc++.h>
using namespace std;

int binarySearch( int arr[], int n, int target)

{
    int st=0, en=n-1;

    while( st<en)
    {
         int mid = st + ( en-st)/2;

         if( arr[mid]== target)return mid;

         else if ( arr[mid]> target)en=mid-1;
         else st=mid+1;
    }
    return -1;
}

int main()
{
     int arr[]={ 2,4,6,8,10,12,14,16};

     int n= sizeof(arr)/sizeof(int);

    cout<< binarySearch( arr,n,12)<<endl;  //5  the arr[5]= 12.


}
