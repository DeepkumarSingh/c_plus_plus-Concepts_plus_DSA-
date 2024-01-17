                                                                // method 1(we use while loop )--> easy method 
#include<iostream>
using namespace std;
void Set_Zeroes_Ones(int arr[],int size){
    int zeroCount=0;
    int onesCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            onesCount++;
        }
    }
    int index =0;
    while(zeroCount--){
        arr[index]=0;
        index++;
    }
    while(onesCount--){
        arr[index]=1;
        index++;
    }
}
int main() {

int arr[] = {1,0,1,0,1,1};
int size= 6;

Set_Zeroes_Ones(arr, size);

  //printy
for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
}
}
   
                                                          //method 2(we use for loop in this )
#include<iostream>
using namespace std;
void Set_Zeroes_Ones(int arr[],int size){
    int zeroCount=0;
    int onesCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            onesCount++;
        }
    }
int i;
for(i=0;i<zeroCount;i++){
    arr[i]=0;
}
for(int j=i;j<size;j++){
    arr[j]=1;
}
}
int main() {

int arr[] = {1,0,1,0,1,1};
int size= 6;

Set_Zeroes_Ones(arr, size);
for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
}
}
OUTPUT:
0 0 1 1 1 1 
