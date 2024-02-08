//C++ Program To Find If A Character Is Vowel Or Consonant

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if (ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'||
        ch=='i'|| ch=='I'|| ch=='o'|| ch=='O'||
        ch=='u'|| ch=='U'){
            cout<<"Given character is vowel"<<endl;
            
        }
        else{
            cout<<"Given character is consonant"<<endl;
        }
}
