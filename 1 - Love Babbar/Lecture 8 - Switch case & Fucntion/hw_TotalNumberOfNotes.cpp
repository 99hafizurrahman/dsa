#include <iostream>
using namespace std;
int main()
{
    int totalRupees = 1395;
    switch (1)
    {
    case 1:
        cout << "Thousand Rupee Notes : " << totalRupees / 1000 << endl;
        totalRupees %= 1000;
    case 2:
        cout << "Fiftee Rupee Notes : " << totalRupees / 50 << endl;
        ;
        totalRupees %= 50;
    case 3:
        cout << "Twenty Rupee Notes : " << totalRupees / 20 << endl;
        totalRupees %= 20;
    case 4:
        cout << "Thousand Notes : " << totalRupees / 1 << endl;
        totalRupees %= 1;

    default:
        break;
    }
}