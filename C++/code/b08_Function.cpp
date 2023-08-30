/*
 Tiềm hiểu về ây dựng các loại functiion, cũng nhưng cách đưa tham số và truyền đối số vào hàm đê thực thi
*/


#include<iostream>
#include<cmath> //--> với tính toán cần khai báo thư viện Math

using namespace std;
// xây dựng function với void không đối số, tham số
void printValue(){
  cout<<" function kieu void"<<endl;
}

// function không kiểu trả về void, nhưng  có tham số truyền vào
void tong(int x, int y){
  int tong = x + y;
  // lưu ý với void là không có giá trị trả về nên không dung return đc
  cout<<"tong: "<<x<<" + "<<y<<" = "<<tong<<endl; 
}
// xây dựng function có kiểu trả về có tham số 
iint hieu(int x, int y){
  int hieu =  x - y;
  return hieu;
}

// xây dựng function kiểu trả về bool tham số truyền vào
bool songuyento(int n){
  if(n==1){
    return false;
  }
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      return false;
    }
  }

  return true;
}
 



// hàm main thực thi
int main(){
  int x,y,n;
  // gọi funtion printValue
  printValue();
  cout<<"\n\n";

  cout<<"nhap so x: "<<endl;
  cin>>x;
  cout<<"nhap so y:"<<endl;
  cin>>y;
 
 // gọi thực thi function tong
  cout<<"------------------"<<endl;
  tong(x,y);
  cout<<"\n\n";

  // gọi thực thi hàm hieu
  cout<<"------------------------"<<endl;
  cout<<"hieu:"<<x<<"-"<<y<<"= "<<hieu(x,y)<<endl;

  // gọi thực thi hàm songuyento
  cout<<"---------------------------------"<<endl;
  cout<<"nhap so n:"<<endl;
  cin>>n;

  if(songuyento(n)){
    cout<<n<<" la so nguyen to"<<endl;
  }else{
    cout<<n<<" khong phai so nguyen to"<<endl;
  }


  return 0;
}
