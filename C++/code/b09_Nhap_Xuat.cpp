/*
  Nhập xuất nâng cao với dạng hiển thị định dạng manipulator
  tạo một bảng table thông tin sinh viên
*/

#include<iostream>
// thư viện toán tử manipulator
#include<iomanip>

using namespace std;
int main(){
  cout<<"bang thong tin sinh vien"<<endl;
  cout<<"-------------------------------"<<endl<<endl;

  // mục đề mục tiêu đề của table thông tin
  cout<<setw(5)<<left<<"ID";        // cột column "ID có k/c 5, canh lề trái
   
  cout<<setw(30)<<left<<"Name";   // tg tự k/c 30, canh lề trái
  cout<<setw(20)<<right<<"Address"<<endl;

  //dùng dấu '-' đển ngăn tiêu đề và nội dung
  cout<<setfill('_');      // thiết lập '_' để hiển thị.
  cout<<setw(55)<<"_"<<endl;    // hiển thị '_' với kích thước 55
 

/*reset fill băng khoản trống: nghĩa lã sau khi xuất dong với
với dâu '--------------' thì sau đó khôi phục lại khoản trắng
để các giá trị sau không có bị in ra dâu -- nữa.
*/
  cout<<setfill(' ');


  // hiển thị nội dung dưới dấu ngăn cách '-'
  //row 1
  cout<<setw(5)<<left<<1;     // hiển thị số 1 ở đúng mục ID đã setup trc
  cout<<setw(30)<<left<<"Tran Van A";  // hiển thị tên đúng mục Name
  cout<<setw(20)<<right<<"Can Tho"<<endl;  // Hiển thị địa chỉ đúng mục Address.


  // row 2
 cout<<setw(5)<<left<<2;     
 cout<<setw(30)<<left<<"Tran Van B";   
 cout<<setw(20)<<right<<"Ca Mau"<<endl; 

 //row 3
 cout<<setw(5)<<left<<3;     
 cout<<setw(30)<<left<<"Tran Van C";   
 cout<<setw(20)<<right<<"Vinh Long"<<endl;



 return 0;
//==> kết quảng xuất ra bảng: 
/*
   ===>< kw xuất ra bảng như sau:

        ID             Name                             Address
        -------------------------------------------------------
        1             Nguyen Doan Ngoc Giau             Sai Gon
        2             Tran Kim Long                     Da Lat
        3             Nguyen Son Tung                   Dong Nai
        .........

*/ 
}
