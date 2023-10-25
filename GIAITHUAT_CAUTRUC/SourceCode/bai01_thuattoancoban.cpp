#include<iostream>
using namespace std;
// bài toán giải thuật đầu tiên
/*
 => bài toán tính phương trình bậc nhất
   P(x): ax + b = 0(a, b là các số thực)

   ====PHÂN TÍCH===
   + input: nhập a, b
   + output: kết quả giải pt bậc nhất

   <>Mô tả thuật toán:
   -> Nếu a = 0
     + b = 0: thì pt vô số nghiệm
     + b != 0: thì pt vô nghiệm
   -> Nếu a != 0: thì pt có nghiệm duy nhất x =-b/a  
*/
int main(){
   float a,b;

   cout<<"nhap toan hang a: ";
   cin>>a;
   cout<<"nhap toan hang b: ";
   cin>>b;

   if(a == 0){
     if(b == 0){
       cout<<"x: co vo so nghiem"<<endl;
     }else if(b!=0){
        cout<<"pt vo nghiem"<<endl;
     }
   }else if(a!=0){
     int x = -b/a;
     cout<<"pt có nghiem duy nhat: x=-b/a: "<<x<<endl;
   }

   return 0;
    
}
