#include <bits/stdc++.h>
using namespace std;
/* Print a rectangular box Pattern 
    eg ->
        *****
        *****
        *****
        *****
*/

int main()
{
    /* code */
    int row,col;
    // getting User input
    cin>>row>>col;
    // printing pattern

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << "*";
        }
        cout <<endl;
        
    }
    /*
        input - 3 4
        output- ****
                ****    
                ****
                ****
     */
     
    return 0;
}
