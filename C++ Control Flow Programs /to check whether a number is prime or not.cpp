//C++ program to check whether a number is prime or not

#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
bool isprime =true;
for(int i=2;i<n;i++){
    if(n%i==0){
        isprime=false;
        break;
    }
}
if(isprime==false){
    cout<<"Not prime"<<endl;
}
else{
    cout<<"is prime number"<<endl;
}
}


// Alternative method to check whether a number is prime or not(using function)

#include<iostream>
using namespace std;

// Function check whether a number
// is prime or not
bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
		return false;

	// Check from 2 to square root of n
	for (int i = 2; i <n; i++){
		if (n % i == 0)
			return false;
}
	return true;
}

// Driver Code
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
	isPrime(n) ? cout << "yes it is prime \n" : cout << "No it is not prime \n";
	return 0;
}
