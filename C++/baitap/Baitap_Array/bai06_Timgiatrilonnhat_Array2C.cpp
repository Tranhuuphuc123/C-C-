/*
 Nhập mảng 2 chiều tiềm giá trị lớn nhất mõi dòng
 vd  1 2 3
     5 6 8
max: dòng 1 là 3
max: đòng 2 là 8
*/

#include<iostream>
using namespace std;

#define ROW 10
#define COL 10

// function nhập mảng 2 chiều
void nhapmang(int arr[][COL], int &r, int &c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<"arr["<<i<<"]["<<j<<"]: "<<endl;
      cin>>arr[i][j];
    }
  }
}


// function xuất mảng
void xuatmang(int arr[][COL], int r, int c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}


//function tin max Array
void Max_Array2c(int arr[][COL], int r, int c){
   for(int i = 0;i<r;i++){
    int max = arr[i][0];
    for(int j=0;j<c;j++){
      if(arr[i][j]>max){
        max = arr[i][j];
      }
    }
     cout<<" gia tri max dong "<<i+1<<": "<<max<<endl;
  }
}


// hàm thực thi
int main(){
 int arr[ROW][COL];
 int row, col;

 cout<<"nhap vao so cot: "<<endl;
 cin>>row;
 cout<<"nhap vao so dong: "<<endl;
 cin>>col;

 nhapmang(arr,row,col);

 cout<<"========================"<<endl;
 xuatmang(arr,row,col);

 cout<<"------------------------"<<endl;
 Max_Array2c(arr,row,col);

 return 0;
   
}
