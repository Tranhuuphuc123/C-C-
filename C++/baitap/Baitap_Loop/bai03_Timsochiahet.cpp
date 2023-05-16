/*Nhập vào số  bắt kỳ tìm số chia hết cho 5*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"nhap so n: "<<endl;
  cin>>n;

cout<<" cac day so chia het cho 5: ";
  for(int i = 1;i<=n;i++){
    if(i%5==0){
      cout<<i<<" ";
    }
  }

  return 0;
}
