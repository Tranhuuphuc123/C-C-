/*trong bài tập này sẽ tiềm hiểu về mảng động
 Bài tập:  
   + Nhập mảng đông-> xuất thông tin 
   + nhập vị trí mảng động muốn xóa
   -> xóa đi value tương ứng phần tử muốn xóa
*/

#include<iostream>
using namespace std;

// hàm nguyên mẫu Prototype
void nhapmang(int *arr, int n);
void xuatmang(int *arr, int n);
void Remove(int* &arr, int &n,int x);

// hàm thực thi
int main()
{
   int n,x;
   cout<<"nhap n: "<<endl;
   cin>>n;

   // cấp phát mảng động gàn cho con trỏ
   int *arr = new int[n];

   // tiến hành nhập mảng;
   cout<<endl;
   cout<<"========================"<<endl;
   nhapmang(arr,n);

   // xuất mảng ban đầu chưa thay đổi
   cout<<endl;
   cout<<"==========Xuat mang ban dau========="<<endl;
   xuatmang(arr,n);
   cout<<endl;

   // nhập vị trí mảng muốn xóa
   cout<<"nhap vi tri mang muon xoa: "<<endl;
   cin>>x;
   cout<<endl;
   Remove(arr,n,x);

   // xuât lại mảng sao thay đổi
   cout<<endl;
   cout<<"===========Mang sau remove================"<<endl;
   xuatmang(arr,n);


   return 0;
}


/* các function phụ trợ*/
// function nhập mảng động
void nhapmang(int *arr, int n){
  for(int i =0;i<n;i++){
    cout<<"arr["<<i<<"]: "<<endl;
    cin>>arr[i];
  }
}

// function xuất mảng động
void xuatmang(int *arr, int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

// function xáo vị trí mảng cần xóa
void Remove(int* &arr, int &n, int x){
 //cấp phát mảng đọng mới với n-1
  int N = n-1;
  // gán mảng động cho con trỏ khác
  int *temp = new int[N];

  // thực hiện xóa phần tử cần xóa
  for(int i=x;i<n-1;i++){
      arr[i] = arr[i+1];
  }
  /*
    Ở bài trước về Baitap_Array đã giải thích rõ về cách sửu dụng Array
    để xóa bớt đi phần tử chỉ đinh:
     + cơ bản là giảm sl n phần tử
     + thay thế arr[x]: thì x ở đây là ngay phần tử muốn xóa
     sẽ thay bằng giá trị của của phần tử sau nó
     --> cứ thế dồn lên lằm mất đi value ở vtrí muốn xóa
  */

 //copy thay đổi mảng cũ sang mảng động con trỏ mới
  for(int i=0;i<N;i++){
    temp[i] = arr[i];
  }

  //giái phóng bộ nhớ cấp phát cho hệ điều hành
  delete[] arr;
  
  // tiến hành gán lại các thay đổi cho mảng động arr và n phần tử
  arr = temp;
  n = N;
}
 

