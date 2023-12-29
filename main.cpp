#include <iostream>
using namespace std;


// class Animal {
//   private: 
//   int weight;

//   public:
//   string name;
//   int age = 12;

//   int getter() {
//     return weight;
//   }

//   void setter(int weight) {
//     this->weight  = weight;
//   }
//   // Constructor
//   Animal(int a){
//     this->age = a;
//     cout << "Animal is OK" << endl;
//   }
//   Animal (int age, int weight, string name) {
//     this->age = age;
//     this->weight = weight;
//     this->name = name;
//     cout << "Parameterised constructor called" << endl;
//   }
//   // Copy Constructor is called;
//   Animal (Animal &obj) {
//     this->age = obj.age;
//     this->name = obj.name;
//     this->weight = obj.weight;
//     cout << "Copy Constructor Called" << endl;
//   }


//   // void setter(int w) {
//   //   weight  = w;
//   // }
// };

class Animal {
  private:
  int weight;
  public:
  int age;
  string name = "Yuvraj";

  // Constructor 
  Animal(int age, int weight,string name) {
    this->age = age;
    this->weight = weight;
    this->name = name;
    cout << "Inside Parameterised Constructor";
  }
  
  // Getters and setters for accessing the private state 
  int getWeight () {
    return weight;
  }
  int setWeight(int weight) {
    this->weight = weight;
  }
};

// Inheritance
class Dog : public Animal{
  public :
  void print() {
    cout << this->age;
  }
};

int main() {
  // Animal ran;
  // cout << ran.age << endl;
  // cout << "Animal Name is : "<< ran.name << endl;
  // ran.setter(100);
  // hence 
 
  // cout << ran.getter();;
  // int a = 9;
  // int *ptr = &a;

  // cout << *ptr;

  // Static Memory Object Creation
  // Animal a(110);

  // // Dynamic Memory
  // // Animal *suresh = new Animal;  
  // Animal *suresh1 = new Animal(12,22,"Muttiah");  
  // Animal c(a);
  // cout << (*suresh).name;
  // cout << (*suresh).age;

  // Animal yuvi(24,5,"Baller");
  // cout << endl;
  // cout << yuvi.age << endl;
  // cout << "Name is : ";
  // cout << yuvi.name << endl;
  // yuvi.name[0] = 'G';
  // cout << yuvi.name << endl;
  // cout << yuvi.getWeight();
  // cout << endl;
  // yuvi.setWeight(12);
  // cout << endl;
  // cout << yuvi.getWeight();
  Animal a;
  Dog d1;
  d1.print();
  return 0;
}




