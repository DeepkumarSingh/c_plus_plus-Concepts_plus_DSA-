// Sorting the given vector according to its 1th index 

#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &v)
{
    for(int i=0;i<v.size();i++)
    {
        vector<int>&temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b<<endl;
    } 
    cout<<endl;
}
bool mycomp(vector<int>&a,vector<int>&b)
{
    // return a[0th]<b[0]; This will sort normally by its 0th index which is not for out output
    return a[1]<b[1]; // This will sort according the first index which is required for our output
}
int main() {
  cout<<"Enter the size n: "<<endl;
  vector<vector<int>>v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int a,b;
    cout<<"Enter a & b:"<<endl;
    cin>>a>>b;
    vector<int>temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
    
  }
  cout<<endl;
  cout<<"Here are the values: "<<endl;
  print(v);
  //   sort(v.begin(),v.end()); // this will sort according its 0th index of v[a,b];
  cout<<"Using Custom-Comparator our Sorting is :"<<endl;
  sort(v.begin(),v.end(),mycomp);
  print(v);
  return 0;
} 
