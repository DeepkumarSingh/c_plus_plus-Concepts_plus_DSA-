---> C++ program for linear Search of an Array (using function)

#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
      if(arr[i]==key){ 
          
        return 1;
    }
    }
    return 0;
}


int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    cout<<"Enter the Element to search :"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"Key is Present "<<endl;
    }
    else{
        cout<<"Key is Absent "<<endl;
    }
    
    return 0;
}
OUTPUT:1
Enter the Element to search :
1
Key is Present 

OUTPUT:2
Enter the Element to search :
3
Key is Absent 
