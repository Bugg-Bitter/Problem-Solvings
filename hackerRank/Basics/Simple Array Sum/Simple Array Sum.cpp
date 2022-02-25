#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int64_t lim,i,su=0;
    cin >> lim;
    int64_t arr[lim];
    for(i=0;i<lim;i++)
    {
        cin >> arr[i];
        su += arr[i];
    }
    cout << su;
    return 0;
}
