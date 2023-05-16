/*Bài tập sắp xếp mảng tăng dần*/
#include<iostream>
using namespace std;
#define MAX 10

// method nhap mang
void nhapmang(int arr[], int &n){
  for(int i=0;i<n;i++){
    cout<<"arr["<<i<<"]"<<endl;
    cin>>arr[i];
  }
}

// method xuất mảng
void xuatmang(int arr[], int n){
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

// function sắp xếp mảng tăng dần
void sapxepmang_tangdan(int arr[], int n){
   for(int i =0;i<n-1;i++){
    for(int j = i +1;j<n;j++){
      if(arr[i]>arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }      
      } 
    }
  }


// funtion sắp xếp mảng giảm dần
void sapxepmang_giamdan(int arr[], int n){
   for(int i =0;i<n-1;i++){
    for(int j = i +1;j<n;j++){
      if(arr[i]<arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }      
      } 
    }
  }




// function main thực thi code
int main(){
  int arr[MAX];
  int n;
  cout<<"nhap vao bien n: "<<endl;
  cin>>n;

  //nhập mảng
   nhapmang(arr,n);

   cout<<"======================="<<endl;
   cout<<"mang ban dau chua sap xep"<<endl;
   //xuất mảng
   xuatmang(arr,n);

   // sắp xếp mảng tăng dần
   cout<<"mang sau khi sap xep tang dan: "<<endl;
   sapxepmang_tangdan(arr,n);
   for(int i = 0;i<n;i++){
     cout<<arr[i]<<" ";
   }


  cout<<endl;
   cout<<"mang sap xep giam dan: "<<endl;
   sapxepmang_giamdan(arr,n);
   for(int i = 0;i<n;i++){
     cout<<arr[i]<<" ";
   }

 
   return 0;
}


