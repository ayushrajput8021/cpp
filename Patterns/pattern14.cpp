#include <iostream>
using namespace std;

int main()
{
    int row = 1, n, col = 1;
    cin >> n;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << "-";
            space--;
        }
        col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }
        // if (row != 1)
        // {
        //     int rr = row;
        //     while (rr > 0)
        //     {
        //         rr--;
        //         if (rr != 0)
        //         {
        //             cout<< rr;
        //         }
        //     }
        // }
        int start = row -1;
        while(start)
        {
            cout<<start;
            start-=1;
        }
        cout << endl;
        row++;
    }
    return 0;
}