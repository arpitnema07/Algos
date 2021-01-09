#include <bits/stdc++.h>
using namespace std;

/*
    Print a palindromic pattern.
    
eg-> 
        1         
      2 1 2       
    3 2 1 2 3     
  4 3 2 1 2 3 4   
5 4 3 2 1 2 3 4 5       

*/

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n-i;j++){
            cout<<"  ";
        }
        int k = i;
        for(int j=1;j<i;j++){
            cout<<k--<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}