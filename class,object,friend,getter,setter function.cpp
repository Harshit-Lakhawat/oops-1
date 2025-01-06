#include <iostream>
#include <string>
using namespace std;

class teacher {
    private:
        double salary;   // now salary is private
    public:
        // properties or methods
        string name;
        string subjects;
        string dept;
    
    // methods or member function
    void changedept(string newdept) {
        dept = newdept;
    }

    // setter function
    void setsalary(double s) {
        salary = s;
    }

    // getter function
    double getsalary() {
        return salary; // Now this function returns the salary value
    }
};

int main() {
    teacher t1;
    t1.name = "harshit";
    t1.dept = "python";
    t1.setsalary(45613216545); // Setting the salary
    
    cout << t1.name << endl;  // Print name
    cout << t1.dept << endl;  // Print dept
    cout << t1.getsalary() << endl;  // Print salary, now works since getsalary() returns a value

    return 0;
}
