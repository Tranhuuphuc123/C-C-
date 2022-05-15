#include<stdio.h>
#include<math.h>
/*>>>> phần khai báo biến toàn cục để gọi các hàm con có kiểu dữ liệu trả về hay còn gọi là prototype hàm nguyên mẫu
hàm nguyên mẫu protoype thông báo cho chtrinh biên dịch biết kiểu dữ liệu hàm trả lại, kiểu và thứ tự các tham số được truyền cho hàm.
chương trình biên dịch dùng hàm nguyên mẫu để kiểm tra các lời gọi từ các hàm con đã khai báo bên dưới hàm main(). <<<*/
char Chuyen_chu_in_hoa(char ch);
int soNguyenTo(int x);
void hoanVi(int a, int b);
int kiemTraSoNguyenTo(int x);
int sochinhphuong(int x);



/*>>>>chương trình main chính<<<*/
 int main(){
    // bài tập kiểm tra số nguyên tố
    /*int n;  // giá trị n của main chứ không phải của hàm soNguyenTo(int x).
    printf("enter the n: ");
    scanf("%d", &n);

    int kt = soNguyenTo(n);   // lệnh truyền hàm con soNguyento vao chương trình chính và chuyền giá trị n vào x của hàm con songuyenTo(x).
    
     // xử lý kết quả

     if(kt==1){
         printf("day la so nguyen to ");
     }else if(kt==0){
         printf("day khong phai la so nguyen to");
     }*/



     // chuyển chữ hoa THÀNH chữ thường
    /*char chuthuong, chuhoa;

    printf("\n enter the chu thuong: ");
    scanf("%c", &chuthuong);
    chuhoa = Chuyen_chu_in_hoa(chuthuong);

    printf("------- chu thuong chuyen thanh chu hoa la----\n\n\n");
    printf(" chu %c da chuyen thanh %c", chuthuong, chuhoa);*/



    // goi và thực hiện chtrinh hoán vị
     int n, p;
     printf("\n enter the n: ");
     scanf("%d",&n);
     printf("\n enter the P: ");
     scanf("%d",&p);

     printf("------------\n");

    hoanVi(n,p); // vi nó là hàm void không có hàm trả về nên không cần gán kiểu dữ liệu



    // kiem tra cac so nguyen to nho hon va bang n

   /* int i, n;

    do{
        printf("enter the n: ");
        scanf("%d", &n);
    }while(n<=1);

    printf("-----------------\n");
    printf(" cac so la so nguyen to: ");
    for(i=2;i<=n;i++){
        int kt=kiemTraSoNguyenTo(i);
        if(kt==1){
            printf(" %d ", i);
        }
    }*/




    // kiểm tra số chính phương

   /* int n,i;
    do{
        printf("enter the n: ");
        scanf("%d",&n);
    }while(n<1);
 
    printf("------------------\n\n");
    printf(" cac so chinh phuong: ");
    for(i=1;i<=n;i++){
        if(soChinhPhuong(i)){
            printf(" %d ", i);
        }
    }*/
     return 0;
}




/*>>> phần khai báo hàm chương trình con<<<<<*/

// bài toán hoán vị sử dụng biến cục bộ và toàn cục
    void hoanVi(int a, int b){
        int t;
        printf("\n gia tri truoc hoan doi la: a = %d && b = %d", a,b);
        t=a; a=b; b=t;
        printf("\n gia tri da hoan vi: a=%d && b= %d", a, b);
    }



//Thực hiện xây dựng hàm kiểm tra số nhạp vào có phải là số nguyên tố không
int soNguyenTo(int x){
    if(x<=1){
         return 0;
    }     
    for(int i=2; i<x-1;i++){
         if(x%i==0){
             return 0;
         }
    }

    return 1;  
}


// hàm kiểm tra các sô nguyên tố nhỏ hơn n
int kiemTraSoNguyenTo(int x){
    if(x<=1) return 0;
    for(int j=2;j<=x;j++){
        if(x%j==0 && x!=j){
            return 0;
        }
    }
    return 1;
}


// xây dựng hàm chuyển chũ thường thành chữ hoa
/*
   trong mã ASCII thì chữ in hoa: A 65-> B 66 ->C 67...Z 90
    //                    in thường: a 97  -> b 98 -> c 99 ... z 122
    vậy để chuyền chữ in thường sáng in hoa có 2 cách:
                           + ký tự thường nhập vào + ký tự in hoa - ký tự in thường ( vd: a + A -a ~ 97+65-97 =65 (A) ta chuyển đc từ a ~ A)
                           + c2 là ta dung fkys từ thường nhập vào - 32 ( vd: a(97) - 32 = 65(A)).
*/

char Chuyen_chu_in_hoa(char ch){
        if( ch>='a' && ch<='z'){
            return (ch - 32);
        }else{
            return ch;
        }
}


// kiểm tra số chính phương, số chính phương là số ta có thể láy căn bậc 2 của nó vd: nhập vào 9 thì cb2 9 la 3 & 3 binf bằng 9 thì 9 là số chính phương
int soChinhPhuong(int x){
    int kc = (int)sqrt(x);
    if(pow(kc, 2) == x){
        return 1;
    }else{
        return 0;
    }
}
