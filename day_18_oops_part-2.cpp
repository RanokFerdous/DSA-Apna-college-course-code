// classs 2: function overloadding
/*
#include <bits/stdc++.h>
using namespace std;

// compile time polymorphism is 2 type:
// 1. function overloading
//2.operator overloading

// function overloadding:  fucntion name is same but parameter is different.


class Print{
public:
   void show(int x)
   {
    cout<<"int : "<<x<<endl;
   }

   void show( string str)
   {
         cout<<"string : "<<str<<endl;
   }


};

int main()
{
    Print obj1;
    obj1.show(10);
    obj1.show("ranok");
}


*/

// class 3 : operator overloading
/*
#include <bits/stdc++.h>
using namespace std;

class Complex{
    int real,imag;

public:
    Complex( int r, int i)
    {
        real =r;
        imag=i;
    }

    void show()
    {
        cout<<real<<" + i"<<imag<<endl;
    }

    //operator overloading  using void type;
   void operator +( Complex &c2)
   {
    int resReal=this->real+c2.real;
    int resImag=this->imag+c2.imag;
    Complex c3( resReal,resImag);
   cout<<" res=";
   c3.show();
   }

};

int main()
{
    Complex c1(1,2);
    Complex c2(3,4);
    c1.show();
    c2.show();

    c1+c2;

    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

class Complex{
    int real,imag;

public:
    Complex( int r, int i)
    {
        real =r;
        imag=i;
    }

    void show()
    {
        cout<<real<<" + i"<<imag<<endl;
    }

    //operator overloading   using return type;
   Complex operator +( Complex &c2)
   {
    int resReal=this->real+c2.real;
    int resImag=this->imag+c2.imag;
    Complex c3( resReal,resImag);

  return c3;
   }

};

int main()
{
    Complex c1(1,2);
    Complex c2(3,4);
    c1.show();
    c2.show();

    Complex c3=c1+c2;

    c3.show();

    return 0;
}

*/

// class 4 : function overriding
/*
#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    void show()
    {
        cout<<" parent class show....."<<endl;
    }
};

class Child: public Parent{
    public:
    void show()
    {
        cout<<" child class show....."<<endl;
    }
};

int main()
{
    Child obj1;
    obj1.show();  // child class show.....

    Parent obj2;
    obj2.show();  // parent class show.....
}

*/

// class 5 : virtual function
/*
#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    virtual void hello()
    {
        cout<<" parent class hello....."<<endl;
    }

    void show()
    {
        cout<<" parent class show....."<<endl;
    }

};

class Child: public Parent{
    public:
    //  redefine without virtual keyword.
    void hello()
    {
        cout<<" child class hello....."<<endl;
    }

    void show()
    {
        cout<<" child class show....."<<endl;
    }
};


int main()
{
    Child child1;
    Parent *ptr;
    ptr=&child1; // runtime binding

    //ptr is pointing to child class object.

    ptr->hello();  // virtual function ans: child class hello.....
}

*/

/*
//class 7:  pure virtual function
#include <bits/stdc++.h>
using namespace std;

class shape{
    public:
    virtual void draw()=0; // pure virtual function
};

class Circle : public shape{
    public:
    void draw()
    {
        cout<<" circle is drawn...."<<endl;
    }
};

class Square : public shape{
    public:
    void draw()
    {
        cout<<" square is drawn...."<<endl;
    }
};

int main()
{
    Circle c1;
    Square s1;

    c1.draw();
    s1.draw();

    // we can't call or create shape class object because shape class is abstract class.

   // shape s1;
//s1.draw(); // error: cannot declare variable 's1' to be of abstract type 'shape'
}


*/

// class : 8 static keyword
/*
#include <bits/stdc++.h>
using namespace std;

class Example
{
    public:
     static  int x;
};

int Example :: x=0;  // static variable initialization

int main()
{
    Example eg1;
    Example eg2;
    Example eg3;

    cout<<eg1.x++<<endl;
    cout<<eg2.x++<<endl;
    cout<<eg3.x++<<endl;

}

*/

// class 09: static object.
/*
#include <bits/stdc++.h>
using namespace std;

class Example
{
    public:

    Example()
    {
        cout<<"constructor is called...."<<endl;
    }

    ~Example()
    {
        cout<<"destructor is called...."<<endl;
    }
};

int main()
{
  int a=0;
  if (a==0)
  {
    static Example eg1;
  }

  cout<<" code ending...."<<endl;
}


*/

