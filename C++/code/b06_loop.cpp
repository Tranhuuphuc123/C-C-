#include<iostream>
#include<string>
using namespace std;

/* trong bài tập này chúng ta luyện vòng lặp thông qua bài toán -thực hiện tao menu tro chơi ai là triệu phú
*/

int main()
   int choose;
   string DapAn;

   cout<<"=============MENU==========="<<endl;
   cout<<"1/ Câu 01_Animals?"<<endl;
   cout<<"2/ Câu 02_Traffic?"<<endl;
   cout<<"3/ Câu 03_Foods?"<<endl;
   cout<<"4/ Câu 04_People?"<<endl;
   cout<<"0/ thoat exit!"<<endl;
   cout<<"============================"<<endl;


   do{
     cout<<"ban chon cau hoi nao: "<<endl;
     cin>>choose; 
  } while(choose<0 && choose>5);

    
   switch(choose){
     case 1:
          cout<<"cau hoi: Lion la con gi?"<<endl;
          cout<<"A. Su tu \t\t  B. Ho"<<endl;
          cout<<"C. Bao \t\t D. Meo"<<endl;
          cout<<"\n";

          cout<<"vui long chon dap an: "<<endl;
          cin>>DapAn;
           
          if(DapAn=="A"){
            cout<<"chinh xac!"<<endl;
          }  else{
            cout<<"sai roi!"<<endl;
          }
          break;


     case 2:
     case 3:
     case 4:
           break;


     default:
            cout<<"vui long chon dap an trong menu: "<<endl;
            break;
   }
   return 0;

}








