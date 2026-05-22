#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    cout<<vec[2]<<endl;
    vector<char>index={'a','b','c','d'};
    for(char val:index){
        cout<<val<<endl;
    }

    
    return 0;
}