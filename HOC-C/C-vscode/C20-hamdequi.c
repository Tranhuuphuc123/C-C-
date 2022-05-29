/* yêu cầu bài toán hàm đệ qui là gọi tên chính hàm đệ qui thông qua bài toán  
xử lý bài toán về chuyển mã thập phân thành nhị phân*/


#include<stdio.h>

/*hàm prototype*/
void hamNhiPhan(int x);

/* hàm main*/
int main(){
    int n;
    do{
        printf("enter the n: \n"); 
        scanf("%d", &n)   ;
    }while(n<0);

 hamNhiPhan(n);
    
}

/* hàm con xây dựng*/

void hamNhiPhan(int x){
    if (x==0)
      return;
    else{
        int r = x%2;
        hamNhiPhan(x/2); // lưu ý đối với hàm đẹ qui ta cần gọi lại chính nó
           /* giải thích cho x/2 là sau khi chia lấy dư thì dùng phép chia x/2 là chia phần nguyên để tách số chỉ lấy phần nguyên đảm bảo độ
            chính xác cao*/
        printf("%d", r);
    }
}