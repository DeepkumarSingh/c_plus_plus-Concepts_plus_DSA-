// C++ program to make a mini Calculator using ("+,-,*,/,%)
 
#include <iostream>
using namespace std;

int main()
{
        int a,b;
        cout<<"Enter the value of a :"<<endl;
        cin>>a;
        
        cout<<"Enter the value of b :"<<endl;
        cin>>b;
        
        char op;
        cout<<"Enter the Operation you want to perform:"<<endl;
        cin>>op;
        
        switch(op){
            case '+': cout<<"The Value of a+b is :"<<(a+b)<<endl;
            break;
            
            case '-': cout<<"The value of a-b is : "<<(a-b)<<endl;
            break;
            
            case '*': cout<<"The Value of a*b is :"<<(a*b)<<endl;
            break;
            
            case '/': cout<<"The value of a/b is :"<<(a/b)<<endl;
            break;
            
            case '%': cout<<"The value of a%b is :"<<(a%b)<<endl;
            break;
            
            deafult : cout<<"Please Enter a Valid operation "<<endl;
            
            
        }
      return0;  
}
