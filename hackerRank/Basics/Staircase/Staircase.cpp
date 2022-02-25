#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, rows;
    cin >> rows;
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
            cout << " ";
        for(j=1; j<=i; j++)
            cout <<"#";
        cout << "\n";
    }
    return 0;
}
