// while loop
#include<iostream>
using namespace std;
int main(){
    int i=1;
    while (i<=30)
    {
        if (i%2==0)// i%2!=0
        {
            cout<<i<<"  ";
        }
        i++;   
    }
    return 0;
}

// do while loop
/*#include<iostream>
using namespace std;
int main(){
    int i=1;
    do
    {
        if (i%2==0)// i%2!=0
        {
            cout<<i<<"  ";
        }
        i++;   
    }
    while (i<=30);
    return 0;
}*/

//for loop
/*#include<iostream>
using namespace std;
int main(){
    int i=1;
    for (i; i<=30;i++)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    
    return 0;
}*/