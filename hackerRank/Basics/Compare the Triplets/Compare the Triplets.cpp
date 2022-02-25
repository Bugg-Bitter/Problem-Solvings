#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b[100],Alice=0,Bob=0,i;
    for(i=0;i<3;i++)
        cin >> a[i];
    for(i=0;i<3;i++)
        cin >> b[i];
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            Alice++;
        else if((b[i]>a[i]))
            Bob++;
    }
        cout << Alice << " " << Bob;

    return 0;
}
