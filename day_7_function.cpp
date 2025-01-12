
/*#include<bits/stdc++.h>
using namespace std;

void assistent (); //forward declaration

 void sayHello()
 {
     cout<<"Hello : "<<endl;
 }


int main(){

    assistent();
    return 0;
}
void assistent ()
 {
     sayHello();
     cout<<"work done"<<endl;
 }


*/

//print all prime 2 to n range

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if( n==1)return false;

    for( int i=2;i*i<=n;i++)
    {
        if( n%i==0)return false;
    }

    return true;
}

void allPrime( int n)
{
    for( int i=2;i<=n;i++)
    {
        if( isPrime( i))
            cout<<i<<" ";
    }cout<<endl;
}

int main()
{
    allPrime( 10);//2 3 5 7
}
