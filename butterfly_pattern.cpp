#include<bits/stdc++.h>
using namespace std;

/*
    Print a Butterfly Pattern.
    
    eg-> 
        *        *
        **      **
        ***    ***
        ****  ****
        **********
        **********
        ****  ****
        ***    ***
        **      **
        *        *       

    
*/


int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
        input - 5
        output - 
                *        *
                **      **
                ***    ***
                ****  ****
                **********
                **********
                ****  ****
                ***    ***
                **      **
                *        *
    */

    
    return 0;
}