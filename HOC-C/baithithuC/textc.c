#include <stdio.h>
#include <stdlib.h>

// int main()
// {   int n,i,max=0;
//     char c;
//     do
//     {
//         i=0;
//         printf("nhap vao 1 so: ");
//         scanf("%d",&n);
//         if(max<n){
//             max=n;
//         }
//         printf ("Continue y/n:  ");
//         do
//         {  
//              c = getchar();
//         }while (c != 'y' && c != 'n');
//     }while (c != 'n');

//     printf("so lon nhat la: %d",max);
//     return 0;
// }



// cách 02
/* Viết chương trình thực hiện yêu cầu từ bàn phím( yêu cầu từ meneu lựa CHỌN ĐỂ THỰC THI yêu cầu từ phái người dùng */
#include<stdio.h>
#include<stdlib.h>

/*hàm nguyên mẫu prototype*/
int timMax(int x);

/*hàm chính main*/
int main(){
    int n, i;
    int max =0;
    char kyTu;

  
 do{
        printf("\n enter the n: ");
        scanf("%d", &n);

        do{
            printf("* continue Y/N:  *");
            scanf("%c", &kyTu);
            
        }while( kyTu != 'n' && kyTu != 'y' );


 }while(n>0 && kyTu!='n');

 printf("----------------\n");
    
    switch(kyTu){
        // case 'y':
        //      timMax(n);
        //      break;
    
        case 'n':
            timMax(n);
               break;    
        default:
           printf("lua chon khong dung can lua chon dung yeu cau \n");
    }
}


/*hàm con xây dựng*/
// ham kiểm tra số lớn nhất
int timMax(int x){
    int max =0;
    int arr[x];
    for(int i=0; i<x; i++){
            printf("\n enter the %d: ", i+1);
            scanf("%d", &arr[i]);
        }

     for(int i=0; i<x; i++ ){
            if(max<arr[i]){
                max = arr[i];
            }
        }
        printf("\n>>max = %d", max);
    }
