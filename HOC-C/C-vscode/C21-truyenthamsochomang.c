/* bài tập về truyền tham số cho mảng- đây là dạng bài tập truyền thám số cho mảng thông qua 2 bài toán
1/ tính trung bình cộng
2/ đếm ố dương và tính trung bình cộng các số dương
*/


#include<stdio.h>

// hàm nguyên mẫu prototype
float trungBinhCong(int a[], int x);
float tbcSoDuong(int a[], int y);

// hàm mai chính
int main(){
    int n;
    int i;

    do{
        printf("\nenter the n: ");
        scanf("%d", &n);
    }while(n<0|| n>100);

    int a[n];
    for(i=0; i<n;i++){
        printf("\nmang arr[%d]: ", i+1);
        scanf("%d", &a[i]);
    } 

    // thực thi các hàm

    printf("trung binh cong cua mang arr[%d]: %.2f", n, trungBinhCong(a,n));
    printf("\n");

    float tbcsd = tbcSoDuong(a, n);
    if(tbcsd>0){
        printf("\n>> trung binh cong so duong: %.2f", tbcsd);
    }else{
        printf(" khong thuc thi duoc bai toan vì khong co so duong");
    }
}

// hàm con xây dựng

float trungBinhCong(int a[], int x){
    int tong = 0;
    for(int i=0; i<x;i++){
        tong += a[i];
    }
    return (float)tong/x;
}



// đối với tbc thì mặc nhiện là nhập cả âm và số dường nó vẫn tính nhưng với phép tính tbc mà chỉ số dường thì nó sẽ chỉ tính là số dường mới 
// thỏa điều kiện đề bài mà cộng lại thui
float tbcSoDuong(int a[], int y){
    int tong=0;
     int demSoDuong =0; /* khai báo hàm này nhầm mục đích: khi nhập mảng sẽ có rất nhiều phần tử cả âm lẫn dương lộn xộn.. vì thể khai báo một biến 
     demSoDuong++ lên như này sẽ giúp nó ghi nhận đâu là số dương và cứ một lần ghi nhận nó sẽ tính là 1 và cứ thế tăng lên để biết đc trong một 
     mảng với rất nhiều phần tử âm dương thì giá trị dươg là giá trị nào và có bao nhiêu
     */

    for(int i=0; i<y;i++){
        if(a[i]>0){
            tong += a[i];
            demSoDuong++;  // khai báo lúc này sẽ giúp nó cứ mỗi lần phát hiện một giá trị dương sẽ ghi nhận và đếm lên đc có bao nhiêu số là dương.
        }
    }
    return demSoDuong>0?(float)tong/demSoDuong:-1;
    /* vì giả dụ tất cả mảng nhập vào là âm thì hàm sẽ không thực thi nên đặt ra một đk là nếu các số đã thảo là số dương mà >0 thì nó sẽ tính 
    tbc còn bằng -1 thì sẽ thông báo lỗi là không có giá trị dương*/
}