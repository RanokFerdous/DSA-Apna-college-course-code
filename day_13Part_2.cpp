//class 9: matrix pointer concept;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},

    };

    cout<<mat<<endl;
    cout<<mat+1<<endl;

   cout<<int( 0x61fe20-0x61fe10)<<endl;// 16
}
//output:
//0x61fe10
//0x61fe20






//class:08 search in sorted matrix.
/*

#include<bits/stdc++.h>
using namespace std;

//tc= ( N+M)

//if ( n>>m) then tc=O(n)
// if ( n<<m) then tc= O(m).



bool search( int mat[][4], int n, int m, int key)
{
    int i=0, j=m-1;

    while( i<n && j>=0)
    {
        if(mat[i][j]==key )
        {
            cout<<"found at cell ("<<i<<","<<j<<")" <<endl;
            return true;
        }
    else if( mat[i][j]>key)
    {
        //left
        j--;
    }
    else {

        //down
        i++;
    }
    }

    cout<<"key is Not found"<<endl;
    return false;
}

int main()
{

    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},

    };




   //diagonalSum(matrix, 4);

   search( matrix, 4,4,14);

   //found at cell (3,1)  is the output:.....:...:...:::...:::.

    return 0;
}


*/


/*
//diagonal sum.

#include <bits/stdc++.h>
using namespace std;

//T (c) =O( n^2)
int diagonalSum( int mat[][4],int n)
{
    int sum=0;

    /*   //  TC== O(n^2).

    for( int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( i==j){sum+=mat[i][j];}

        else if( j==n-i-1)
        {
            sum+=mat[i][j];
        }
    }
    }
    */

    //for O ( n) complexity code.
/*
    for( int i=0;i<n;i++)
    {
        sum+=mat[i][i];

        if( i!=n-i-1)
        {
            sum+=mat[i][n-i-1];
        }
    }

    cout<<sum<<endl;

    return sum;
}



int main()
{

    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},

    };




   diagonalSum(matrix, 4);

    return 0;
}

*/
/*

// topic: spiral matrix.
#include <bits/stdc++.h>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m)
{
    int srow = 0, scol = 0;
    int erow = n - 1;
    int ecol = m - 1;

    while (srow <= erow && scol <= ecol)
    {
        // Top row
        for (int i = scol; i <= ecol; i++)
        {
            cout << mat[srow][i] << " ";
        }
        srow++;

        // Right column
        for (int j = srow; j <= erow; j++)
        {
            cout << mat[j][ecol] << " ";
        }
        ecol--;

        // Bottom row
        if (srow <= erow)
        {
            for (int i = ecol; i >= scol; i--)
            {
                cout << mat[erow][i] << " ";
            }
            erow--;
        }

        // Left column
        if (scol <= ecol)
        {
            for (int i = erow; i >= srow; i--)
            {
                cout << mat[i][scol] << " ";
            }
            scol++;
        }
    }
}



int main()
{
    int matrix[5][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {
            17,18,19,20
        }
    };

    spiralMatrix(matrix, 5, 4);

    return 0;
}

*/
