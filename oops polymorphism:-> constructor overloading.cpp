//polymorphism:-> constructor overloading

#include <iostream>
#include <string>  
using namespace std;

class student {
    public :
        string name ;
        student(){
            cout << "non-parameterized\n" ;
        }
        
        student(string name){
            this -> name = name ;
            cout << "parametersized\n";
        }
};
int main(){
    student s1; //for this non-parameterized const called
    student s2("harshit"); //parameterized called and it canot be s1 if we have called s1 earlier 
    
    return 0;
}
