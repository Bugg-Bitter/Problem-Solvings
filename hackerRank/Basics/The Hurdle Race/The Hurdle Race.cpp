#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,i,b,big=0,ck;
    cin >> a >> b;
    for(i=0;i<a;i++)
    {
        cin >> ck;
        if(ck > big)
            big = ck;
    }
    if(big>b || big == b)
        cout << big-b;
    else if(b>big)
        cout << "0";
    return 0;
}
