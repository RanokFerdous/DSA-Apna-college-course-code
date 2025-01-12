#include<bits/stdc++.h>
using namespace std;
int main(){

  //class: 5
  //reverse number

  int n=1234;
  int res=0;
  while( n>0)
  {
      int lastDig=n%10;
      res=res*10 + lastDig;
      n/=10;
  }
  cout<<"reverse number: "<<res<<endl;


/*   PRSCTISE PDF

                                   Loops
                          (Assignment Questions)
Question 1 : WAP to find the Factorial of a number entered by the user.

   Hint : factorial of a number (n) = n * (n-1) * (n-2) * (n-3) * ........... * 1
        and exists for positive numbers only. We write factorial as n!

So, factorial of 0! = 1, 1! = 1, 2! = 2, 3! = 6, 4! = 24 and so on.
Note - Please do not confuse factorial with NOT EQUAL TO operator, they are not the
same.

Question 2 : WAP to print the multiplication table of a number, entered by the user.

Question 3 : WAP to input a number and check whether the number is an Armstrong
number or not.
   Armstrong number is a number that is equal to the sum of cubes of its digits.

Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
(Assume N >= 2)

Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
(Assume N >= 2)

Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….

This is a series where each number is a sum of previous 2 numbers in the series. Eg
:
1 = 0 + 1,
2 = 1 + 1,
3 = 1 + 2,
5 = 2 + 3,
8 = 3 + 5 & so on.


//SOLUTION PDF

//Qs 1 : Factorial of a number n
int n = 6;
int fact = 1;
for(int i=1; i<=n; i++) {
fact *= i;
}


cout << "factorial of " << n << " = " << fact << "\n";


//Qs 2: Multiplication Table of n
int n = 8;
for(int i=1; i<=10; i++) {
cout << (n * i) << " ";
}
cout << endl;


//Qs 3 : Check for Armstrong Number
int n = 371;
int num = n;
int cubeSum = 0;

while(num > 0) {
int lastDig = num % 10;
cubeSum += lastDig * lastDig * lastDig;
num /= 10;
}


if(n == cubeSum) {


cout << "Armstrong number\n";
} else {
cout << "NOT an Armstrong number\n";
}


 //qustion :4
 Qs : Print Primes from 2 to N
 {
int N = 15;
for(int i=2; i<=N; i++) {
int curr = i; //current number to check for
bool isPrime = true;
for(int j=2; j*j<=i; j++) {
if(curr % j == 0) {
isPrime = false;
}
}


if(isPrime) {
cout << curr << " ";
}
}
cout << endl;

}
//question :5

//Qs : Print N Fibonacci Numbers

int n = 10;
int first = 0, sec = 1;
cout << first << " " << sec << " ";


for(int i=2; i<n; i++) {
int third = first + sec;
cout << third << " ";
first = sec;
sec = third;
}


cout << "\n";


}
