#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            std::cout << " * ";
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}
