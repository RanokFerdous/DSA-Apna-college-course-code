
 #include<bits/stdc++.h>
 using namespace std;
 int main(){

     // 2D array

     int students[3][3]={{100,20,300},
      {42,53,23},
       {42,42,52}};


     for( int i=0;i<3;i++)
     {
         for( int j=0;j<3;j++)
         {
             cout<<students[i][j]<<" ";
         }cout<<endl;
     }

 // take input of 2D array

 int row, col;
 cin>>row>>col;
 int arr2[row][col];

 cout<<" give the input of ( row, col) order array arr2"<<endl;
 for( int i=0;i<row;i++)
 {
     for( int j=0;j<col;j++)
     {
         cin>>arr2[i][j];
     }
 }


 cout<<" print the arr2 : ";
 for( int i=0;i<row;i++)
 {
     for( int j=0;j<col;j++)
     {
         cout<<arr2[i][j]<<" ";
     }
 }



 // class: 3  2D array in Memory

 }
