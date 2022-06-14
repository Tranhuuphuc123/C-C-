#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the n: ");
        scanf("%d", &n);
    }while(n<=0);

    int giaiThua = 1;

    printf("\n");
    printf(" ket qua giai thua cua %d la: \n", n);
    printf("----------------------------\n");


    printf("%d! = ");
    for(int i=1; i<=n; i++){
        giaiThua *=i;
        if(i==n){
            printf("%d = %d", n, giaiThua);
        }else{
            printf(" %d * ", i);
        }
    }
    return 0;
}
