/*Tìm số nguyên tố trong lập trình C++*/

#include<iostream>
using namespace std;
 
//method tim songuyento
bool songuyento(int n){
  if(n<=1){
    return false;
  }
  for(int i = 2;i<n-1;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  cout<<"nhap so n: "<<endl;
  cin>>n;

  // gọi thực thinhamf kiểm tra số nnguyene tố
  cout<<"========================"<<endl;
  cout<<endl;
  if(songuyento(n)){
    cout<<"so: "<<n<<" la so nguyen to"<<endl;
  }else{
    cout<<"so: "<<n<<" khong phai la so nguyen to";
  }

  return 0;
}
