#include<iostream>
 using namespace std;

 int main(){
   
   int thang, nam;
   cout<<"nhap vao thang: \n";
   cin>>thang;
   cout<<"nhap vao nam: \n";
   cin>>nam;

   switch (thang)
   {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
             cout<<"month has is 31 days";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
             cout<<"month has 30 days";
             break;
        case 2:
           if(nam%400==0 || nam%4==0 && nam%100!=0){
            cout<<"months has 29 days";
           }else{
            cout<<"months has 28 days";
           }
           break;
        default:
            cout<<"404 not found !";                        
            break;
   }
 }
