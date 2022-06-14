/* Viết chương trình thực hiện yêu cầu từ bàn phím( yêu cầu từ meneu lựa CHỌN ĐỂ THỰC THI yêu cầu từ phái người dùng */
#include<stdio.h>
#include<stdlib.h>

/*hàm nguyên mẫu prototype*/
int soNguyenTo(int x);
int tong(int a, int b);

/*hàm chính main*/
int main(){
    int a,b,n;
    int luachon = 0;
    do{
       printf(" \n nhap vao gia tri n: ");
       scanf("%d", &n); 
       
        printf("********************************************************\n");
        printf("*\t1. thuc hien kiem tra so nguyen to: \n*");
        printf("*\t2. thuc hien kiem tra tong = a +b: \n*");
        printf("\t0. thoat chuong trinh \n *");
        printf("********************************************************\n");

        printf(">>Lua chon cua ban: ");
        scanf("%d", &luachon);
      
    }while(luachon!=0 && luachon!=1 && luachon!=2);

    switch(luachon){
        case 1:
            soNguyenTo(n);
            break;
        case 2: 
           tong(a,b);
           break;
        case 0:
            break;
        default:
           printf("lua chon khong dung can lua chon dung yeu cau \n");
    }
}


/*hàm con xây dựng*/
// ham kiểm tra nguyên tố
int soNguyenTo(int x){
    if(x<=1){
        printf(" %d khong la so nguyen to", x);
    }
    for(int i=2; i<x-1; i++){
        if(x%i==0){
            printf(" %d khong phai la so nguyen to \n",x);
        }
    }
     printf(" %d la so nguyen to",x);
}


// hàm tính tổng
int tong(int a, int b){
    int sum  = a + b;

    printf("tong la: %d + %d = %d",a,b, sum);

}
