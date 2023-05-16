/*Tiềm hiểu về đệ quy thông qua bài tập:
 dùng đệ quy thay vong lặp loop forr để tính tổng S =1 + 2 +3 ..+ n;
*/

#include<iostream>
using namespace std;

// xây dựng method tinhtong tên là Sum
int Sum(int n){
  // tạo điểm neo đk dừng đệ quy
  if(n  == 1){
    return 1;
  }

  // lưu ý n  là biến cố định mõi lần thay đổi thì n sẽ đc gán cho Sum(n-1)
  return n + Sum(n-1);
}

int main(){
  int n;
  cout<<"nhap n: "<<endl;
  cin>>n;

  cout<<"=======Sum==========="<<endl;
  cout<<"Sum = ";
  for(int  i =1;i<=n;i++){
    cout<<i;
    if(i<=n-1){
      cout<<" + ";
    }  
  } 
  cout<<" = "<<Sum(n);


  return 0;
}

/*
 kw: 
    + Truyền vào 3 so đk 3!=1
    + thực hiện 3 + (3-1) ~ 3 +2
    + tiếp tục n = 2 so đk 2!=1
    + thục hiện 3 + 2 + (2-1) ~ 3 + 2 + 1;
    + n = 1 so đk 1 == 1-> return 1 tức true hết đk so kết thúc lặp
    --> in ra kết quả: sum = 3 + 2 + 1
*/ 
