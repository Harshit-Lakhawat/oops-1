//inheritance : studnet me name aur age nahi h phir bhi errorni aaya kyuki person ki properties inherite karli student class ne

#include <iostream>
#include <string>  
using namespace std;

class person{
    public:
        string name;
        int age;
        
        person(){
            cout << "parent constructor" << endl ;
        }
};
class student:public person {
    public:
         int rollno;
         student(){
             cout << "child constructor " << endl;
         }
         
         void getinfo(){
             cout << "name : " << name << endl;
             cout << "age : " << age << endl;
             cout << "rollno : " << rollno << endl;
             
         }
};
int main(){
    student s1;
    s1.name = "harshit";
    s1.age = 11 ;
    s1.rollno = 7;
    
    s1.getinfo();
    
    return 0;
}


// inheriatance with parameterized constructor 
//inheritance : studnet me name aur age nahi h phir bhi errorni aaya kyuki person ki properties inherite karli student class ne

#include <iostream>
#include <string>  
using namespace std;

class person{
    public:
        string name;
        int age;
        
        person(string name, int age){
            this -> name = name;
            this -> age = age;
        }
};
class student:public person {
    public:
         int rollno;
         student(string name, int age, int rollno) : person(name, age){
             this -> rollno = rollno;
         }
         
         void getinfo(){
             cout << "name : " << name << endl;
             cout << "age : " << age << endl;
             cout << "rollno : " << rollno << endl;
             
         }
};
int main(){
    student s1("harshit", 12 , 7);

    s1.getinfo();
    
    return 0;
}
