#include<bits/stdc++.h>
using namespace std;

/*
    Print a hollow Rectangle.
    
    eg-> *****
         *   *
         *   *
         *   *
         *****
*/

int main(){ 

   /* code */
    int row,col;
    // getting User input
    cin>>row>>col;
    // printing pattern

    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= col; j++){
            if(i==1||i==row||j==1||j==col)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

    /*
        input - 5 6 
        output-  
                ******
                *    *
                *    *
                *    *
                ****** 
    */
    

    return 0;
}