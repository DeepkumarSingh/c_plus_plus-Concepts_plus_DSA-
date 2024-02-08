#include <iostream>
using namespace std;
void diagonal_wise_sum(int arr[][3],int row, int col){
  int sum=0;
  for(int i=0;i<row;i++){
    sum=sum+arr[i][i];
  }
  cout<<sum<<endl;
}
int main() {
  
  int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  int row=3;
  int col=3;
  diagonal_wise_sum(arr,row,col);
  return 0;
}
