#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,A,i,page=1,MM=0,j;
    cin >> T >> A;
    int arr[T];

    for(i=0;i<T;i++)
    {
       cin >> arr[i];
       for(j=1;j<=arr[i];j++)
       {
           if(page == j)
            MM++;
           if(j%A == 0 || j == arr[i])
            page++;
       }
    }
    cout << MM;
    return 0;
}
