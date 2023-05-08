/*Bài tập về nhập xuất và in mảng 2 chiều trong C++*/
#include<iostream>
using namespace std;

// tạo biến hắng số sl tối đa row and col của mảng có thể đạt đc
#define ROW 100
#define COL 100

/* xây dựng mảng nhập 2 chiều: int &r, int &c là cách truyền số
 phần tử cột và dòng được hiên thị chỉ định từ người dùng cho mảng.. còn COL, ROW 100 là giới hạn có thể đạt đc thui
*/
void Nhapmang(int arr[][COL],int &r, int &c){
   cout<<"nhap gioi han so phan tu row: "<<endl;
   cin>>r;
   cout<<"nhap gioi han so phan tu col: "<<endl;
   cin>>c;

   for(int i = 0;i<r;i++){
     for(int j = 0; j<c;j++){
         cout<<"arr["<<i<<"]"<<"["<<j<<"]: "<<endl;
         cin>>arr[i][j];
     }
   }
}


// function xuất mảng
void Xuatmang(int arr[][COL], int r, int c){
  for(int i = 0;i<r;i++){
       for(int j = 0; j<c;j++){
          cout<<arr[i][j]<<"\t";       
       }
       cout<<endl;
  }
}


// function main thực thi
int main(){
 
  //cách thông thường
/* int arr[3][3];

  // nhập từng phần tử mảng 2 chiều
  for(int i =0;i<3;i++){
    for(int j =0; j<3;j++){
       cout<<"arr["<<i<<"]"<<"["<<j<<"]: "<<endl;
       cin>>arr[i][j];
    }
  }


  // xuất mảng 2 chiều
  for(int i =0;i<3;i++){
    for(int j=0; j<3;j++){
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }*/



  // sủ dụng cách dùng truyền mảng vào function
  int arr[ROW][COL];
  int row,col;

  // gọi thực thi hàm Nhapmang và gán đối số của hàm main vao hàm Nhapmang
  Nhapmang(arr,row,col);
  cout<<"-------------------------"<<endl;
  Xuatmang(arr, row, col);

  return 1;
}
