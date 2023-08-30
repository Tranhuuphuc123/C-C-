/*tiềm hiểu về con trỏ với Struct*/

#include<iostream>
#include<string>
using namespace std;
/* hàm nguyên mẫu*/
struct Student{
  string name;
  int age;

  // contructor
  Student(){}
  Student(string _name, int _age){
    name = _name;
    age = _age;
  }
};



/*Hàm chính main*/
int main(){
  // gọi Struct
  Student student1("phuc", 21);
  cout<<"ten: "<<student1.name<<endl;
  cout<<"tuoi: "<<student1.age<<endl;

  // tạo ra pointer và gán vùng nhớ của student1 vào
  Student *std = &student1;
  cout<<"tên la: "<< std->name<<endl; /*có thể viết: (*std).name*/

  return 0;
}
