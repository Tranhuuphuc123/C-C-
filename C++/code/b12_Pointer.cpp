/*Tiềm hiểu về con trỏ Pointer trong C++*/
#include<iostream>
using namespace std;
int main(){
  int a = 100;

  // xuất giá trj của biến, giá trị mà biến lưu trữ
  cout<<"gia tri duoc bien a luu tru: "<<a<<endl;

  /* in thông tin địa chỉ định danh cho biến, tưc địa chỉ đc khai báo cho biến thông qua đó vùng nhớ RAm có thể tìm đến đc biến a nhờ địa chỉ gán đó và truy xuất được số nguyên 100*/
  // cách lấy địa chỉ vùng nhớ của biến a thì dùng &
  cout<<"ten dia chi vung nho phan cap cho bien a: "<<&a<<endl;
  return 0;
}
