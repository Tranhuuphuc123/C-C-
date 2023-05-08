/*TIỀM HIỂU VỀ CÁC VÒNG LẶP CƠ BẢN TRONG C++*/
#include<iostream>
#include <vector>

using namespace std;
int main(){
  int i;
  for(i=0;i<10;i++){
      cout<<i<<"\t";
  }

cout<<"===============do-while===================="<<endl;
// vòng lặp do-while
  int j=0;
  do{
     cout<<j<<"\t";
     j++;
  }while(j<10);
  


 cout<<"------------while-----------------"<<endl;

  int k =0;
  while(k<10){
    cout<<k<<"\t";
    k++;
  }


cout<<">>>>>>>>>>>>>>>for-each<<<<<<<<<<<<<<<<<<<"<<endl;

// khai báo mảng Vector tương tự ArayList trong C++
  vector<int> numbers = {1, 2, 3, 4, 5};

  for (int num : numbers) {
    cout << num << " ";
  }


  return 0;
}
