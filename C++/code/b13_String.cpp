/*tiềm hiểu về các phương thwucs làm việc với string*/
#include<iostream>
#include<string>
using namespace std;
int main(){
  // substring: hàm cắt chuỗi
  cout<<"======SUBSTRING========="<<endl;
  string str ="Huu phuc Aptech";
  string str1 = str.substr(3,5);

  cout<<str1<<endl;


  // find: tìm kiếm phần tử mảng "Aptech" ở vị trí thứ mấy
  cout<<"======FIND========="<<endl;
  cout<<str.find("Aptech")<<endl;


  // erase: xóa phần tử mảng, vd xóa "Aptech"
cout<<"======ERASE========="<<endl;
 cout<<str.erase(8,7)<<endl;


 cout<<"========REPLACE==========="<<endl;
 // Thay thế chuỗi mong muốn tại vị trí chỉ định
 cout<<str.replace(1,2,"***")<<endl;


 cout<<"======INSERT============"<<endl;
 // chèn thêm chuỗi tử vị trí mong muốn
 string str2 ="abcd";
 cout<<str2.insert(1,"**")<<endl;


 cout<<"==========LENGT() AND SIZE()======="<<endl;
 // kiểm tra độ dài kích cỡ của chuỗi
 string str3 ="Huuphuc abc";
 cout<<str3.length()<<endl;
 cout<<str3.size();

  return 0;
}
