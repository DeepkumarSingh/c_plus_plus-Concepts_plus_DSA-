 # insertion sort 

#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int arr[],int n){
    //int arr[7]={10,1,7,4,8,2,11};
    for(int i=1;i<7;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[7]={10,1,7,4,8,2,11};
    
    insertionSort(arr,7);
    
    cout<<"The Insertion Sort of the given array is :"<<" ";
   
    printArray(arr,7);
    
    return 0;
}
//OUTPUT:
//The Insertion Sort of the given array is : 1 2 4 7 8 10 11 

                                                                           // By using vector(simple way to understand insertion sort 
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
void insertionSort(vector<int> &v)
{
  int n=v.size();
  // i=0 leave just thinked that for i=0 element is already sorted 
  for(int i=1;i<n;i++)
  {
    int j=i-1;
    int key=v[i];
    while(j>=0 && v[j]>key)
    {
      v[j+1]=v[j]; // main insertion sort line 
      j--;
    }
    v[j+1]=key; // yaha par 0 index pe key ko store kardega 
  }
  
}
int main() {
  vector<int> v={55,44,33,22,11};
  insertionSort(v);
  print(v);
  return 0;
}
