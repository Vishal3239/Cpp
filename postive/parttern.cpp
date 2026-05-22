/*squer pattern
1 2 3 4   
1 2 3 4 
1 2 3 4 
1 2 3 4 */

/*#include<iostream>
using namespace std;
int main(){
    int  n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*squer pattern
A B C D 
A B C D
A B C D
A B C D */

/*#include<iostream>
using namespace std;
int main(){
    int  n=4;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}*/


/*squer pattern
1 2 3 
4 5 6 
7 8 9 */

/*#include<iostream>
using namespace std;
int main(){
    int  n=3,num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}*/

/*trangle pattern
*
* *
* * *
* * * *          */

/*#include<iostream>
using namespace std;
int main(){
    int  n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*trangle pattern
1
2 2
3 3 3
4 4 4 4         */

/*#include<iostream>
using namespace std;
int main(){
    int  n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}*/

/*trangle pattern
1
1 2
1 2 3
1 2 3 4         */

/*#include<iostream>
using namespace std;
int main(){
    int  n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*trangle pattern
1
2 1
3 2 1
4 3 2 1       */

/*#include<iostream>
using namespace std;
int main(){
    int  n=4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}*/

/*trangle pattern
1
2 3
4 5 6
7 8 9 10       */

/*#include<iostream>
using namespace std;
int main(){
    int  n=4,num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}*/

/*trangle pattern
1 1 1 1
  2 2 2
    3 3
      4         */

#include<iostream>
using namespace std;
int main(){
    int  n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
          for(int j=0;j<n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}