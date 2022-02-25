#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,arr[90],B=0,s=0;

    cin >> T;

    for(i=0;i<T;i++)
    {
        cin >> arr[i];
        if(B < arr[i])
            B=arr[i];
    }
    for(i=0;i<T;i++)
    {
        if(B == arr[i])
            s++;
    }

    cout << s;
    return 0;
}
