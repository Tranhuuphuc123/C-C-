/*
 Bài tập nhập vào một mảng có tối da  phần tử:
 sau đó thêm một phần tử mới nó sẽ tự động thêm vào mảng vừa nhập trc đó
*/

#include<iostream>
using namespace std;
int main(){
  #define MAX 10
  
  int arr[MAX];
  int n,x;

  cout<<"nhap vao so han tu mang thuc te: "<<endl;
  cin>>n;

  // nhap tung phan tu mang
  for(int i =0;i<n;i++){
     cout<<"arr["<<i<<"]: "<<endl;
     cin>>arr[i];
  }

  cout<<"========xuat mang=========="<<endl;

  for(int i = 0; i<n;i++){
    cout<<arr[i] << " ";
  }

  // nhập phàn tử mảng mới và thêm vao mảng trc đó
  cout<<endl;
  cout<<"nhap phan tu mang moi: "<<endl;
  cin>>x;

  arr[n] = x;
  n++;

  //xuất mảng cùng với giá trị vừa thêm vào
  for(int i = 0;i<n;i++){
      cout<<arr[i] << " ";
  }


  return 0;
}
