#include<iostream>
#include<string>
using namespace std;

class User{
  private:
  int id;
  string PassWord;

  public:
  string UserName;

  void SetPassword(string PassWord){
    this->PassWord = PassWord;
  }

  void SetId(int id){
    this->id = id;
  }

  string getPassword(){
    return PassWord;
  }

  int getId(){
    return id;
  }

  User(int id, string UserName, string PassWord){
    this->UserName = UserName;
    SetPassword(PassWord);
    SetId(id);
  }

  void getInfo(){
    cout<<"ID: "<<id<<endl;
    cout<<"UserName: "<<UserName<<endl;
    cout<<"PassWord: "<<PassWord<<endl;
  }

  ~User(){
    cout<<"Destructor is caller..!"<<endl;
  }
};

int main(){
  User A(101,"Vishal", "Vish@l8830");
  A.getInfo();


}