#include <iostream>
using namespace std;

int main()
{
    int row = 1, n, col = 1;
    cin >> n;
    while (row <= n)
    {
        col=1;
        while (col<=n-row+1)
        {
            cout <<col<<" ";
            col++;
        }
        int star = (row*2)-2;
        while (star)
        {
            cout << "*"<<" ";
            star--;
        }
        
        col=n-row+1;
        while(col)
        {
            cout<<col<<" ";
            col-=1;
        }
        cout << endl;
        row++;
    }
    return 0;
}