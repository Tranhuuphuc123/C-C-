/*Nhập xuất mảng 1 chiều trong C+++
bai toan: nhap xuat mang tu mang dc copy
*/

#include<iostream>
#include <ctime> // for time()
#include <string>
using namespace std;
#define MAX 1000
// function nhapmang
void Nhapmang(int arr[], int &n){
  // với *&n được sử dụng để truyền tham chiếu cho biến n vào hàm 
  for(int i =0;i<n;i++){
     cout<<"a["<<i<<"]: "<<endl;
     cin>>arr[i];
  }   
}


// function xuất mảng
void Xuatmang(int arr[], int n){
  for(int i = 0; i<n;i++){
     cout<<arr[i]<<" ";
  }
}


// xây dựng function copy mảng:
void Saochepmang(int newArr[], int oldArr[], int n){
  for(int i = 0; i<n;i++){
     newArr[i] = oldArr[i];
  }
}   


// hàm main thực thi code
int main(){
    int arr[MAX];// khai báo mảng
    int n;  // chỉ ra số phẩn tử cần hiên thị thui

    cout<<"nhap vao so luong phan tu mang: "<<endl;
    cin>>n;

    cout<<"----------------------"<<endl;
    Nhapmang(arr, n);

    // xuất mảng ban đầu mảng gốc
    cout<<"-----xuat mang goc ban dau------"<<endl;
    Xuatmang(arr, n);


    // tiến hành copy mang và xuat la: làm theo các bc sao
    cout<<"---------Mang copy-------------"<<endl;
    int arr2[MAX];
    // tiến hành sao chép mảng
    Saochepmang(arr2, arr,n);
    Xuatmang(arr2,n);

    return 0;
}
    

