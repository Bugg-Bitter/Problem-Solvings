#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,i,j,sum=0;

    cin >> a >> b;

    long int arr[a];

    for(i=0; i<a; i++)
        cin >> arr[i];

    for(i=0; i<a; i++)
        for(j=0; j<a; j++)
        {
            if(i<j)
              if((a[i]+a[j])%b==0)
                    sum++;
        }
        cout << sum;

    return 0;
}
