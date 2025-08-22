// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher{
//     private:
//     double salary;

//     public:
//     //properties or // attributes
//     string name;
//     string dept;
//     string subject;

//     //methods or // member functions
//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     //setter
//     void setSalary(double s){
//         salary = s;
//     }

//     //getter
//     double getSalary(){
//         return salary;
//     }
// };

// int main(){
//     Teacher t1;
//     t1.name = "Mihran";
//     t1.dept = "Computer Science";
//     t1.subject = "C++";
//     t1.setSalary(25000);
//     cout<<t1.name<<endl;
//     cout<<t1.getSalary()<<endl;
//     return 0;
// }

// Encapsulation is wrapping up of data and member function in a single unit called class.

// #include<iostream>
// #include<string>
// using namespace std;

// class Account{
// private:
//     string balance;  // Data Hiding
//     string passsword;    

// public:    
//     string accountId;
//     string username;

// };

// int main(){

//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;

    // non-parameterized constructor
    Teacher(){
        dept = "Computer Science";
    }

    // Paramerterized Constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // Countructor Overloading : More than one constructor (Also an example of Polymorphism).

    // Copy Constructor
    Teacher(Teacher &orjObject){
        cout<<"I am a custom copy constructor."<<endl;
        this->name = orjObject.name;
        this->dept = orjObject.dept;
        this->subject = orjObject.subject;
        this->salary = orjObject.salary;
    }

    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main(){
    Teacher t1("Mihran", "Computer Science", "C++", 2500);
    // t1.getInfo();
    Teacher t2(t1); // Default Copy Constructor-invoke
    t2.getInfo();
    return 0;
}