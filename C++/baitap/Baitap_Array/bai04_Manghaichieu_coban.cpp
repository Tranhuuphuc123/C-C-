/*Thục hành nhập mảng 2 chiều và tính tổng các value của mảng
--> ứng dụng funtion vào bài này
*/

#include<iostream>
using namespace std;

#define ROW 10
#define COL 10

// tạo funtion nhập mảng
void nhapmang(int arr[][COL], int &r, int &c){
  for(int i = 0;i<r;i++){
    for(int j = 0;j<c;j++){
      cout<<"arr["<<i<<']'<<"["<<j<<"]: "<<endl;
      cin>>arr[i][j];
    }
  } 
}


// method xuất mảng
void xuatmang(int arr[][COL], int r, int c){
  for(int i = 0;i<r;i++){
    for(int j =0;j<c;j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}


// function tinh tong các value của mảng hai chiều
void tongmang(int arr[][COL], int &r, int &c){
  int count  = 0;
 for(int i = 0;i<r;i++){
    for(int j =0;j<c;j++){
       count+=arr[i][j];
       cout<<arr[i][i]<<" ";
       if(j<c-1){
         cout<<"+";
       }
    }
    if(i<r-1){
      cout<<"+";     
    }
  }
  cout<<" = "<<count;
}

// hàm thực thi
int main(){
  int arr[ROW][COL];
  int row, col;

  cout<<"nhap so dong: "<<endl;
  cin>>row;
  cout<<"nhap so cot mong muon: "<<endl;
  cin>>col;

  // gọi và thực thi nhập mảng với function vừa xấy dựng
  nhapmang(arr,row,col);

  cout<<"==========================="<<endl;
  xuatmang(arr, row,col);

 cout<<"==========================="<<endl;
 cout<<"tong mảng arr["<<row<<"]"<<"["<<col<<"]: ";
 tongmang(arr,row,col);


  return 0;
}