// class 10: friend function
// friend function is not a member of class but it can access private and protected member of class.

/*
#include <bits/stdc++.h>
using namespace std;

class A
{
    string secret = "secret data";

    friend class B;

    friend void revealSecret(A &obj);
};

class B
{ // become a friend class of A

public:
    void showSecret(A &obj)
    {
        cout << obj.secret << endl;
    }
};

// friend function
void revealSecret(A &obj)
{
    cout << obj.secret << endl;
}

int main()
{
    A obj1;
    B obj2;
    // obj1 is passed by the obj2.

    obj2.showSecret(obj1); // joutput:  secret data
    return 0;
}


*/

// class 11: practice question
/*
#include <bits/stdc++.h>
using namespace std;

class Parent
{
    public:

    Parent()
    {
        cout<<"Constructor of parent ...."<<endl;
    }

    ~Parent()
    {
        cout<<"Destructor of parent ...."<<endl;
    }



};

class Child : public Parent
{
    public:
    Child()
    {
        cout<<"Constructor of child ...."<<endl;
    }

    ~Child()
    {
        cout<<"Destructor of child ...."<<endl;
    }
};

int  main()
{
    Child obj1;
    return 0;
}

/* output:
Constructor of parent ....
Constructor of child ....

Destructor of child ....
Destructor of parent ....

*/

// class 12: practice question

// question : predict the output of the following code.

/*
#include <bits/stdc++.h>
using namespace std;

class Base
{
    public:
    virtual void print()
    {
        cout<<"Base"<<endl;
    }
};

class Derived: public Base{
    public:

    void print() override

{
    cout<<"Derived"<<endl;

}
};

int main()
{
    Base *b= new Derived();

    b->print();
    delete b;
    return 0;
}

// output: Derived

*/

// class 13: practice question  ******PDF******

// QUESTION : 1 create a class to store Complex numbers. Using operator overloading,
// create the logic to subtract one complex number from another

// answer:

// self try

/*
#include <bits/stdc++.h>
using namespace std;

class Complex{
   int real, imag;

public:
   Complex(int r, int i)
   {
       real=r;
       imag=i;
   }

   void show()
   {
       cout<<real<<" + i"<<imag<<endl;
   }

   Complex operator -(Complex &c2)
   {
       int resReal=this->real-c2.real;
       int resImag=this->imag-c2.imag;
       Complex c3(resReal,resImag);
       return c3;
   }

   void showValue()
   {
       cout<<real<<imag<<"i"<<endl;
   }
};

int main()
{
   Complex c1(1,2);
   Complex c2(3,4);

   c1.show();
   c2.show();

   Complex c3=c1-c2;
   c3.showValue();
}


*/

// class 14: practice question  ******PDF******

// Question 2 : Create a class BankAccount with private attributes accountNumber and
// balance. Implement public methods deposit(), withdraw(), and getBalance() to
// manage the account.

// answer:
/*
#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    int accountNumber;
    int balance;

public:

    BankAccount(int accountNumber, int balance)
    {
        this->accountNumber=accountNumber;
        this->balance=balance;
    }

    void deposit(int amount)
    {
        balance+=amount;
    }

    void withdraw(int amount)
    {
        balance-=amount;
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount b1(1234,1000);
    b1.deposit(500);
    cout<<"Balance after deposit: "<<b1.getBalance()<<endl;

    b1.withdraw(200);
    cout<<"Balance after withdraw: "<<b1.getBalance()<<endl;

    return 0;
}


*/
// class 15: practice question  ******PDF******
// Question 3 : Create a base class Person with attributes name and age.
// Derive a class Student from Person and add an additional attribute studentID.
// Implement a method displayStudentInfo( ) in the Student class to display all details.
// In main function Student class object will be created in this format:
//
// Student student("Alice", 20, "S12345");
/*
#include <bits/stdc++.h>
using namespace std;

class Person
{

protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Student : public Person
{

private:
    string studentID;

public:
    Student(string n, int a, string id) : Person(n, a)
    {
        studentID = id;
    }

    void displayStudentInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main()
{
    Student student("Alice", 20, "S12345");
    student.displayStudentInfo();
    return 0;
}

*/

/*
Name: Alice
Age: 20
Student ID: S12345
*/


//finished day-18 all class and oops.
// next day 19:  Recursion part-1.