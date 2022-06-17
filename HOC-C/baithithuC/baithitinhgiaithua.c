/* tính giai thừa*/
#include<stdio.h>

/*hàm nguyên mẫu prototype*/
int tinhGiaiThua(int x);

/*hàm main chính*/
int main(){
    int n;
    printf("enter the n: ");
    scanf("%d",&n);

    printf("----------------\n");
    tinhGiaiThua(n);
    

}


/*thàm con*/
int tinhGiaiThua(int x){
    int giaithua =1;
    for(int i=1;i<=x;i++){
        giaithua *=i;
    }

    printf("giai thua cua %d!: ", x);
    for(int i=1;i<=x;i++){
        if(i==x){
            printf(" %d = %d",i,giaithua);
        }else{
            printf(" %d *", i);
        }
    }

}