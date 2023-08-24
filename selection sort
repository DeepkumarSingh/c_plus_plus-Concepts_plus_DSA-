# C++ program for Selection Sort 

#include <iostream>

using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){ 
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main()
{
    
    int arr[5]={64,25,12,22,11};
    
    selectionSort(arr,5);
    
    cout<<"The Selection Sort of the given array is :"<<" ";
    
    printArray(arr,5);

    return 0;
}
OUTPUT:
The Selection Sort of the given array is : 11 12 22 25 64 

