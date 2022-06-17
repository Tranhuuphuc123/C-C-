#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    int max =0;
    char kyTu;

    do{
        printf("enter the number: ");
        scanf("%d",&n);

        if(max<n){
            max = n;
        }

        printf("\nBan co muon tiep tuc khong (Y/N): ");
        do{
            kyTu=getchar();// thay hàm scanf().
        }while(kyTu !='y' && kyTu!='n' && kyTu!='N' && kyTu !='Y');
    }while(n>0 && kyTu!='n' && n>0 &&kyTu!='N');

    printf("------------------/n");
    printf("\ngia tri lon nhat la: %d", max );
}




// cách 02
/* Viết chương trình thực hiện yêu cầu từ bàn phím( yêu cầu từ meneu lựa CHỌN ĐỂ THỰC THI yêu cầu từ phái người dùng */


/*hàm nguyên mẫu prototype*/
// int timMax(int x);

// /*hàm chính main*/
// int main(){
//     int n, i;
//     int max =0;
//     char kyTu;

  
//  do{
//         printf("\n enter the n: ");
//         scanf("%d", &n);

//         printf("\n* continue Y/N:  *");

//         do{
            
//             // scanf("%c", &kyTu);
//             kyTu = getchar();// sử dụng getchar để nhập một ký tự tg tự chức năng scanf().
            
//         }while( kyTu != 'n' && kyTu != 'y' );


//  }while(n>0 && kyTu!='n');

//  printf("----------------\n");
    
//     switch(kyTu){
//         // case 'y':
//         //      timMax(n);
//         //      break;
    
//         case 'n':
//             timMax(n);
//                break;    
//         default:
//            printf("lua chon khong dung can lua chon dung yeu cau \n");
//     }
// }


// /*hàm con xây dựng*/
// // ham kiểm tra số lớn nhất
// int timMax(int x){
//     int max =0;
//     int arr[x];
//     for(int i=0; i<x; i++){
//             printf("\n enter the %d: ", i+1);
//             scanf("%d", &arr[i]);
//         }

//      for(int i=0; i<x; i++ ){
//             if(max<arr[i]){
//                 max = arr[i];
//             }
//         }
//         printf("\n>>max = %d", max);
//     }
