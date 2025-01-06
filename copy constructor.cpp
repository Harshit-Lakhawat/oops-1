#include <iostream>
#include <string>
using namespace std;

class teacher {
    private:
        double salary;   // now salary is private
    public:
        string name;
        string subject;  // Use 'subjects' here
        string dept;
        // Parameterized constructor
        teacher(string name, string dept, string subject, double salary) {
            this -> name = name;
            this -> dept = dept;
            this -> subject = subject;   // Assign to 'subjects' here
            this -> salary = salary;
        }
        //copy constructor
        teacher(teacher &orgobj){
            cout << " i am copy constructor" << endl;
            this -> name = orgobj.name;
            this -> dept = orgobj.dept;
            this -> subject = orgobj.subject;
            this -> salary = orgobj.salary;
        }

    // Methods or member functions
    void changedept(string newdept) {
        dept = newdept;
    }

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;  // Print 'subjects' here
    }
};

int main() {
    teacher t1("harshit", "CS", "C++", 250000); 
    //t1.getinfo();
    //teacher t2(t1);    // default copy constructor
    teacher t2(t1);      //  copy constructor
    t2.getinfo();
    
    return 0;
}
