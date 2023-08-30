/*BÀI TẬP LẬP TRÌNH MẢNG ĐỘNG
 Yêu/cầu:
  + Nhập vào một mảng bất kỳ
  + sắp xếp mảng động theo chiều tăng dần
  + sắp xếp mảng động theo chiều giảm dần
*/
#include<iostream>
using namespace std;

// hàm nguyên mẫu prototype
void nhapmang(int *arr, int n);
void xuatmang(int *arr, int n);
void Sapxepmangtang(int *arr, int n);
void Sapxepmanggiam(int *arr, int n);



// hàm thực thi main()
int main(){
  int n;
  cout<<"nhap n: "<<endl;
  cin>>n;

  // cấp mảng động gán cho con trỏ arr
  int *arr = new int[n];

  // nhập mảng
  cout<<endl;
  nhapmang(arr,n);
  cout<<endl;

  // xuát mảng chưa sắp xếp
  cout<<endl;
  cout<<"=======Mang chua sap xep======"<<endl;
  xuatmang(arr,n);
  cout<<endl;

  // sắp xếp mảng tăng dẫn
  Sapxepmangtang(arr, n);

  // xuất lại mảng
  cout<<"======Mang tang dan======"<<endl;
  xuatmang(arr,n);

  return 0;
}

/*các hàm chức năng*/
//function nhập mảng
void nhapmang(int *arr, int n){
  for(int i = 0;i<n;i++){
    cout<<"arr["<<i<<"]: "<<endl;
    cin>>arr[i];
  }
}

// function xuất mảng
void xuatmang(int *arr, int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}




// sắp xếp mảng tăng dần
void Sapxepmangtang(int *arr, int n){
  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
      if(arr[i]>arr[j]){
          int temp = arr[i];
          arr[i]=arr[j];
          arr[j] = temp;
        }   
      } 
    }
  }
//--> sử dụng hoán vị



// sắp xếp mảng giảm dần
void Sapxepmanggiam(int *arr, int n){
  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
      if(arr[i]<arr[j]){
          int temp = arr[i];
          arr[i]=arr[j];
          arr[j] = temp;
        }   
      } 
    }
  }

// sử dụng hoán vị 




