--> c++ program to swap alternate element of an array (without using swap functions i.e using a temperory varaiable)

#include <iostream>
using namespace std;

void printArray(int arr[],int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
    
    void swapAlternate(int arr[],int n){
        int temp;
        for(int i=0;i<n;i+=2){
            if((i+1)<n){
                //swap(arr[i],arr[i+1]);
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
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
