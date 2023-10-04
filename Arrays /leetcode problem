# You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].Now, in the given array/list, '"M' numbers are
present twice and one number is present only .You need to find and return that number which is unique in the array/list (in C++ )

#include<iostream>
using namespace std;
int findUnique(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;

}
int main(){
    
    int arr[7]={1,2,3,2,3,1,7};
    int answer=findUnique(arr,7);
    cout<<answer<<endl;
}

OUTPUT:
7
