                                                  // 2_pointer appraoch 
#include<iostream>
using namespace std;
void arrange(int arr[],int size){

int j=0;
for(int i=0;i<size;i++){
    if(arr[i]<0){
        swap(arr[i],arr[j]);
        j++;
    }
}
}
void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={-23,-7,12,-10,-11,40,60};
    int size=7;
    arrange(arr,size);
    print_array(arr,size);
    return 0;
}
