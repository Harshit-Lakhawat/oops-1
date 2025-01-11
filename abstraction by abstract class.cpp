//abstract class

#include <iostream>
#include <string>  
using namespace std;

class shape{ //abstract class
    virtual void draw() = 0; //purre virtual function
};

class circle : public shape{
    public :
        void draw(){
            cout << "draw circle \n" ;
        }
};
int main(){
    circle c1;
    c1.draw();
    
    return 0;
}
