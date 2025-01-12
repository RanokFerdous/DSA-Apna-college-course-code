// CLASS : 1 -> PRINT ALL SUBARRAY IN integer type
/*
#include<bits/stdc++.h>
using namespace std;

void printSubarray( int *arr, int n)
{
    for( int start=0;start<n;start++)
    {
        for( int en=start;en<n;en++)
        {
            for(int i=start;i<=en;i++)
            {
                cout<<arr[i];
            }cout<<",";
        }cout<<endl;
    }
}

int main()
{
    int arr[]={ 1,2,3,4,5};

    int n=sizeof( arr)/sizeof( int);

    printSubarray( arr,n);

/* output:
TC =  O( n^3)
1,12,123,1234,12345,
2,23,234,2345,
3,34,345,
4,45,
5,


}
*/

//  CLASS 2: MAX Subarray sum ( brute force method )



// arr[]= { 2,-3,6,-5,4,2};
/*
#include<bits/stdc++.h>
using namespace std;

void maxSubarraySum( int *arr, int n)
{
    int maxSum=INT_MIN;  //VIP *******INT_MIN MEANS (-)  INFINITY

    for( int start=0;start<n;start++)
    {
        for( int en=start;en<n;en++)
        {
           int  currSum=0;
            for(int i=start;i<=en;i++)
            {
                currSum+=arr[i];
            }cout<<currSum<<",";
            maxSum=max( maxSum,currSum);
        }cout<<endl;
    }
    cout<<"maximum subarry sum ="<<maxSum<<endl;
}

int main()
{
    int arr[]={ 2,-3,6,-5,4,2};

    int n=sizeof( arr)/sizeof( int);

  maxSubarraySum( arr, n);

  /*
  T C= 0 ( N^3)
  2,-1,5,0,4,6,
-3,3,-2,2,4,
6,1,5,7,
-5,-1,1,
4,6,
2,
maximum subarry sum =7

}


*/


//  class 3: Max sum Subarray sum ( slightly optimized TC= 0( n^2) .

/*
#include<bits/stdc++.h>  //  TC = 0 ( n^2)
using namespace std;

void maxSubarraySum( int *arr, int n)
{
    int maxSum=INT_MIN;  //VIP *******INT_MIN MEANS (-)  INFINITY

    for( int start=0;start<n;start++)
    {
        int currSum=0;
        for( int en=start;en<n;en++)
        {
            currSum+=arr[en];

            maxSum=max( maxSum,currSum);
        }
    }
    cout<<"maximum subarry sum ="<<maxSum<<endl;
}

int main()
{
    int arr[]={ 2,-3,6,-5,4,2};

    int n=sizeof( arr)/sizeof( int);

  maxSubarraySum( arr, n);


//maximum subarry sum =7

}



//  CLASS 4: Kadane's Algorithm ( DP)  -> MOST OPTIMIZED Max subarray Sum


*/

/*
#include<bits/stdc++.h>  //  TC = 0 ( n^2)
using namespace std;

void maxSubarraySum( int *arr, int n)
{
    int maxSum=INT_MIN;  //VIP *******INT_MIN MEANS (-)  INFINITY

    int currSum=0;
    for( int i=0;i<n;i++)  // Knade's Algorithm
    {
        currSum+=arr[i];
        maxSum= max( currSum, maxSum);
        if( currSum<0)
        {
            currSum=0; // initialize with 0.
        }

    }
    cout<<"maximum subarry sum ="<<maxSum<<endl;
}

int main()
{
    int arr[]={ 2,-3,6,-5,4,2};

    int n=sizeof( arr)/sizeof( int);

  maxSubarraySum( arr, n);

//output: maximum subarry sum =7
}
//maximum subarry sum =7

//  here : 6-5+4+2= 7  .maxsubarry is : { 6,-5,4,2 }.

*/
//  class : 6 best buy . sell and stock problem leetcode :121 no problem
/*
#include<bits/stdc++.h>
using namespace std;

void maxProfit( int price[], int n)
{
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
   // cout<<bestBuy[0]<<" ";

    for( int i=1;i<n;i++)
    {
        bestBuy[i]=min(bestBuy[i-1], price[i-1]);

       // cout<<bestBuy[i]<<" ,";

    }
   // cout<<endl;

   int  maxProfit=0;

   for( int i=0;i<n;i++)
   {
       int currProfit = price[i]- bestBuy[i];

       maxProfit= max( maxProfit, currProfit);
   }
   cout<<"maxProfit ="<<maxProfit<<endl;

   //maxProfit =5
}

int main()
{
    int prices[6]={7,1,5,3,6,4 };
    int n=sizeof( prices)/ sizeof(int);
    maxProfit( prices, n);


}


*/



//  WATER TRAP PROBLEM;

#include<bits/stdc++.h>
using namespace std;

int trap ( int *heights, int n)
{
    int leftMax[20000], rightMax[20000];

    leftMax[0]=heights[0];

    rightMax[n-1]= heights[n-1];

    for( int i=1;i<n;i++)
    {
        leftMax[i]=max( leftMax[i-1], heights[i-1]);
    }

    for( int i=n-2;i>=0;i--)
    {
        rightMax[i]=max(rightMax[i+1], heights[i+1]);
    }

    int waterTrapped =0;

    for(int i=0;i<n;i++)
    {
        int currWater =min( leftMax[i],rightMax[i]-heights[i]);

        if( currWater >0)
        {
            waterTrapped +=currWater;
        }
    }

    cout<<" water trapped = "<<waterTrapped<<endl;
    return waterTrapped;
}

//   STACK USE KORA THIS PROBLEM SOLVE EASY HOTA PARA...
int main()  //   tc= O ( n+n+n) ~~ O(n).
{
    //int heights [5]= { 5,4,3,2,1};  // water trapped = 0
    int heights [6]= {4,2,0,6,3,2 };//  ans:10
    int n= sizeof( heights)/sizeof(int);

    trap( heights, n);
    return 0;
}
