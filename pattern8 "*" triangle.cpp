/*
Pattern 
****
***
**
*
code:
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    std::cin >> n;
    int row = 1;
    while(row<=n){
        int star = n-row+1;
        while(star){
        cout<<"*";
        star--;
        }
        int col = 1;
        while(col<=row){
            cout<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
