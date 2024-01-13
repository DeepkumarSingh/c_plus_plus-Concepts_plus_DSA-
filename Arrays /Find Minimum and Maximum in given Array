--> C++ program to calculate the min and max term in array ...

#include <iostream>
#include<limits.h>        // header file for using INT_MAX & INT_MIN 
using namespace std;

    int getMax(int num[],int n){
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,num[i]);
        }
        return maxi;
    }                                                                
    
    int getMin(int num[],int n){
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(mini,num[i]);
        }
        return mini;
    }
int main()
{
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The Maximum value is "<<getMax(num,size)<<endl;
    cout<<"The Minimum value is "<<getMin(num,size)<<endl;
    return 0;
}

Output :
3
1 -2 10
The Maximum value is 10
The Minimum value is -2

                                                    // OR
#include <iostream>
#include<limits.h>
using namespace std;

int get_min(int arr[],int size){
  int minAns=INT_MAX;
  for(int i=0;i<size;i++){
    if(arr[i]<minAns){
      minAns=arr[i];
    }
  }
  return minAns;
}
int get_max(int arr[],int size){
  int maxAns=INT_MIN;
  for(int i=0;i<size;i++){
    if(arr[i]>maxAns){
      maxAns=arr[i];
    }
  }
  return maxAns;
}
int main() {
  int arr[]={20,4,15,2,6,8,11};
  int size=7;
  int minimum = get_min(arr,size);
  int maximum=get_max(arr,size);
  cout<<"Minimum value in the given array is :"<< minimum<<endl;
  cout<<"Maximum value in the given array is :"<< maximum<<endl;
  //cout << "Hello world!" << endl;
  return 0;
}

OUTPUT:
Minimum value in the given array is :2
Maximum value in the given array is :20

