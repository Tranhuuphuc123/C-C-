/*tính giai thừa trong c++*/
#include<iostream>
using namespace std;
int main(){
  int n;
  int giaithua  = 1;

  cout<<"nhap gioi han n: "<<endl;
  cin>>n;

  /* xuất giải thừa: giai thừa là phép tích một dạy số từ
  1 tới chính nó*/
  cout<<"-----------giaithua-----------"<<endl;
  cout<<"giaithua cua "<<n<<" la: ";
  for(int i=1;i<=n;i++){
     giaithua *= i;
     cout<<i;
     if(i<=n-1){
       cout<<" * ";
     }
  }
  cout<<" = "<<giaithua<<endl;
  return 0;

}
