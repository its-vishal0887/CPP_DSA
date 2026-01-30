#include<iostream>
#include<string>
using namespace std;

class Teacher{
  private:
  float salary;
  long long mobile_no;

  public:
  string Name;
  int id;
  char div;
  string department;

  
  void setSalary(float salary){
    this->salary = salary;
  }

  void setMobile_no(long long mobile_no){
    this->mobile_no = mobile_no;
  }

  float getSalary(){
    return salary;
  }

  long long mobile(){
    return mobile_no;
  }
 Teacher(){
  cout<<"Hey, I am constructor !";
 }

 Teacher(string name, int id, char div, string department, float salary, long long mobile){
  this->Name = name;
  this->id = id;
  this->div = div;
  this->department = department;
  setSalary(salary);
  setMobile_no(mobile);
  }

  // Teacher(Teacher& temp){
  //   this->Name = temp.Name;
  //   this->id = temp.id;
  //   this->div = temp.div;
  // }

  void getInfo(){
    cout<<"Name: "<<Name<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"DIV: "<<div<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Salary: " <<getSalary()<<endl;
    cout<<"Mobile No: "<<mobile()<<endl;
  }

  ~Teacher(){
    cout<<endl;
    cout<<"Destructor Call hua !";
  }
};

int main(){
  Teacher tech_1("Praful", 12, 'A', "AI/DS", 7512.33, 8865889658);
  // tech_1.getInfo();
  // Teacher *tech_2 = new Teacher(tech_1);
  // tech_2->getInfo();
 
  tech_1.getInfo();
  
  cout<<endl<<endl;

  Teacher tech_2(tech_1);
  tech_2.getInfo();

  // cout<<endl<<endl;

  // tech_1.Name[0] = 'V';
  // tech_1.getInfo();

  cout<<endl<<endl;

  // tech_2.getInfo();

  Teacher *tech_3 = new Teacher(tech_2);
  tech_3->getInfo();

  delete tech_3;


}