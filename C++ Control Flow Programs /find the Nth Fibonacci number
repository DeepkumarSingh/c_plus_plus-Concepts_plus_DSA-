// C++ program to find the Nth Fibonacci number (example for n=5 answer is 3 using 0,1,1,2,3,5,8,13........)

#include <iostream>
using namespace std;

int fib(int n)
{
	int a = 0, b = 1, c, i;
	if (n == 1)
		return 0;
	for (i = 2; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}


int main()
{
	int n;
	cout<<"Enter the nth term of Fibonacci Series which you want to diplay :";
	cin>>n;
    
	cout <<"The "<< n <<"th term is :"  <<fib(n);
	return 0;
}
