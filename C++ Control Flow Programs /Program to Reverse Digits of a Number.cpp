// C++ Program to Reverse Digits of a Number

#include<iostream>


using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int r=0;
    while(n>0){
           r=r*10;
           r=r+(n%10);
           
           n=n/10;
    }
        cout<<"The reversed number is "<<r<<endl;
}
                                                                        // or 

// Given a signed 32-bit integer x, return x with its digits reversed . If reversing x causes the value to go outside
the signed 32-bit integer range[-2^32, 2^32 -1] the return 0 Write a c++ program for this ......

#include<iostream>
#include <limits.h> // To use INT_MIN OR INT_MAX we use header file this 

using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int ans=0;
    while(n!=0){
           int digit=n%10;
           if( (ans>INT_MAX/10) || (ans<INT_MIN/10)){
            return 0;
           }
            ans=(ans*10) + digit;
            n=n/10;
    }
        cout<<ans<<endl;
}
