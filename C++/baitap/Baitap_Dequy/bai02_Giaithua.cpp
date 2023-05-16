/*Bài toán tìm giai thừa thông qua đệ quy*/

#include<iostream>
using namespace std;

// hàm nguyên mẫu prototype;
int Giaithua(int n);
int Giaithua_dequy(int n);

// hàm thực thi
int main(){
   int n;
   cout<<"nhap n: "<<endl;
   cin>>n;

   // thực thi tính giai thừa theo vòng lặp loop
   cout<<endl;
   cout<<"=======GIAITHUA_LOOP========="<<endl;

   cout<<"giaithua cua"<<n<<": "<<Giaithua(n)<<endl;

   //tính gia thừa theo đệ quy
   cout<<"========GUAITHUA_DEQUY======="<<endl;
   cout<<"giaithua_dequy cua "<<n<<"la: "<<Giaithua_dequy(n);

   return 0;
}

// các function phụ trợ
// funtion tính giai thừa theo vòng lặp
int Giaithua(int n){
  int giaithua = 1 ;
  for(int i= 1;i<=n;i++){
    giaithua*=i;
  }
  return giaithua;
}

// funtion tính giai thừa theo đệ quy
int Giaithua_dequy(int n){
  // điểm neo điều kiện dừng
  if(n == 1){
    return 1;
  }
  return n * Giaithua_dequy(n-1);
}

