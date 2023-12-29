#include<iostream>
using namespace std;

class abc {
    int x;
    int *y;
    int z;

    public:
    // OLD STYLE of writing the constructor
    // abc(int x,int y, int z) {
    //     this->x = x;
    //     this->y = new int(y);
    //     this->z = z;
    // }

    // New And use of initialization list
    abc(int _x, int _y, int _z): x(_x),y(new int(_y)), z(_z) {
        cout << "Inside the Initialization list" << endl;
        z = 56;
    }

    int getX() const  {
        return x;
    }

    void setX(int x) {
        this->x = x;
    }
    
    int getY() const {
        return *y;
    }
    
    void setY(int _y) {
        *y = _y;
    }
    int getZ() {
        return z;
    }

};

void printFunc(const abc &a) {
    cout << a.getX() << " " <<  a.getY() ;
}

int main() {
    // int* a = new int;
    // *a = 2;
    // int b = 5;
    // a = &b;
    // cout << &b;
    // cout << a;

    // CONST Pointer but NON-CONST content 

    // int *const a = new int(2);
    // *a = 20;
    // CONST DAta but NON-CONST Pointer. 
    // int b = 200;
    // a = &b;
    // cout << *a;

    // const int* const a  = new int(56);
    // cout << *a; 


    abc a(1,2,3);
    // cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;

    a.setY(50);
    printFunc(a);
}