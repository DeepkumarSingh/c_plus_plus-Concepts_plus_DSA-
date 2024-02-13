#include<bits/stdc++.h>
using namespace std;
void wave_print_matrix(vector<vector<int> >v){
    int row=v.size();
    int col=v[0].size();
    for(int i=0;i<col;i++){
        // Even no of column -> print top to bottom 
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<v[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<v[j][i]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int> > v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    wave_print_matrix(v);
    return 0;
}
