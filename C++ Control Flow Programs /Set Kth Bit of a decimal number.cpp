#include <iostream>

using namespace std;

void set_bit(int k ,int N ){
    int mask=1<<k;
    int ans = N | mask;
    cout<<ans;
    
}

int main()
{

    int k,N;
    cout<<"Enter the Number : "<<endl;
    cin>>N;
    cout<<"Enter the kth bit to be set "<<endl;
    cin>>k;
    set_bit(k,N);
    
    return 0;
}
OUTPUT:
Enter the Number : 
10
Enter the kth bit to be set 
2
14
