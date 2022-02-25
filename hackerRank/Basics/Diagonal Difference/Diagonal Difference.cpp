#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
int MainDiagonal(int mat[][MAX], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                sum += mat[i][j];
        }
    }
    return sum;

}
int SecondaryDiagonal(int mat[][MAX], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) == (n - 1))
                sum += mat[i][j];
        }
    }
    return sum;
}

int main()
{
    int lim,MD,SD;
    int a[100][100];
    cin >> lim;
    for (int i = 0; i < lim; i++) {
        for (int j = 0; j < lim; j++) {
            cin >> a[i][j];
        }
    }

    MD = MainDiagonal(a, lim);
    SD = SecondaryDiagonal(a, lim);

    if (MD > SD)
        cout << MD-SD;

    else if(SD > MD)
    {
        swap(SD,MD);
        cout << MD-SD;
    }
    else
        cout << MD-SD;

    return 0;
}
