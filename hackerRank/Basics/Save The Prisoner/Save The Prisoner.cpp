#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,arr[101],m,n,s,r;
    cin >> T;
    for(i=0;i<T;i++)
    {
        cin >> n >> m >> s;
        if(((m%n)+s-1)%n == 0)
        cout << n << endl;
        else
            cout << ((m%n)+s-1)%n << endl;
    }
    return 0;
}
