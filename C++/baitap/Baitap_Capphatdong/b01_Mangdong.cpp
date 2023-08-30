/*Bài tập tạo mảng động:
  + nhập n phần tử tạo mảng động(tối da 10 phần tử)
  --> xuất ra các phần tử đó.
  + nhập thêm số x vào mảng động và xuất ra mảng động có thêm x được chèn vào vị trí cúi của mảng động 
  phần tử x vừa chèn vào
*/
#include<iostream>
using namespace std;
// cấp phát bộ nhớ động
void nhapmang(int *arr, int n);
void xuatmang(int *arr, int n);
void
 chuyendoi(int* &arr, int &n, int x);


// hàm thực thi main
int main(){
  int n,x;
  cout<<"nhap n: "<<endl;
  cin>>n;

  // gán mảng động cho con trỏ
  int *arr = new int[n];
  // nhập mảng
  cout<<endl;
  cout<<"==============Nhap mang=========="<<endl;
 // cout<<"nhap mang arr["<<n<<"]: "<<endl;
  nhapmang(arr,n);

  // xuất mảng ban đầu
  cout<<endl;
  cout<<"xuat mang ban dau: "<<endl;
  xuatmang(arr, n);
  cout<<endl;
  
  // nhâpj phân tử  mới chèn vào mảng
  cout<<"=================================="<<endl;
  cout<<endl;
  cout<<"nhap phan tu muon chen x: "<<endl;
  cin>>x;

  // tiến hành chuyển đổi thêm mảng x vào mảng trên chèn vào
  chuyendoi(arr,n,x);

  // xuất lại mảng
  cout<<"mang sau thay doi chen x la: "<<endl;
  xuatmang(arr,n);

  return 0;
}


/*Các hàm xây dựng chức năng bổ trợ*/

// hàm nhập mảng
void nhapmang(int *arr, int n){
  for(int i = 0;i<n;i++){
       cout<<"arr["<<i<<"]: "<<endl;
       cin>>arr[i];
  } 
}

// xuát mảng cn trỏ cấp phát động
void xuatmang(int *arr, int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

// hàm chuyendoi
void chuyendoi(int* &arr,int &n, int x){
  //cấp phát mảng động với phần tử n + 1 đơn vị để mở rộng
  int N = n +1;
  // gán mảng động cho con trỏ đại diện
  int *tmp = new int[N];
  //copy toàn bộ các phần tử của con trỏ mảng cũ sáng *tmp
  for(int i=0;i<n;i++){
     tmp[i] = arr[i];
  }
  //thêm phần tử mới: nhập x gán vào pt mảng mới vừa mở rộng thêm
  tmp[N-1] = x;

    // tiến hành xóa đi, giải phóng bộ nhớ cũ
    delete[] arr;

  // gán mảng contror mới cho con trỏ cũ
  arr = tmp;
  n = N;
}
