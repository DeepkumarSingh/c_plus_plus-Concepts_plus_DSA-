                                                        // recursive approach 
#include<iostream>
using namespace std;
void shift_arrays(int arr[],int size,int k){
    if(k==0){
    return ;
    }
    int temp=arr[0];
    for(int i=0;i<size;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    shift_arrays(arr,size,k-1);
}
    int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int k;
    cout<<"Enter the k value :";
    cin>>k;
    shift_arrays(arr,size,k);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
OUTPUT:
Enter the k value :2 
30 40 50 60 10 20
