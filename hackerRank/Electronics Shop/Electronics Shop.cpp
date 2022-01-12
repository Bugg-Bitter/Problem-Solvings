#include<bits/stdc++.h>
using namespace std;
int main()
{
    int budget,lim1,lim2,sum=-1,i,j;
    cin >> budget >> lim1 >> lim2;
    int arr1[lim1],arr2[lim2];

    for(i=0;i<lim1;i++)
    cin >> arr1[i];

    for(i=0;i<lim2;i++)
    cin >> arr2[i];

    for(i=0;i<lim1;i++)
    {
        for(j=0;j<lim2;j++)
            if(((arr1[i] + arr2[j]) > sum)&&((arr1[i] + arr2[j]) <= budget))
               sum = arr1[i] + arr2[j];
    }
    cout << sum;
    return 0;
}
