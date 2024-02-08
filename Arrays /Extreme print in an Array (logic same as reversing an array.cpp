                                                            // not best method for odd size array
#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int start =0;
    int end=n-1;
    while(start<=end){
        cout<<arr[start]<<" "<<arr[end]<<" ";
        start++;
        end--;       
    }
    cout<<endl;
}
int main()
{
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};
    reverse(arr,6);
    reverse(brr,5);  
    return 0;
}
OUTPUT:
1 15 4 -2 0 5 
2 4 6 9 3 3 <-- wrong print for this case when(size of the array is odd to solve this problem we use if and else statement below code is given 

                                                        // best code for even & odd size array 

#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int start =0;
    int end=n-1;
    while(start<=end){
        if(start==end){
          cout<<arr[start]<<endl;
        }
        else{
        cout<<arr[start]<<" "<<arr[end]<<" ";
        }
        start++;
        end--;   
    }
    cout<<endl;
}
int main()
{
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};
    reverse(arr,6);
    reverse(brr,5);  
    return 0;
}
OUTPUT:
1 15 4 -2 0 5 
2 4 6 9 3 <-- See here 3 is print only one time 
