#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,H,L,HC=0,LC=0;
    cin >> T;
    int arr[T];
    for(i=0;i<T;i++)
        cin >> arr[i];
    H=arr[0];
    L=arr[0];
    for(i=0;i<T;i++)
        if(arr[i]>H)
        {
            H = arr[i];
            HC++;
        }
    for(i=0;i<T;i++)
        if(arr[i]<L)
        {
            L = arr[i];
            LC++;
        }
    cout << HC << " " << LC << endl;
    return 0;
}
