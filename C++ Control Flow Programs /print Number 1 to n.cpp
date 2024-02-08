// C++ Program to print Number 1 to n using Functions 

#include <iostream>
using namespace std;

void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<< i <<" ";
        
    }
    
}

int main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    printCounting(n);

    return 0;
}
