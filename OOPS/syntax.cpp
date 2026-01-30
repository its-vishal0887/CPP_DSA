#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Class is bundel of properties and behaviour

class Student{

  private:
  string gf;
  
  public:
  int roll_no;
  string name;
  char Div;
  
  Student(){
    cout<<"Student C-Tor called !"<<endl;
  };

  string setGf(){
    return gf;
  }

  Student(string gf, int roll_no, char Div, string name){
    this->gf = gf;
    this->roll_no = roll_no;
    this->Div = Div;
    this->name = name;
  } //parameterized constructor
};

// class Student{ 
//   // double a;
//   // double b; 
//   char present;

// };


int main(){
  Student S1("Ahilya", 33, 'A', "Vishal");
  Student *s2 = new Student("Shravni", 45, 'A', "Vishal");
  cout<<s2->setGf()<<endl;
  cout<<S1.setGf()<<endl;
  cout<<sizeof("🎓");
}