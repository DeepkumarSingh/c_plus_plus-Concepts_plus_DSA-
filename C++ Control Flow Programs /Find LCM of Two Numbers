// C++ Program To Find LCM of Two Numbers (Using Euclid Algorithm easiest way to find gcd of any two natural number) 

#include<iostream>
using namespace std;
int gcd(int a,int b){					
    while(b!=0){					----------------------------------------		
    int rem=a%b;					|        				|
    a=b;						|					|
    b=rem;						|					|
}					                |     // using formula a*b = lcm*hcf	|
return a;						|					|
}							|					|
int main(){						|					|
    int a,b,lcm;					|					|
    cout<<"Enter the two numbers ";			|---------------------------------------|
    cin>>a>>b;
    lcm=(a*b)/gcd(a,b);
    cout<<"The GCD of "<< a<<" " << b <<" is "<<lcm<<endl;
    //cout<<gcd(a,b)<<endl;
    return 0;
}
