// C++ program to calculate no. of Digits in a given Number (Using Function)

#include <iostream>
using namespace std;

int countDigit(int n)
{
	if (n == 0)
		return 1;
	int count = 0;
	while (n != 0) {
		n = n / 10;
		++count;
	}
	return count;
}


int main()
{
    	int n;
    	cout<<"Enter the number you want to check :"<<endl;
    	cin>>n;
	
	cout << "Number of digits : " << countDigit(n);
	return 0;
}
