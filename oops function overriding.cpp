//function overriding

#include <iostream>
#include <string>  
using namespace std;

class parent{
    public :
        void getinfo(){
            cout << "parent class\n";
        }
};
class child : public parent{
    public :
        void getinfo(){
            cout << "child class\n";
        }
};
int main(){
    child c1;
    c1.getinfo(); //child ne parent ke function ko override krdiya
    parent p1;
    p1.getinfo(); //parent ne child ke function ko override krdiya
    return 0;
}
