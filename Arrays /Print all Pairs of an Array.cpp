#include <iostream>
using namespace std;

void find_Pairs(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}
int main() {
  int arr[3]={10,20,30};
  int size=3;
  find_Pairs(arr,size);
  return 0;
}
OUTPUT:
(10,10)
(10,20)
(10,30)
(20,10)
(20,20)
(20,30)
(30,10)
(30,20)
(30,30)
