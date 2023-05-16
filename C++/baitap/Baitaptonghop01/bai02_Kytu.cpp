/*bài tập ký tự khi nhập: nếu nhập chữ thường thì in hoa nhập in hoa thì biến thành chữ thường*/

#include<iostream>
using namespace std;
int main(){
  // ky tự in thường: a- z <=> 97-122
  // ký tự in Hoa: A-Z <=> 65 - 90
  char kytu;
  cout<<"nhap vao ky tu can chuyen: "<<endl;
  cin>>kytu;

  if(kytu>='a' && kytu<='z'){
      kytu -=32;
      cout<<"ky tu duoc chuyen thanh ky tu hoa: "<<kytu<<endl;
  }else{
    kytu+=32;
    cout<<"ky tu duoc chuyen thanh ky thuong: "<<kytu<<endl;
  }

  return 0;
}

