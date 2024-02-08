---> c++ program to swap alternate element of an array (using functions )

#include <iostream>
using namespace std;

void printArray(int arr[],int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
    
    void swapAlternate(int arr[],int n){
        for(int i=0;i<n;i+=2){
            if((i+1)<n){
                swap(arr[i],arr[i+1]);
            }
        }   
       
        
}
int main()
{
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};
    
    swapAlternate(arr,6);
    printArray(arr,6);
    
    cout<<endl;
    
    swapAlternate(brr,5);
    printArray(brr,5);
    
    
    return 0;
}
OUTPUT:
4 1 5 0 15 -2

6 2 9 3 4 
