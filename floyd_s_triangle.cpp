#include<bits/stdc++.h>
using namespace std;

/*
    Print a Floyd's triangle.
    
    eg-> 
        1
        2  3
        4  5  6 
        7  8  9  10
        11 12 13 14 15
    
*/

int main(){ 

   /* code */
    int n;
    // getting User input
    cin>>n;
    // printing pattern

    int num = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }

    /*
        input - 5 
        output-       
                1 
                2 3 
                4 5 6 
                7 8 9 10       
                11 12 13 14 15 
    */
    

    return 0;
}