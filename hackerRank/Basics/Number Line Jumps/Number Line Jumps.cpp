#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(v1 == v2)
        cout << "NO";
    else if((((x2-x1)%(v1-v2)) == 0)&& (v1>v2))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
