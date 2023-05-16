/*tiềm hiểu mối tương quan giữa con tro và mảng Array*/
#include<iostream>
using namespace std;

// tạo một function chuyển đổi mảng thành con trỏ mảng
void changeArray(int *arr){
   /* thực thi tí thay đổi:
       gán *arr = 1 đc hiểu là pt đầu thành value 1
           + vì con trỏ trong mảng chỉ truy xuất đc pt đầu tiên nếu không chỉ rõ pt mảng thứ mấy.
           nên khi để con trỏ  = 1 thì mặc nhiên giá trị đầu của mảng thành 1.
          + arr[2] = 3; --> đc hiểu gán pt mảng t2 là value 3
  */
   *arr = 1;
   arr[1] = 3;

}


// hàm thực thi
int main(){
   int arr[4] ={5,8,2,7};
   cout<<"in cac phan tu mang khi chua chuyen doi: "<<endl;

   cout<<"arr["<<0<<"]: "<<arr[0]<<endl;
   cout<<"arr["<<1<<"]: "<<arr[1]<<endl;

   // thực thi chuyển đôi mảng thành mảng con trỏ
   changeArray(arr);
   /*
    --> lúc này đối số arr chuyền vào sẽ thành  con trỏ arr 
    như tham số khai báo ở function
  */

   cout<<"mang arr con tro sau khi chuyen doi: "<<endl;
   cout<<"arr["<<0<<"]: "<<arr[0]<<endl;
   cout<<"arr["<<1<<"]: "<<arr[1]<<endl;

   return 0;
}

/* kết quả: trc khi thay đôi
            + arr[0]: 5
            + arr[1]: 8
          sau khi chuyển đổi
            + arr[0]: đc gán là 1
            + arr[1]: gán là 3

*/

