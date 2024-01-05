#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int k=n;
    for(int i=0;i<n;i++){  // outer loop represent  row
        int c=1;
        for(int j=0;j<k;j++){ // inner loop represent column 
            if(j<n-i-1){
                cout<<" ";
            }
            else if(j<=n-1){
                cout<<c;
                c++;
            }
            else if(j==n){
                c=c-2;
                cout<<c;
                c--;
            }
            else{
                cout<<c;
                c--;
            }
            
        }
        k++; // here k=5 now k++ will increase upto k=8
        cout<<endl;
    }
}
