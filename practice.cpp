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


// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher{
//     private:
//     double salary;

//     public:
//     string name;
//     string dept;
//     string subject;

//     // non-parameterized constructor
//     Teacher(){
//         dept = "Computer Science";
//     }

//     // Paramerterized Constructor
//     Teacher(string name, string dept, string subject, double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }
//     // Countructor Overloading : More than one constructor (Also an example of Polymorphism).

//     // Copy Constructor
//     Teacher(Teacher &orjObject){
//         cout<<"I am a custom copy constructor."<<endl;
//         this->name = orjObject.name;
//         this->dept = orjObject.dept;
//         this->subject = orjObject.subject;
//         this->salary = orjObject.salary;
//     }

//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     void getInfo(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Department : "<<dept<<endl;
//         cout<<"Subject : "<<subject<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }
// };

// int main(){
//     Teacher t1("Mihran", "Computer Science", "C++", 2500);
//     // t1.getInfo();
//     Teacher t2(t1); // Default Copy Constructor-invoke
//     t2.getInfo();
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class Student{
// public:    
//     string name;
//     double* cgpaPtr;

//     Student(string name, double cgpa){
//         this->name = name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }

//     // Shallow Copy Constructor
//     // Student(Student &orgStudent){
//     //     cout<<"Shallow Copy Constructor"<<endl;
//     //     this->name = orgStudent.name;
//     //     this->cgpaPtr = orgStudent.cgpaPtr;
//     // }

//     // Deep Copy Constructor
//     Student(Student &orgStudent){
//         cout<<"Deep Copy Constructor"<<endl;
//         this->name = orgStudent.name;
//         cgpaPtr = new double;
//         *cgpaPtr = *orgStudent.cgpaPtr;
//     }

//     void getInfo(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"CGPA : "<<*(cgpaPtr)<<endl;
//     }
// };

// int main(){
//     Student s1("Rahul Kumar", 8.9);
//     Student s2(s1);
//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;
//     s1.getInfo();

//     s2.name = "Neha Kumari";
//     s2.getInfo();
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class Student{
// public:    
//     string name;
//     double* cgpaPtr;

//     Student(string name, double cgpa){
//         this->name = name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }

//     // Destructor
//     ~Student(){
//         cout<<"I am Destructor, I delete everything..."<<endl;
//         delete cgpaPtr;
//     }

//     void getInfo(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"CGPA : "<<*(cgpaPtr)<<endl;
//     }
// };

// int main(){
//     Student s1("Rahul Kumar", 8.9);
//     s1.getInfo();
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class Person{
public:    
    string name;
    int age;

    Person(string name, int age){
        cout<<"I am Base Constructor"<<endl;
        this->name = name;
        this->age = age;
    }
    ~Person(){
        cout<<"I am Base Distructor"<<endl;
    }
};

class Student : public Person {
public:    
    int rollno;

    Student(string name, int age, int rollno): Person(name,age){
        cout<<"I am constructor."<<endl;
        this->rollno = rollno;
    } 

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll No. : "<<rollno<<endl;
    }
    ~Student(){
        cout<<"I am Distructor"<<endl;
    }
};

int main(){
    Student s1("Mihran", 17, 1233);
    s1.getInfo();
    return 0;
}