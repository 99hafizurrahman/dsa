#include <iostream>
using namespace std;

int main()
{
    //   PATTERN - 1
    //   int row =7,col=7;
    //   for(int i=row ; i>0;i--){
    //     for(int j=1; j<=i;j++){
    //       cout<<j<<" ";
    //     }
    //     cout<<endl;
    //   }

    //   RESULT
    // 1 2 3 4 5 6 7
    // 1 2 3 4 5 6
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // - Pattern 2
    // int row = 4, col = 4;
    // int count = 1;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // RESULT
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // - Pattern 3
    // int row = 4, col = 4;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {

    //         char ch = 'A' + i - 1;

    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // RESULT
    // A A A A
    // B B B B
    // C C C C
    // D D D D

    // Pattern 4
    // int row = 4, col = 4;
    // int count = 0;
    // for (int i = row; i > 0; i--)
    // {
    //     int space = row - i;
    //     for (int s = 0; s < space; s++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Result
    // ****
    //  ***
    //   **
    //    *

    // pattern 5
    // int row = 4, col = 4;
    // int count = 0;
    // for (int i = 1; i <= row; i++)
    // {
    //     int space = row - i;
    //     for (int s = 1; s <= space; s++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     for (int k = i; k > 1; k--)
    //     {
    //         cout << k - 1;
    //     }
    //     cout << endl;
    // }

    // Result
    //    1
    //   121
    //  12321
    // 1234321
}