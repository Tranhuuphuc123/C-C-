/*Tiềm số nhỏ nhất trong 2 số vuwaaf nhập không dùng if else, hay toán tử nào khác*/


#include<iostream>
using namespace std;
int main(){
  int a, b;
  cout<<"nhap vao so a: "<<endl;
  cin>>a;
  cout<<"nhap vao so b: "<<endl;
  cin>>b;

  // xuất ra số nhỏ nhất
  cout<<"so nho nhat cua "<<a<<" & "<<b<<" la: "<< min(a,b)<<endl;
  return 0;
}
