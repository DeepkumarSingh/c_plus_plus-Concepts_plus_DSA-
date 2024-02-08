#include<iostream>
using namespace std;
void find_triplets(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int z=0;z<size;z++){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[z]<<")"<<endl;
            }
        }
    }
    cout<<endl;
}
int main(){
    int arr[3]={1,2,3};
    int size=3;
    find_triplets(arr,size);
    return 0;
}
OUTPUT:
(1,1,1)
(1,1,2)
(1,1,3)
(1,2,1)
(1,2,2)
(1,2,3)
(1,3,1)
(1,3,2)
(1,3,3)
(2,1,1)
(2,1,2)
(2,1,3)
(2,2,1)
(2,2,2)
(2,2,3)
(2,3,1)
(2,3,2)
(2,3,3)
(3,1,1)
(3,1,2)
(3,1,3)
(3,2,1)
(3,2,2)
(3,2,3)
(3,3,1)
(3,3,2)
