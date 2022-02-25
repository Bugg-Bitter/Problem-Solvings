#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,t,total,sum=0;

    cin >> a >> b;

    int arr[a];

    for(i=0;i<a;i++)
      cin >> arr[i];

    cin >> total;

    for(i=0;i<a;i++)
    {
        if(i == b)
            continue;
        else
        sum += arr[i];
    }
    if((sum/2) == total)
        cout << "Bon Appetit";
    else
        cout << total - (sum/2);
    return 0;
}
