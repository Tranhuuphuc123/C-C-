/*Tiềm hiểu về nạp trồng toan tử trong c++
==> tông thường nếu mún gán giá trị khi nhập ta dùng cin>>
==> tuy nhiên với struct các kiểu dữ liệu tự định nghĩa thì diều
đó nó không hiểu
==> Nạp chồng toán tử là phương thức giải quyết
****Vậy hiểu rõ Nạp chồng toán tử là gì:
 + 1/ nạp chồng toán tử Overload là cách làm việc với kiểu dl tự định 
 nghĩa
 + 2/ Nạp chồng toán tử cho phép tùy chỉnh các toán tử hd với kiểu dl
 tự định nghĩa
 + để nạp chồng toán tử cần dùng cú pháp:
    
        return_type operator operator_name>>(parameters) {
            // Implement the operator functionality here
        }

        ** trong đó
          ++ return_type: là kiểu dữ liệu của kết quả trả về: friend...
          ++ operator: cấu trúc phải có
          ++ operator_name: tên toan tử bạn mún gán:
            +++ dùng  >>, <<: kiểu nhập xuất
            +++ '+', '-', '*', '/' .. các toán tử toán hạng
            ....
            == lưu ý thêm toán hạng sau _name: 
               vd:
                   operator>>,operator<<
                   operator+, operator-,opreator*, operator/...


          ++ parameters: là đối số truyền vào để thực hiện phép tính*/



#include<iostream>
using namespace std;

/*hàm nguyên mẫu*/
struct Point{
  int x, y;

  /*triển khai nạp trồng toán tử: tạo cach thức nhập value input
  >> lưu ý:
   + tream &c_in: tên tham số đại diện cho cách thức cin>> trong hàm main
   + Point &b: tên tham số dại diện cho Point p1 biến truyền nhập vào cin>>p1
   => lưu ý lun truyền kiểu tham số để ghi nhận đc value thay đổi ở
   vùng nhớ gốc*/
  friend istream& operator>>(istream &c_in, Point &p){
      cout<<"x = ";
      c_in>>p.x;
      cout<<"y = ";
      c_in>>p.y;

      return c_in;
  }


  // method nạp chồng toán tủ: Ouput
  friend ostream& operator<<(ostream &c_out, Point p){
     c_out<<"gia tri x: "<< p.x <<endl;
     c_out<<"gia tri y: "<< p.y <<endl;
     return c_out;
  }

  // method nạp chồng toán tử: phép công
  friend Point operator+(Point p1, Point p2){
    Point sum;
    sum.x = p1.x + p2.x;
    sum.y = p1.y + p2.y;

    return sum;
  }
};



/*hàm chính main*/
int main(){
   // gọi struct 
  Point p1, x,y;

  //nhập với nạp chồng toán tử istream
  cin>>p1;

  // xuất với nạp chống toán tử ostream
   cout<<p1;

  // tính tổng với nạp trồng toán tử Add
   cout<<"nhap x: "<<endl;
   cin>>x;
   cout<<"nhap y: "<<endl;
   cin>>y;

   Point Sum = x + y;
   cout<<"tong la: "<< Sum;

  return 0;
}
