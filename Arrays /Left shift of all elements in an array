                                                        // left Shift
#include<iostream>
using namespace std;
void shift_arrays(int arr[],int size){
    int temp=arr[0];
    for(int i=0;i<size;i++){
       arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    shift_arrays(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
OUTPUT:
20 30 40 50 60 10 
