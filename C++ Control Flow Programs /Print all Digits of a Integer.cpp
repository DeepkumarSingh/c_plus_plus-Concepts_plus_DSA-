#include<iostream>
using namespace std;

void print_allDigits(int n){
    int digit;
    while(n>0){
        digit=n%10;
        n/=10;
        cout<<digit<<endl;
    }
}
int main(){
    int  n;
    cout<<"Enter the Integer Value :";
    cin>>n;
    
    print_allDigits(n);
    //cout<<Answer<<endl;

    return 0;
}
OUTPUT:
Enter the Integer Value :123
3
2
1
