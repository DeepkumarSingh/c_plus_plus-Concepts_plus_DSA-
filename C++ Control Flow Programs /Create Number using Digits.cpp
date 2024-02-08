#include<iostream>
using namespace std;

int create_num_using_digits(int no_of_digits){
    int num=0;
    for(int i=0;i<no_of_digits;i++){
        cout<<"digit :";
        int digit;
        cin>>digit;
        num=num*10+digit;
    }
    return num;
}
int main(){
    int  no_of_digits;
    cout<<"Enter the number of digit you want to make : ";
    cin>>no_of_digits;
    int ans= create_num_using_digits(no_of_digits);
    cout<<ans<<endl;
    return 0;
}
OUTPUT:
Enter the number of digit you want to make : 5
digit :1
digit :2
digit :4
digit :5
digit :6
Your Answer is :12456
