#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of Rows :" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
OUTPUT:
Enter the number of  Rows :
7
*******
*******
*******
*******
*******
*******
*******
