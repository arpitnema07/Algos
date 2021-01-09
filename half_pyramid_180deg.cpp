#include<bits/stdc++.h>
using namespace std;

/*
    Print a Half Pyramid 180deg.
    
    eg-> 
                  *
                * *
              * * *
            * * * *
          * * * * *
*/

int main(){ 

   /* code */
    int n;
    // getting User input
    cin>>n;
    // printing pattern

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
           if(j<=n-i) cout<<"  ";
           else cout<<"* ";
        }        
        cout<<endl;
    }

    /*
        input - 4
        output-  
                  *
                * *
              * * *
            * * * * 
    */
    

    return 0;
}