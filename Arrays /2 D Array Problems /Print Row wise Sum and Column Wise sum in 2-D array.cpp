#include <iostream>
using namespace std;
void row_wise_sum(int arr[][4],int row,int col){
  for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
      sum=sum+arr[i][j];
    }
    cout<<sum<<endl;  
  }
}
void col_wise_sum(int arr[][4],int row,int col){
  
  for(int i=0;i<col;i++){
    int sum=0;
    for(int j=0;j<row;j++){
      sum=sum+arr[j][i];
      // cout<<sum1<<endl;
    }
    cout<<sum<<endl;
    }
}
int main() {
  
  int arr[3][4]={
    {10,20,5,7},
    {2,4,6,8},
    {10,15,15,10}
  };
  int row=3;
  int col=4;
  cout<<"Printing Row Wise Sum of given 2d array :"<<endl;
  row_wise_sum(arr,row,col);
  cout<<"Printing column Wise Sum of given 2d array :"<<endl;
  col_wise_sum(arr,row,col);
  return 0;
}
