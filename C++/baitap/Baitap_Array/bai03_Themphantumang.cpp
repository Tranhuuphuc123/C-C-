/*bài toán tương tựL
 Nhập phần tử mang có tối đa 10 phần tử
 nhập vị trí x và giá trị y mới
 --> tiến hành chèn phần tử y vào vị trí x của mảng
 tưc thay thế vị trí x cũ thành giá trị y mới
 (lưu ý không có đi vị trí x cũ chỉ chèn vào thui tức là thêm phần tử nhưng thêm ở vị trị x và đẩy giá trị vtri x ra sau thui)
*/

#include<iostream>
using namespace std;
int main(){
 #define MAX 10
 int n, x,y;

 int arr[MAX];

 cout<<"------------------"<<endl;
 cout<<"nhap vao tung phan tu mang: "<<endl;
 cin>>n;

 for(int i = 0;i<n;i++){
    cout<<"arr["<<i<<"]: "<<endl;
    cin>>arr[i];
 }

 cout<<"------------------------"<<endl;
 cout<<"xuat phan tu mang: "<<endl;

 for(int i =0;i<n;i++){
   cout<<arr[i]<<" ";
 }

 // tiến hành nhâp y và vị trí muốn thay thế
 cout<<endl;
 cout<<"nhap gia tri muon thay the: "<<endl;
 cin>>y;
 cout<<"nhap vi tri muon chen vao: "<<endl;
 cin>>x;


 // tiến hành thay thế
 for(int i = n; i>x;i--){
    arr[i] = arr[i-1];
 }
 arr[x] = y;
 n++;

 /*giải thích thuật toán:
vd: n=4 vong lap sẽ đc 4 pt tu 0->4:
          0     1     2     3
value:    10    20   30     40   
tiến hành nhập y: 15 chèn vao vitri x: 1 tức arr[1] = 20 thay thành 15.
-> mục tiêu là để đc arr[4]: 10 15 20 30 40
-> vậy ta cho loop chạy từ n tới i>x tức là n->arr[2]
-> loop1: n=4 ~ arr[4] = arr[3] = 40:
     10   20   30   40   40
-> loop2; giam n=3~ arr[3] =arr[2] = 30:
     10   20   30   30   40 
-> loop3: giam n=2 ~ arr[2]=arr[1]=20:
     10   20   20   30   40 
-> loop4: giam n=1 vi pham dk i>x. kt loop ra ngoài
-> tại arr[x=1] = y ~ arr[1] = thany bằng value 15:
-> và tiến hành n++ là tăng kích thước mảng từ 0->3 ~ 0->4:
     10   15   20   30   40.  
*/


 // xuất lại mảng
 cout<<endl;
 cout<<"----------xuat mang thay the---------"<<endl;

 for(int i =0;i<n;i++){
   cout<<arr[i]<<" ";
 }

 return 0;

}
