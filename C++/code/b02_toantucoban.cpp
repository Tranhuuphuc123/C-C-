#include<iostream>

using namespace std;
int main(){
    int a, b;
    char pheptoan;
    int tong,hieu,thuong,tich;
    cout<<" nhap vao gia tri a: !\n";
    cin>>a;
    cout<<"nhap vao gia tri b: !\n";
    cin>>b;

    cout<<"nhap vao phep toan"<<endl;
    cin>>pheptoan;

    switch(pheptoan){
      case '+':
          tong = a+b;
          cout<<"tong: "<<a<<"+"<<b<<"="<<tong<<endl;
          break;

      case '-':
          hieu = a-b;
          cout<<"Hieu: "<<a<<"-"<<b<<"="<<hieu<<endl;
          break;

      case '/':
          thuong = a/b;
          cout<<"thuong: "<<a<<"/"<<b<<"="<<thuong<<endl;
          break;

       case '*':
          tich = a*b; 
          cout<<"tich: "<<a<<"*"<<b<<"="<<tich<<endl;
          break;

       default:
          cout<<"vui long nhap lai pham vi phep tinh cho phep"<<endl;
          break;
        

    }
    cout<< "===================="<<endl;
    return 0;

}
