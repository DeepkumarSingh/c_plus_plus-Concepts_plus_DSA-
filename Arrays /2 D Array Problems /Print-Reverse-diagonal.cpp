#include <iostream>
using namespace std;

void reverse_diagonal_sum(int arr[][4],int n){
  int sum=0;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      if(i+j==n){
        sum=sum+arr[i][j];
      }
    }
  }
   cout<<sum<<endl;
  }
  int main() {
  int arr[4][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
  };
  int n=3;
  reverse_diagonal_sum(arr,n);
  return 0;
}
