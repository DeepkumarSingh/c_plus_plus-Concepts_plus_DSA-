// Program to convert Decimal to Binary using method 1 (Division Method).
#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryMethod1(int n)
{
    // Division Method
    int binary_no = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binary_no = bit * pow(10, i) + binary_no;
        n = n / 2;
        i++;
    }
    return binary_no;
}
int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinaryMethod1(n);
    cout << binary << endl;
    return 0;
}

                                                                //or 
/ Program to convert Decimal to Binary using method 1 (Bitwise And Method).
#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryMethod1(int n)
{
    // Bitwise And Method 
    int binary_no = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n &1);
        binary_no = bit * pow(10, i) + binary_no;
        n = n >> 1;
        i++;
    }
    return binary_no;
}
int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinaryMethod1(n);
    cout << binary << endl;
    return 0;
}

