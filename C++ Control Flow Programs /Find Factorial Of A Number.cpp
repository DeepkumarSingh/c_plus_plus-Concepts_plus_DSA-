// C++ Program To Find Factorial Of A Number

#include<iostream>


using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
           fact =fact*i;
            
    }
        cout<<"The factorial of n is "<<fact<<endl;
}
