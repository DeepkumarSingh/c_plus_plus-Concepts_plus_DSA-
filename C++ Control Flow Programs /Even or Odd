// C++ program to check whether a number is Even or Odd (using Function)

#include<iostream>
using namespace std;

bool isEven(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int num;
    cout<<"Enter the number you want to check  :"<<endl;
    cin>>num;
    
    if(isEven(num)){
        cout<<"Number is Even"<<endl;
        
    }
    else{
        cout<<"Number is Odd "<<endl;
    }
} 


                                                    (Alternative method- uisng Bitwise operator) 
#include <iostream>
using namespace std;

// Returns true if n is even, else odd
bool isEven(int n)
{

	// n^1 is n+1, then even, else odd
	if ((n ^ 1) == (n + 1))
		return true;
	else
		return false;
}

// Driver code
int main()
{
	//int n = 1;
	//isEven(n) ? cout << "Even" : cout << "Odd";
    bool ans = isEven(303);
    if(ans==true){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
	return 0;
}
