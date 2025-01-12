/*

#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    string color;

    void eat()
    {
        cout<<"eats..."<<endl;
    }

    void breath()
    {
        cout<<"breathes..."<<endl;
    }
};

class Fish: public Animal
{
    public:
    // extra properties of fish

    int fins;
    void swim()
    {
        cout<<"swims..."<<endl;
    }
};

int main()
{
    Fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl; //3

    f1.swim();//swims...

    f1.eat();//eats...
    f1.breath();//breathes...

    return 0;
}


*/

// class 12: single inheritance
/*
#include<bits/stdc++.h>
using namespace std;

class Animal
{public:

    string color;

    void eat()
    {
        cout<<" eats..."<<endl;
    }

    void breath()
    {
        cout<<"breathes..."<<endl;
    }

};
class Fish: public Animal{
    public:
    //extra properties of fish
    //automatically inherit the properties of animal class in Fish class.

    int fins;

    void swim()
    {
        eat();
        cout<<"swims..."<<endl;
    }
};



int main()
{
    Fish f1;
    f1.fins=3;

    cout<<f1.fins<<endl; //3

    f1.swim(); //swims...

    f1.eat(); //eats...
    f1.breath(); //breathes...
    return 0;

}


*/

// class 13: multi-level inheritance
#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "eats..." << endl;
    }

    void breath()
    {
        cout << "breathes..." << endl;
    }
};

class Mammel : public Animal
{
public:
    string bloodType; // Member variable to store blood type

    // Function to set blood type
    void setBloodType()
    {
        bloodType = "warm-blooded";
    }

    // Function to display blood type
    void showBloodType()
    {
        cout << "Blood Type: " << bloodType << endl;
    }
};

class Dog : public Mammel
{
public:
    void tailDog()
    {
        cout << "Tail is wagging..." << endl;
    }
};

int main()
{
    Dog d1;
    d1.eat();     // eats...
    d1.breath();  // breathes...
    d1.tailDog(); // Tail is wagging...

    // Set and display blood type for the dog
    d1.setBloodType();
    d1.showBloodType(); // Blood Type: warm-blooded

    Mammel m1;
    m1.setBloodType();
    m1.showBloodType(); // Blood Type: warm-blooded

    return 0;
}




// class 14: multiple inheritance
/*
#include <bits/stdc++.h>
using namespace std;

class Teacher
{
public:
    int salary;
    string subject;
};

class Student
{
public:
    int rollNo;
    float cgpa;
};

class TA : public Teacher, public Student  //if you want to more class then use comma( ,).

{
public:
    // extra properties of TA

    string name;
};

int main()
{
    TA t1;
    t1.salary = 50000;
    t1.subject = "Math";
    t1.rollNo = 101;
    t1.cgpa = 3.6;
    t1.name = "Ranok";

    cout << "Salary: " << t1.salary << endl;   // 50000
    cout << "Subject: " << t1.subject << endl; // Math
    cout << "Roll No: " << t1.rollNo << endl;  // 101
    cout << "CGPA: " << t1.cgpa << endl;       // 3.6
    cout << "Name: " << t1.name << endl;       // Ranok

    return 0;
}


*/

// output:
//  Salary: 50000
//  Subject: Math
//  Roll No: 101
//  CGPA: 3.6
//  Name: Ranok

// class 15: hybrid inheritance

// Hierarchial inheritance at first .

// solve the home work of class 15 time( 0:00:00) to (00:01:06)  time .

#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << " eats..." << endl;
    }

    void breath()
    {
        cout << "breathes..." << endl;
    }
};

class bird : public Animal
{
public:
    string birdType;
    void fly()
    {
        cout << "flies..." << endl;
    }
};

class Fish : public Animal
{
public:
    string fishType;
    void swim()
    {
        cout << "swims..." << endl;
    }
};

class Mammal : public Animal
{
public:
    string MammalType;
    void walk()
    {
        cout << "walks..." << endl;
    }
};

int main()
{
    Animal a1;
    a1.eat();    // eats...
    a1.breath(); // breathes...
    bird b1;
    b1.birdType = "parrot";

    Mammal m1;
    m1.MammalType = "kangaroo";

    Fish f1;
    f1.fishType = "shark";

    cout << b1.birdType << endl; // parrot
    b1.fly();                    // flies...

    cout << m1.MammalType << endl; // kangaroo

    cout << f1.fishType << endl; // shark

    return 0;
}


//next topic: holo next day 18 .

// day 18 : OOPs part-2

//finish class.
