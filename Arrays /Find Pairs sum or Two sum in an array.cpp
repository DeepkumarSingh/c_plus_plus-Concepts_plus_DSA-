#include <iostream>
using namespace std;

void find_Pairs_Sum(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }  
        }
    }
    
}
int main() {
  int arr[5]={10,20,30,40,50};
  int size=5;
  int sum;
  cout<<"Enter the sum Value : ";
  cin>>sum;
  find_Pairs_Sum(arr,size,sum);
  return 0;
}
OUTPUT:
Enter the sum Value : 50
(10,40)
(20,30)
