/*Tiềm hiểu về về cấu trúc của chương trình Struct trong C++*/

#include<iostream>
#include<string>
using namespace std;

/* hàm nguyên mẫu prototype*/
// tạo structs date
struct Date{
   int date, month, year;
   // contructor
   Date(){}
   Date(int _date, int _month, int _year){
     date =_date;
     month = _month;
     year = _year;
   }
};


// tạo kiểu dữ liệu với Struct
struct Student{
   string name;
   int age;
   // dùng Date làm kiểu dl cho date của Struct Student
   Date dob;
   // contrutor
   Student(){}
   Student(string _name, int _age, Date _dob){
     name = _name;
     age = _age;
     dob = _dob;
   }

   // xây dựng method trong Struct
   void run(){
     cout<<"method cua struct"<<endl;
   }
};



/*hàm chính main*/
int main(){

 //****************CÁCH 01***************************
  // dùng Struct định nghĩa kiểu dl cho biến trong main
  Student student1;

  cout<<"nhap ten cua stduent 1: ";
  getline(cin, student1.name);

  cout<<"nhap tuoi cua student 1: ";
  cin>>student1.age;

  // xuất giá trị
  cout<<"ten cua student1 la: "<<student1.name<<endl;
  cout<<"tuoi cua student1 là: "<<student1.age<<endl;
 
// gọi đến method của struct
  student1.run();

 //****************CÁCH 02***************************
  // gọi và truyền kiểu gáng đối số trong contructor
  Student student2("Tuan", 22, Date(1,9,2000));
  cout<<"ten student2: "<<student2.name<<endl;
  cout<<"tuoi student2: "<<student2.age<<endl;
  cout<<"ngay/thang/namsinh cua student2: "<<student2.dob.date<<"/"
    <<student2.dob.month<<"/"<<student2.dob.year;


  return 0;

}



