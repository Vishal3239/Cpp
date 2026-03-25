#include <iostream>
using namespace std;
int main()
{
    /*
     pattern - 1
     1 2 3 4
     1 2 3 4
     1 2 3 4
     1 2 3 4
     */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int i = 1;
    while( i <= n){
     int j = 1;
     while( j <= n){
         cout << " " << j;
         j++;
     }
     cout << endl;
     i++;
    } */

    /*
     pattern - 2
     3 2 1
     3 2 1
     3 2 1
     */

    
    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= 1)
        {
            cout << " " << j;
            j--;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 3
    1 2 3
    4 5 6
    7 8 9
    */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int count = 1, i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count += 1;
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 4
    *
    * *
    * * *
    * * * *
    * * * * *
    */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    } */ 

    /*
    pattern - 5
    * * * * *
    * * * *
    * * *
    * * 
    * 
    */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 6
    1
    2 2
    3 3 3
    4 4 4 4 
    */

   /*  int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 7
    1
    2 3
    4 5 6
    7 8 9 10
    */

   /*  int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count += 1;
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 8
    1
    2 3
    3 4 5
    4 5 6 7
    */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        
        while (j <= i)
        {
            cout << count << " ";
            count += 1;
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 9
    1
    2 1
    3 2 1
    4 3 2 1
    */

   /*  int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        int j = 1;
        
        while (j <= i)
        {
            cout << (i-j+1) << " ";
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 10
    A A A
    B B B
    C C C
    */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        int j = 1;
        
        while (j <= n)
        {   char ch = 'A'+i-1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 11
    A B C
    A B C
    A B C
    */

   /*  int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        char j = 1;
        
        while (j <= n)
        {   int ch = 'A'+j-1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 12
    A B C
    B C D
    C D E
    */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        char j = 1;
        
        while (j <= n)
        {   int ch = 'A'+ i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 13
    A 
    B B
    C C C
    */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        int j = 1;
        
        while (j <= i)
        {   char ch = 'A'+ i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 14
    A 
    B C
    D E F
    G H I J
    */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        
        while (j <= i)
        {   char ch = 'A'+ count - 1;
            cout << ch << " ";
            count += 1;
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 15
    A 
    B C
    C D E 
    F G H I 
    */

   /*  int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = ('A'+ n - i);
        while (j <= i)
        {
            cout << ch << " ";
            ch += 1;
            j++;
        }
        cout << endl;
        i++;
    } */

    /*
    pattern - 16
          *
        * *
      * * *
    * * * *
    */

   /*  int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space --;
        }
        
        int j = 1;
        while (j <= i)
        {
            cout << "*" ;
            j++;
        }
        
        cout << endl;
        i++ ;
    } */

    /*
    pattern - 17
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
    */

    /* int n;
    cout << "enter any number: ";
    cin >> n;
    int  i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space --;
        }
        
        int j = 1;
        while (j <= i)
        {
            cout << j ;
            j++;
        }

        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        
        
        cout << endl;
        i++ ;
    } */

    /*
    pattern - 17
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
    */

    // int n;
    // cout << "enter any number: ";
    // cin >> n;
    // int  i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n-i+1)
    //     {
    //         cout << j ;
    //         j++;
    //     }

    //     int k =  1;
    //     while (k <= 2*(i-1))
    //     {
    //         cout << "*";
    //         k++;
    //     } 
    //     int l = n-i+1;
    //     while (l >= 1)
    //     {
    //         cout << l;
    //         l--;
    //     }
    //     cout << endl;
    //     i++ ;
    // }

    /*
        5 5 5 5 5 5 5 5 5
        5 4 4 4 4 4 4 4 5
        5 4 3 3 3 3 3 4 5
        5 4 3 2 2 2 3 4 5
        5 4 3 2 1 2 3 4 5
        5 4 3 2 2 2 3 4 5
        5 4 3 3 3 3 3 4 5
        5 4 4 4 4 4 4 4 5
        5 5 5 5 5 5 5 5 5
    */
   int n=5;
    for(int i = 1; i<= (2*n)-1;i++){
        for(int j = 1; j<=(2*n)-1;j++){
            cout<<n<<" ";
            
        }
        for(int j=2;j<=(2*n)-2;j++){
            cout<<n-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}