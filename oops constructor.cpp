#include <iostream>
#include <string>
using namespace std;

class teacher {
    private:
        double salary;   // now salary is private
    public:
        // Non-parameterized constructor (currently commented out)
        /*
        teacher() {
            cout << "Hii, constructor here!" << endl;
            name = "Unknown";
            dept = "Unknown";
            subjects = "Unknown";
            salary = 0.0;
        }
        */

        // Parameterized constructor
        teacher(string n, string d, string s, double sal) {
            name = n;
            dept = d;
            subjects = s;   // Assign to 'subjects' here
            salary = sal;
        }

        string name;
        string subjects;  // Use 'subjects' here
        string dept;
    
    // Methods or member functions
    void changedept(string newdept) {
        dept = newdept;
    }

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subjects << endl;  // Print 'subjects' here
    }
};

int main() {
    teacher t1("harshit", "CS", "C++", 250000); 
    t1.getinfo();
    
    return 0;
}
