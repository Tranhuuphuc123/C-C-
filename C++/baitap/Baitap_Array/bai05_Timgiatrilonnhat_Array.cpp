/*trog bài này ta tìm giá trị lớn nhất của mảng*/

#include<iostream>
using namespace std;
#define MAX 10

// funcftion nhập mảng
void nhapmang(int arr[], int &n){
  for(int i =0;i<n;i++){
     cout<<"arr["<<i<<"]: "<<endl;
     cin>>arr[i];
  }
}


// function xuất mảng
void xuatmang(int arr[], int n){
   for(int i =0;i<n;i++){
     cout<<arr[i]<<" "; 
  }
}


// tim gia trị lớn nhất mảng
int Max_Array(int arr[], int n){
  int max = arr[0];
  for(int i =0;i<n;i++){
    if(arr[i]>max){
      max= arr[i];
    }
  }
  return max;
}


// function thực thi
int main(){
  int arr[MAX];
  int n;

  cout<<"nhap n: "<<endl;
  cin>>n;

  nhapmang(arr,n);

  cout<<"==========================="<<endl;
  xuatmang(arr,n);



  cout<<endl;
  cout<<"gia tri lon nhat trong mang la: "<<Max_Array(arr,n);

  return 0;
}
