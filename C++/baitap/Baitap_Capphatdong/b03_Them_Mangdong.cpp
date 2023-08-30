/*
 Bài tập: cấp phát  mảng động
 y/c bài toán:
   + cấp phát mảng động gán cho con trỏ đại diện
   + nhập mảng động với n phần tử không vượt quá 10 phần tử
   + tiến hành nhập một giá trị mới mún chèn vào
   + nhập vị trí mảng cần chèn
   + xuất ra kết quả sau khi đã chèn phần tử mới vào mảng động
*/

#include<iostream>
using namespace std;

// hàm nguyên mẫu
void nhapmang(int *arr, int n);
void xuatmang(int *arr, int n);
void Add_Array(int* &arr, int &n, int x, int y);

// hàm thực thi
int main(){
  int n,vitri, giatri_thaythe;

  cout<<"nhap n:"<<endl;
  cin>>n;
  cout<<endl;

  // cấp phát mảng động cho con trỏ arr
  int *arr = new int[n];

  // tiến hành nhập mảng
  cout<<"========Nhap mang========="<<endl;
  nhapmang(arr,n);
  cout<<endl;

  // xuất mảng
  cout<<"========xuat mang========"<<endl;
  xuatmang(arr,n);
  cout<<endl;


  // tiến hành nhập giá trị cần chèn 
  cout<<"================================"<<endl;
  cout<<"nhap value can chen: "<<endl;
  cin>>giatri_thaythe;

  cout<<"nhap vi tri can chen: "<<endl;
  cin>>vitri;


  // tiến hành chèn phần tử y vào vị trí x
  Add_Array(arr,n,vitri,giatri_thaythe);

  //tiến hành xuất lại thông tin sau thay đổi
  cout<<"==========Mang dong sau thay doi================"<<endl;
  xuatmang(arr,n);

  return 0;

}


// các function chức năng xây dựng riêng
// function nhập mảng động
void nhapmang(int *arr, int n){
  for(int i = 0;i<n;i++){
    cout<<"arr["<<i<<"]: "<<endl;
    cin>>arr[i];
  }
}

// funtion xuất mảng
void xuatmang(int *arr, int n){
  for(int i = 0; i<n;i++){
    cout<<arr[i]<<" ";
  }
}

// function thêm mảng
void Add_Array(int* &arr, int &n, int x, int y){
  // với x: là vị trí cần chèn, y là giá trị thay thếarr[x] = arr[y];

  // mở rộng giớ hạn mảng
  int N = n+1;
  // cấp phát mảng động mới cho con trỏ # tm thời
  int *temp = new int[N];

 // copy dữ liệu mảng động cũ sang mảng động mới
  for(int i = 0;i<n;i++){
    temp[i] = arr[i];
  }

  // thực hiện chèn phần tử vào mảng động
  for(int i = N -1; i>x;i-- ){
     temp[i] = temp[i-1];
  }
   temp[x] = y;

   /*
    Nhưu ở bài Themphantu của BiatapArray đã có thực thi đoạn code này
    -> ở đây ta làm lại như dậy nhưng theo cấp phát mảng động
    + ta gán value của mảng cũ sáng mảng con trỏ temp
    + tiến hành nới rộng n phần tử lên 1 ô mới
    + chạy vòng lập tính từ phần tử cúi và gán value của pt trc
    nó cho pt cúi ~ tg tự dậy ta làm cho tới đk i>x tữ trc vị
    trí cần chèn vao thì kt vòng lặp
    + ở ngay vị trí x ta thay thế bằng giá trị y vừa nhập
  */

   // tiến hành xóa giải phóng bộ nhớ
   delete[] arr;

   // tiến hành gán lại mảng con trỏ temp cho arr và biến N mới cho n
   arr = temp;
   n =  N;
}

