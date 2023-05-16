/*Cùng tiềm hiểu về bài tập căn bản của loop trong c++: nhập giưới hạn và in ra tổng*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  int count = 0;
  cout<<"nhap gioi ha n cho loop: "<<endl;
  cin>>n;

  // in ra tổng
  cout<<"tong S: ";
  for(int i = 1;i<=n;i++){
    count +=i;
    cout<<i;
    if(i<=n-1){
      cout<<" + ";
    }
  }
  cout<<" = "<<count<<endl;;
  

  cout<<"========================="<<endl;
  cout<<"==tinh S = 1^2+2^2..n^2 = ?===="<<endl;
  // in ra công thức: s =1^2+2^2+...n^2;
  int count2 = 0;
  cout<<"tong S = ";
  for(int i = 1;i<=n;i++){
      count2 += pow(i,2);
      cout<<i<<"^2";
      if(i <=n-1){
        cout<<" + ";
      }
  }
  cout<<" = "<<count2;
  
  return 0;

 }
