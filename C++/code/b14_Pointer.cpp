/*tiềm hiểu về con trỏ Pointer*/

#include<iostream>
using namespace std;
int main(){
   // tạo biến và gán giá trị cho nó
  int n =4;
  // lấy địa chỉ vùng nhớ của nó
 cout<<"dia chi vung nho cua bien n: "<<&n<<endl;

  // tạo con trỏ và gán giá trị vùng nhớ cho nó
  int *ptr;

  ptr = &n;

  // xuất ra giá trị vùng nhớ của con trỏ
   cout<<"gia tri vung nho cua con tro ptr: "<<ptr<<endl;

  //thiết lặp toán tử * với set thiết đặt giá trị mới
  *ptr = 10;
  // xuất lại
  cout<<"gia tri vua dc gan cho con tro ptr: "<<*ptr<<endl;

  return 0;

}
