#include<iostream>
#include<string>
using namespace std;

class Animal{
  public:
    string color;
    void eat(){
      cout<<"Eats\n";
    }
    void breathe(){
      cout<<"Breaths\n";
    }
};

class Fish : public Animal{
  public:
  int fins;

  void swim(){
    cout<<"Swims\n";
  }
};

class Dog: public Animal{
  public:
  void sound(){
    cout<<"Bark's"<<endl;
  }
};

int main(){
  Fish F1;
  F1.breathe();
  F1.color = "Pink\n";
  cout<<F1.color<<endl;
  
  Dog D1;
  D1.color = "Many Type's of colour..!";
  cout<<D1.color<<endl;
  D1.breathe();
  D1.sound();


}