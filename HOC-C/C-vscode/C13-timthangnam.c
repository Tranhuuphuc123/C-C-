#include<stdio.h>
int main(){

    // cach 01 cach day le the
    /*
    int month, year;

    printf("\n enter the month: ");
    scanf("%d", &month);

    printf("\n enter the year: ");
    scanf("%d", &year);

    if(year%400==0 || (year%4==0 && year%100!=0)){
        printf("day la nam nhuan \n");
        printf("----------------------------------\n");

        switch(month){
            case 2: printf(" thang %d co 29 ngay trong nam nhuan", month); break;

            case 1:
            case 3:
            case 5:  
            case 7: 
            case 8: 
            case 10: 
            case 12: 
                         printf("thang %d co 31 ngay", month);
                         break;

            case 4:
            case 9:
            case 6: 
            case 11:
                        printf("thang %d co 30 ngay", month);
                        break;
            default: printf("thang %d ban nhap ngoai pham vi tim kiem", month) ;

        }
    }else{
        printf("day la nam khong nhuan \n"); 
        printf("----------------------------------------\n");

        switch(month){
            case 2: printf(" thang %d co 28 ngay trong nam nhuan", month); break;

            case 1:
            case 3:
            case 5:  
            case 7: 
            case 8: 
            case 10: 
            case 12: 
                         printf("thang %d co 31 ngay", month);
                         break;

            case 4:
            case 9:
            case 6: 
            case 11:
                        printf("thang %d co 30 ngay", month);
                        break;
            default: printf("thang %d ban nhap ngoai pham vi tim kiem", month) ;

        }

    }*/

    

    // cach 02 cach don gian hoan

    int month, year;

    printf("\n enter the year: ");
    scanf("%d", &year);

    printf("\n enter the month: ");
    scanf("%d",&month);

    switch(month){
            case 1:
            case 3:
            case 5:  
            case 7: 
            case 8: 
            case 10: 
            case 12: 
                         printf("thang %d co 31 ngay", month);
                         break;

            case 4:
            case 9:
            case 6: 
            case 11:
                        printf("thang %d co 30 ngay", month);
                        break;
            
            case 2: 
                  if(year%400==0 || (year%4==0 && year%100!=0)){
                      printf(" thang %d thuoc nam nhuan nen co 29 ngay \n ", month);
                  }else{
                      printf(" thang %d khong thuoc nam nhuan nen co 28 ngay ", month);
                  }

    }
    return 0;
}