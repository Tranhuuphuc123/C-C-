#include <iostream>
#include <string>

using namespace std;
/*
  trong bai này ta tiềm hiểu về toán tử ba ngôi hay
  toán tử điều kiện: <biểu thức> ? true:fasle.
  ==> <biểu thức> đúng thì true sai thì fasle.
*/
int main(){
    string pass;
    cout<<"nhap pas: "<<endl;
    cin>>pass;

    if(pass!="Huuphuc123@"){
      cout<<"mat khau sai";
    }else{
      cout<<"ban da dang nhap thanh cong";
    }

    cout<<"\n\n";
    // có thể viết kiểu toán tử điều kiện 3 ngôi
    (pass == "Huuphuc123@")?cout<<"that right!" : cout<<"nhap lai sai roi!";

    return 0;

}
