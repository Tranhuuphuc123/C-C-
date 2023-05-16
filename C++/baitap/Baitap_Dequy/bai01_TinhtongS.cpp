/*Bài tập:
 Tính tỏng và in các số nguyên nguyên tố từ 2 -> n.
  + cách 1 dùng vòng lặp
  + cách 2 dùng đệ quy
*/

#include<iostream>
using namespace std;

// khởi tố hàm nguyên mẫu prototype
bool Songuyento(int n);
int Tongnguyento(int n);
int Tongnguyento_dequy(int n);



// mehtod chính thực thi main()
int main(){
  int n;
  cout<<"nhap so n: "<<endl;
  cin>>n;

 cout<<"====================cach thuc loop==============="<<endl;
 cout<<endl;
  // tính tổng theo vòng lặp
 cout<<"tong cac so nguyen to tu 2 -> "<<n<<"la: "<<Tongnguyento(n)<<endl;

 cout<<"====================cach thuc de quy==============="<<endl;
 cout<<"tong so nguyen to theo de quy tư 2 -> "<<n<<"la: "<<Tongnguyento_dequy(n);

 return 0;
}



// xây dựng method kiểm tra số nguyên tố
bool Songuyento(int n){
  if(n<1){
    return false;
  }
  for(int i = 2;i<n-1;i++){
    if(n%i==0){
        return false;
    }
  }
  return true;
}


// method tính tổng các số nguyên tố theo vòng lặp loop
int  Tongnguyento(int n){
  int result =0;
  for(int i=2;i<=n;i++){
    if(Songuyento(i)){
      result +=i;
    }
  }
  return result;
}


// method tính tổng số nguyên tố theo kiểu đệ quy
int Tongnguyento_dequy(int n){
  if(n==2){
    return 2;
  }
  if(Songuyento(n)){
    return n + Tongnguyento_dequy(n-1);
  }
  return Tongnguyento_dequy(n-1);

 /*Giải thích chi tiết đoạn code:
   + đầu tiền ktra nếu n nhập vào là 2, 2 là số nguyenr tố in ra 2-> tổng bằng 2
   + nếu vd n = 5:
     ++ Songuyento(5) -> ktra-> kw: 5 là số nguyên tố
     ++ (*) trả về 5 + Tongnguyento_dequy(4)-> tiếp tục ktra
     ++ Tongnguyento_dequy(4)-> kiêm tra tiếp:Songuyento(4))-> 4 không lá snt
     ++ thoát ra đk if->return Tongnguyento_dequy(3)-> tiếp tục kiểm tra: tưc lá Tongnguyento(4) = Tongnguyento(3)(**)
     ++ Tongnguyento_dequy(3)-> Songuyento(3)-> kw 3 lá số nguyên tố
    -> return: 3 + Tongnguyento(2)(***) -> ktra n = 2
     ++ n==2-> trả về return : 2(****)
    
     ==>từ (*)(**)(***)(****) thay thế các vị trí tương như sau:
       kw: 5 + Tongnguyento_dequy(4)
         ~ 5 + Tongnguyento_dequy(3)
         ~ 5 + 3 + Tongnguyento(2)
         ~ 5 + 3 + 2 = 10
         -> hoàn thành chỉ tiêu.
*/
}



