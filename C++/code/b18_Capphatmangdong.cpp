/*Bài toán cấp phát mảng động sau đây:
 + yêu câu khai báo cấp phát mảng động với new[]
 + gán giá trị cho xuất ra tp các mảng động
 + giải phóng bộ nhớ mảng động
 + nâng sl phần tử mảng thêm 1 va gán gia trị mới
 + xuất lịa mảng động sau thay đổi
*/

#include<iostream>
using namespace std;
int main(){

  // khai báo mảng với n  = 3 phần tử
   int a[3];
  // cấp phát mảng động cho mảng a và gán cho con trỏ arr
   int *arr = new int[3];

   // gán cả 3 phần tử trong mảng a(đại diện quản lý là con trỏ arr) đếu có giá trị vd: 1
   for(int i = 0;i<3;i++){
     arr[i] = 1;
   }

   //xuất giấ trị trc thay đổi thêm phần tử cho mảng
   cout<<"Cac phan tu ban dau: "<<endl;
   for(int i = 0;i<3;i++){
     cout<<arr[i]<<" ";
   }

   cout<<endl;

   /* tiến hành thay đổi thêm phần tử cho mảng bằng trình tự sau*/
   // tạo mảng động có sl phần tử là 4 và gán cho con trỏ khác
   int *new_arr = new int[4];

   // copy toan bộ giá trị của mảng động cũ sang mảng động mới
   for(int  i=0;i<3;i++){
     new_arr[i] = arr[i];
   }
   // tiến hành set giá trị pt 4 của mảng động mới
   new_arr[3] = 2;

   // lúc này cần xóa bỏ đi các giá trị mảng động cũ để hđh cấp phát lại vùng nhớ
   delete[] arr;

   // gán lại vùng nhớ mới(đại diện con trỏ new_arr) cho con tro arr
   arr = new_arr;

   cout<<"Phan tu dc them moi: "<<endl;
   for(int i=0;i<4;i++){
     cout<<arr[i]<<" ";
   }

   return 0;

}  // gán lại vùng nhớ mới(đại diện con trỏ new_arr) cho con tro arr
   arr = new_arr;

   cout<<"Phan tu dc them moi: "<<endl;
   for(int i=0;i<4;i++){
     cout<<arr[i]<<" ";
   }

   return 0;

}



































