#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n "<<endl; // Please enter the num. less than 9 beacuse this pattern is break after value of n
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int start_num_index=8-i;
        int num=i+1;
        int cnt_num=num;
        for(int j=0;j<17;j++){ // here jth index is going (0- 17)th index that's why i had iterated it upto 17th
            if(j==start_num_index && cnt_num>0){
                cout<<num;
                start_num_index+=2;
                cnt_num--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    }
output:
Enter the value of n 
5
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
