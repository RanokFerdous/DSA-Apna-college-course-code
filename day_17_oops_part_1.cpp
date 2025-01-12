// class : 2
/*
#include<bits/stdc++.h>
using namespace std;

class student
{

private:
    string address;
public:

     float cgpa;
    string name;
    float mark;

    void getPercentage()
    {
        cout<<mark*10<<"%"<<endl;
    }

};


int main(){

    student s1;
    s1.name="ranok";
    s1.cgpa=3.5;
    s1.mark=9;

    cout<<s1.name<<endl;

    s1.getPercentage();






}
*/

/*

//class 3: getter and setter function create.

#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    float cgpa;

public:
    // Setter functions
    void setName(string str) {
        name = str;
    }

    void setCgpa(float x) {
        cgpa = x;
    }

    // Getter functions
    string getName() {
        return name;
    }

    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s1;

    s1.setName("Ranok");
    s1.setCgpa(3.6);

    cout << "Name: " << s1.getName() << endl;
    cout << "CGPA: " << s1.getCgpa() << endl;

    return 0;
}


*/

// class 4: constructor  function create.

/*
#include <bits/stdc++.h>
using namespace std;

class car{

    string color;
    string name;

    public:

    // car()
    // {
    //     cout<<"Constructor is called. object being created."<<endl;
    // }

    car(string n, string c)
    {
        name=n;
        color=c;
        cout<<"Constructor is called. object being created."<<endl;
    }




    void start()
    {
        cout<<"Car is started"<<endl;
    }

    void stop()
    {
        cout<<"Car is stopped"<<endl;
    }


    string getName()
    {
        return name;
    }

    string getColor()
    {
        return color;
    }
};

int main()
{
    //car c1;

    car c1( "maruti-800","white"); //set the   name, wand color of the car.

    c1.start();
    c1.stop();

    cout<<" car name: "<<c1.getName()<<endl;

    cout<<" car color: "<<c1.getColor()<<endl;

    return 0;
}

// Car is started
// Car is stopped
//  car name: maruti-800
//  car color: white


*/

// class 6: practice question
/*
#include <bits/stdc++.h>
using namespace std;

class User{

    private:
    int id;
    string password;
    public:
    string username;

    User( int id)
    {
        this->id=id;
    }

    //setter function

    void setPassword( string password)
    {
        this->password=password;
    }

    //getter function

    string getPassword()
    {
        return password;
    }
};

int main()
{
    User u1(101);
    u1.username="ranok";
    u1.setPassword("1234");

    cout<<"Username: "<<u1.username<<endl;
    cout<<"Password: "<<u1.getPassword()<<endl;
    return 0;
}

// Username: ranok
// Password: 1234


*/

/*
//class 7: copy consturctor

#include <bits/stdc++.h>
using namespace std;

class Car{

    public:
    string name;
    string color;

    Car( string name, string color)
    {
        this->name=name;
        this->color=color;
    }
    //  if i not given this part by default copy constructor will be created.

    //  this is by default copy constructor which created by default.

    // Car ( Car &original)
    // {
    //     cout<<"Copying original to new...";
    //     name=original.name;
    //     color=original.color;
    // }


};

int main()

{
    Car c1( "maruti-800","blue");
    Car c2(c1); // copy the constructor c1 to c2;

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
}

*/

// class 8 : shallow and deep copy

// 1st code:
/*
#include <bits/stdc++.h>
using namespace std;

class Car{

    public:
    string name;
    string color;
    int *mileage;

    Car( string name, string color)
    {
        this->name=name;
        this->color=color;

        mileage=new int; // created dynamically allocated memory for mileage.

        *mileage =12; //value initialize
    }
    //  if i not given this part by default copy constructor will be created.

    //  this is by default copy constructor which created by default.


      //  ********* this is ,By default part . if we give this part or not . value reamain same in this code.
      //  this by default part created by automatically when constructor is called .

    Car ( Car &original)
    {
        cout<<"Copying original to new...";
        name=original.name;
        color=original.color;  // is  basically color=c2.color;

       mileage=original.mileage;
    }


};

int main()


{
    Car c1( "maruti-800","blue");
    Car c2(c1); // copy the constructor c1 to c2;

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;

    cout<<*c2.mileage<<endl;

    *c2.mileage=10;
    cout<<*c2.mileage<<endl;

    cout<<*c1.mileage<<endl;
}

//output:
// Copying original to new...maruti-800
// blue
// 12
// 10
// 10

//  ------------------------------------
//-------------------------------------

*/

// code : 2 : deep copy
//  in deep copy method the ptr address will be changed.
/*
#include <bits/stdc++.h>
using namespace std;

class Car
{

public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color)
    {
        this->name = name;
        this->color = color;

        mileage = new int; // created dynamically allocated memory for mileage.

        *mileage = 12; // value initialize
    }
    //  if i not given this part by default copy constructor will be created.

    //  this is by default copy constructor which created by default.

    //  ********* this is ,By default part . if we give this part or not . value reamain same in this code.
    //  this by default part created by automatically when constructor is called .

    Car(Car &original)
    {
        cout << "Copying original to new...";
        name = original.name;
        color = original.color; // is  basically color=c2.color;

        mileage = new int; // created dynamically allocated memory for mileage.

        *mileage = *original.mileage;
    }
};

int main()

{
    Car c1("maruti-800", "blue");
    Car c2(c1); // copy the constructor c1 to c2;

    cout << c2.name << endl;
    cout << c2.color << endl;

    cout << *c2.mileage << endl; // 12

    *c2.mileage = 10;
    cout << *c2.mileage << endl; // 10

    cout << *c1.mileage << endl; // 12  // value is not changed in c1.
}

// Copying original to new...maruti-800
// blue
// 12
// 10
// 12


*/

// class : 9 destructor function

#include <bits/stdc++.h>
using namespace std;

class Car
{

public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color)
    {
        this->name = name;
        this->color = color;

        mileage = new int; // created dynamically allocated memory for mileage.

        *mileage = 12; // value initialize
    }

    Car(Car &original)
    {
        cout << "Copying original to new...";
        name = original.name;
        color = original.color; // is  basically color=c2.color;

        mileage = new int; // created dynamically allocated memory for mileage.

        *mileage = *original.mileage;
    }

    ~Car()
    {
        cout << "Destructor is called. Object is being deleted." << endl;

        if (mileage != NULL)
        {
            delete mileage;
            mileage = NULL;
        }
    }

    // NOTE: static variable ( name, color) automatic destroy. but dynamic variable (mileage) need to destroy manually.
};

int main()

{
    Car c1("maruti-800", "blue");
    Car c2(c1); // copy the constructor c1 to c2;

    cout << c2.name << endl;
    cout << c2.color << endl;

    cout << *c2.mileage << endl; // 12

    *c2.mileage = 10;
    cout << *c2.mileage << endl; // 10

    cout << *c1.mileage << endl; // 12  // value is not changed in c1.
}

// output:

// Copying original to new...maruti-800
// blue
// 12
// 10
// 12
// Destructor is called. Object is being deleted.
// Destructor is called. Object is being deleted.
