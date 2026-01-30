#include<iostream>
using namespace std;

struct name{
  int a = 5;
};

// class hero{
  
//   private:
//   int health;
//   int age;

//   public:
//   string name;

//   //constructor

//   // hero(){
//   //   cout<<"Constructor Called"<<endl;
//   // }

//   hero(int age, int health, string name){
//     this->age = age;
//     this->health = health;
//     this->name = name;

//     cout<<name<<" "<<health<<" "<<age<<endl;
//   }

  // int getHealth(){
  //   return health;
  // }

  // void setHealth(int h){
  //   health = h;
  // }
// }


int main(){
  // hero h1;
  // h1.name = "Vishal";
  // cout<<h1.name<<endl;
  
  // h1.getHealth();
  // h1.setHealth(7);
  // cout<<h1.getHealth()<<endl;

  //Dynamic Allocation

  // hero *H1 = new hero();
  // hero *V = new hero();
  // hero *D = new hero(10);

  // hero vishal(19, 100, "VIshal");

  // D->name = "Dhiresh";
  // cout<<D->name<<endl;


  // V->setHealth(7);
  // cout<<V->getHealth()<<endl;

  // H1->name = "Vishal";
  // cout<<H1->name<<endl;

  name h;

  
  cout<<"The Vlaue of A is: "<<h.a<<endl;


  return 0;
}