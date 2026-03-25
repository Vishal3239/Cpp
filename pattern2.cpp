#include<bits/stdc++.h>
using namespace std;
/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
// int main()
// {
//     int count=1;
//     for(int row=1;row<=5;++row)
//     {
//         for(int col=1;col<=5;++col)
//         {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
    *
   ***
  *****
 *******
*/
// int main(){
//     int n;
//     cin>>n;
//     for(int row=1;row<=n;++row){
//         for(int space=1;space<=(n-row);++space){
//             cout<<" ";
//         }
//         for(int col=1;col<=row*2-1;++col){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }

/*
    1
   121 
  12321
 1234321
123454321
*/
// int main(){
//     int n;
//     cin>>n;
//     for(int row=1;row<=n;++row){
//         for(int space=1;space<=(n-row);++space){
//             cout<<" ";
//         }
//         for(int col=1;col<=row;++col){
//             cout<<col;
//         }
//         for(int dic=(row-1);dic>=1;--dic){
//             cout<<dic;
//         }
//         cout<<endl;
//     }
// }
/*
    *********
     *******
      *****
       ***
        *
*/
// int main(){
//     int n;
//     cin>>n;
    
//     for(int row=1;row<=n;++row){
//         for(int space=1;space<=row-1;++space){
//             cout<<" ";
//         }
       
//         for(int col=1;col<=n-row+1;++col){
//             cout<<"*";
            
//         }
//         for(int ot=1;ot<=(n-row);ot++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

/*
    ********
    ***  ***
    **    **
    *      *
    *      *
    **    ** 
    ***  ***
    ********
*/

int main(){
    int n;
    cin>>n;
    
    for(int row=1;row<=n;++row){
        for(int t1=1;t1<=n-row+1;++t1){
            cout<<"* ";
        }

        for(int space=1;space<=row-1;++space){
            cout<<"  ";
        }
       
        for(int space1=1;space1<=row-1;++space1){
            cout<<"  ";
        }
       
        for(int t2=1;t2<=n-row+1;++t2){
            cout<<"* ";
            
        }
        
        cout<<endl;
        
    }
    for(int row=1;row<=n;++row){
        for(int t3=1;t3<=row;++t3){
            cout<<"* ";
        }
        for(int space=1;space<=n-row;++space){
            cout<<"  ";
        }
       
        for(int space1=1;space1<=n-row;++space1){
            cout<<"  ";
        }
       
        for(int t2=1;t2<=row;++t2){
            cout<<"* ";
            
        }
        cout<<endl;
    }
    
}

