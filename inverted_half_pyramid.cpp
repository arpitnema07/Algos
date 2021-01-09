#include<bits/stdc++.h>
using namespace std;

/*
    Print a Inverted Half pyramid
    eg-> 
         *****
         ****
         ***
         **
         *
*/

int main(){ 

   /* code */
    int n;
    // getting User input
    cin>>n;
    // printing pattern

    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
        input - 4 
        output-  
                ****
                ***
                **
                *
    */
    

    return 0;
}