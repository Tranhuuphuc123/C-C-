/*Nhập Mảng n có 10 phần tử: xong nhập vị trí muốn xóa thì sẽ có mảng đó đi*/


#include<iostream>
using namespace std;
int main(){
  #define MAX 10

  int n, x;
  int arr[MAX];
  cout<<"nhap vao n phan tu: "<<endl;
  cin>>n;

  cout<<"==========nhap mang============"<<endl;
  // nhap vao tung phan tu của mảng
  for(int i =0;i<n;i++){
    cout<<"arr["<<i<<"]: "<<endl;
    cin>>arr[i];
  } 

  cout<<"---------------------"<<endl;
  // xuất mảng
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  cout<<endl;
  // nhập phần tử muốn xóa
  cout<<"nhap vi tri phan tu can xoa: "<<endl;
  cin>>x;

  // tiến hành xóa đi phần tử đó
  for(int i =x;i<n-1;i++){
     arr[i] = arr[i+1];
  }
  n--;
  /*giai thích:
    
  - mảng thực tế nhập vào có 4 pt 0->4
  tướng ứng vị tí:  0    1    2    3
  value tương ứng: 10   20   30   40
 -> giả dụ nhập x = 1 tức xóa đi số 20 ở vtri arr[1]=20
 -> cho vlap chay tu x-> gia tri gần cúi n-1 tưc vtri 3
    la cho loop chạy tu vitri  x  tơi 3 thui
 -> vong lặp thực thi:
 ->dtien: 10 20 30 40
 -> chạy tu i = x = 1: luc này ở vtri arr[1] = arr[2]=30
  vlap dau se thanh: 10 30 30 40
 -> tiếp tục tới i = x = 2: arr[2]=arr[3]=40
  vlap ktiep se thanh: 10 30 40 40
 -> i=x=3 vi pham do n - 1 = 4-1 =3, vay x = 3 vi pham dieu kien i<n-1~ i<3. thoat ra khoi vong lap
 -> với n--; no se giam sl phần tử mảng xuống 1 con 3 vitri phần tử 0 1 2 ~ 10 30 40
 ===> vậy là đã đẩy đc vtri x = 1 ~ arr[1] = 20 ra khỏi mảng

 */

  // xuát mảng lại lần nữa
 cout<<"---------------------"<<endl;
  // xuất mảng
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }


  return 0;

}
