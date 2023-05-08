/*Phàn bài tập tổng hợp code c++ 01*/
// bai 01: nhap x: row, y: col.. in ra hinh chưx nhật
#include<iostream>
using namespace std;

int main(){
  int i,j;
  int x,y;
  int heigth;
  int width;
  int length;

  cout<<"nhap vao so dong: "<<endl;
  cin>>x;
  cout<<"nhap vao so cot: "<<endl;
  cin>>y;
  cout<<"nhap chieu rong cua tam giac: "<<endl;
  cin>>width;
  cout<<"nhap vao do dai canh tam giac deu: "<<endl;
  cin>>length;
 
  // xuất ra hinh chữa nhật theo mảng row/col: 6/6
  for(i = 0;i<x;i++){
    for(j=0;j<y;j++){
      cout<<"*"<<" ";
    }
    cout<<"\n";
  }


  cout<<"============================"<<endl;
  cout<<"hinh vuong rong ruot"<<endl;

  // xuát ra hình chữ nhật rỗng ruột bên trong thân
  for(i = 0;i<x;i++){
    for(j=0;j<y;j++){
      // kiểm tra xem các cột có liền kê nhau
      if(i==0||i==x-1||j==0||j==y-1){
        cout<<"*"<<" ";
      }else{
        cout<<"  ";
      }
    }
    cout<<"\n";
  }

  cout<<"-------------------"<<endl;
  cout<<"tam giac"<<endl;
  // in hinh tam giac vuong

  heigth = width;
  for(i=0;i<heigth;i++){
    for(j=0;j<width;j++){
      cout<<"* ";
    }
       cout<<endl;
       width--;
  }

  cout<<"--------------------"<<endl;
  cout<<"==in tam giac dao nguoc"<<endl;

    for(i=0;i<heigth;i++){
      for(j=width-1;j>=0;j--){
        cout<<"* ";
      }
         cout<<endl;
         width++;
    }


  // in ra tam giác đều có 3 cạnh bằng nhau
    cout<<"----------------------"<<endl;
    cout<<"--tam giac deu----"<<endl;
    for(i=1;i<=length;i++){
      // in ra khoảng trống trc mỗi ký tự tam giác
      for(j = 1; j<=length-i;j++){
        cout<<" ";
      }
      //in ra ky tu * tao tam giac
      for(int k =0;k<=i*2-1;k++){
          cout<<"*";
      }

      cout<<endl;
    }


  return 0;

}
