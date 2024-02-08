#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of Rows :";
    cin >> m;
    cout << "Enter the number of columns :";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
