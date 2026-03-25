#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"1. Add"<<endl;
    cout<<"2. Sub"<<endl;
    cout<<"3. Mul"<<endl;
    cout<<"4. div"<<endl;
    cout<<"5. exit"<<endl;
    int ch;
    cin>>ch;
    switch (ch)
    {
    case 1:
        int a,b;
        cin>>a>>b;
        cout<<a+b;
        break;
    case 2:
        int c,d;
        cin>>c>>d;
        cout<<c-d;
        break;
    case 5:
        exit;
    
    default:
        cout<<"wrong choice";
        break;
    }
    

    return 0;
}