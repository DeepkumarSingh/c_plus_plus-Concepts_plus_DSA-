#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    // for outer loop
    for (int i = 0; i < n; i++)
    {
        // printing space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // printing stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* "; /// Be caraefull here don not miss the space after star otherwise you got half pyramid
        }
        cout << endl;
    }

    return 0;
}
