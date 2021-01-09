#include<bits/stdc++.h>
using namespace std;

/*
    Print a half Pyramid Using Number.
    
    eg-> 
        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5
        6 6 6 6 6 6

*/

int main(){ 

   /* code */
    int n;
    // getting User input
    cin>>n;
    // printing pattern

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
           cout<<i<<" ";
        }
        cout<<endl;
    }

    /*
        input - 6 
        output-  
        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5
        6 6 6 6 6 6
                
    */
    

    return 0;
}