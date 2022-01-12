#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,j,k,l;
    cin >> T;
    int arr[T];
    arr[0]=0;
    for(int i=1;i<=T;i++)
        cin >> arr[i];

    for( j=1;j<=T;j++)
    {
        for( k=1;k<=T;k++)
            if(j == arr[k])
                break;
        for(l=1;l<=T;l++)
            if(k == arr[l])
            cout << l << endl;
    }
    return 0;
}
