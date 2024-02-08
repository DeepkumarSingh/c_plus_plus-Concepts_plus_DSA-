                                                    // USING DIVISION METHOD 
#include <iostream>
using namespace std;
int count_set_bits(int n){
    int count=0;
    while(n>0){
        int bit =n%2;
        if(bit==1)
        count++;
        n/=2;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the decimal value for calculating the set bits :";
    cin>>n;
    int set_bits=count_set_bits(n);
    cout<<set_bits<<endl;
    return 0;
}
OUTPUT:
Enter the decimal value for calculating the set bits :7865
9

                                                    // USING bITWISE OPERATOR 
#include <iostream>
using namespace std;
int count_set_bits(int n){
    int count=0;
    while(n>0){
        int bit = n&1 ;
        if(bit==1)
        count++;
        n=n>>1;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the decimal value for calculating the set bits :";
    cin>>n;
    int set_bits=count_set_bits(n);
    cout<<set_bits<<endl;
    return 0;
}
OUTPUT:
OUTPUT:
Enter the decimal value for calculating the set bits :7865
9
