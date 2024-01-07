#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        int condition=0;
        if(i<n){
           condition =i;
        }
        else{
           condition = n-(i%n)-2;
        }
        
        for(int j=0;j<=condition;j++){
            cout<<"*";
        }
        cout<<endl;
    }    
}

                                                         // Using Ternary operator to reduce some code 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        
        int condition =i<n ? i : n-(i%n)-2;   // here i had use ternary operator to reduce some code
        for(int j=0;j<=condition;j++){
            cout<<"*";
        }
        cout<<endl;
    }    
}
