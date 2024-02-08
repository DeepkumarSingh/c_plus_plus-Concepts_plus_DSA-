# C++ program to count the length of the given String entered by the user----

#include <iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Your name is : ";
    cout<<name<<endl;
    
    cout<<"The length of the given String is :"<<getLength(name)<<endl;

    return 0;
}

OUTPUT:
Enter your name :
deep kumar
Your name is : deep
The length of the given String is :4

# Reverse a string ----

#include <iostream>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Your name is : ";
    cout<<name<<endl;
    int length=getLength(name);
    cout<<"The length of the given String is :"<<length<<endl;
    reverse(name,length);
    cout<<"Your name is : ";
    cout<<name<<endl;
    

    return 0;
}              
OUTPUT 1:                                                                                               
Enter your name :                                                                                                    
DEEP                                                                                                      
Your name is : DEEP                                                                                      
The length of the given String is :4                                                                        
Your name is : PEED  

OUTPUT 2:
Enter your name :
DEEP KUMAR
Your name is : DEEP
The length of the given String is :4
Your name is : PEED

#
