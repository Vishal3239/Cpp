#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>index;
   int a=index.size();
   cout<<"size of vector="<<a<<endl;
   index.push_back(25);
   index.push_back(30);
   index.push_back(74);
   index.pop_back();
   cout<<"first element="<< index.front()<<endl;
   cout<<"last element="<< index.back()<<endl;
   cout<<"value="<< index.at(0)<<endl;
    cout<<"size of after fush vector="<<index.size()<<endl;
    for(int val:index){
        cout<<val<<endl;
    }
    return 0;
}