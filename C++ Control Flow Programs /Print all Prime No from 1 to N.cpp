#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n<=1)
    return 0;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter the number which you want to check "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
    if(checkPrime(i)){
        cout<<i<<" ";
    }
    }
    return 0;
}
